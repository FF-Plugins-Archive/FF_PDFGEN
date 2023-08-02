// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_PDFGENBPLibrary.h"
#include "FF_PDFGEN.h"

// UE Includes.
#include "ImageUtils.h"
#include "Kismet/KismetStringLibrary.h"
#include "Engine/TextureRenderTarget2D.h"

THIRD_PARTY_INCLUDES_START
#include <iostream>
THIRD_PARTY_INCLUDES_END

UFF_PDFGENBPLibrary::UFF_PDFGENBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UFF_PDFGENBPLibrary::PDFGen_Doc_Create(UPdfGenDoc*& Out_PDF, FString In_Author, FString In_Creator, FDateTime In_Date, FString In_Producer, FString In_Subject, FString In_Title, FVector2D In_Size)
{
	pdf_info PDF_Info;
	memset(&PDF_Info, 0, sizeof(pdf_info));

#ifdef _WIN64
	strcpy_s(PDF_Info.author, TCHAR_TO_UTF8(*In_Author));
	strcpy_s(PDF_Info.creator, TCHAR_TO_UTF8(*In_Creator));
	strcpy_s(PDF_Info.date, TCHAR_TO_UTF8(*In_Date.ToString()));
	strcpy_s(PDF_Info.producer, TCHAR_TO_UTF8(*In_Producer));
	strcpy_s(PDF_Info.subject, TCHAR_TO_UTF8(*In_Subject));
	strcpy_s(PDF_Info.title, TCHAR_TO_UTF8(*In_Title));
#endif

#ifdef __ANDROID__
	strcpy(PDF_Info.author, TCHAR_TO_UTF8(*In_Author));
	strcpy(PDF_Info.creator, TCHAR_TO_UTF8(*In_Creator));
	strcpy(PDF_Info.date, TCHAR_TO_UTF8(*In_Date.ToString()));
	strcpy(PDF_Info.producer, TCHAR_TO_UTF8(*In_Producer));
	strcpy(PDF_Info.subject, TCHAR_TO_UTF8(*In_Subject));
	strcpy(PDF_Info.title, TCHAR_TO_UTF8(*In_Title));
#endif

	Out_PDF = NewObject<UPdfGenDoc>();

	pdf_doc* Document = pdf_create(PDF_A4_WIDTH, PDF_A4_HEIGHT, &PDF_Info);
	Out_PDF->Pages.Add(pdf_append_page(Document));
	Out_PDF->Document = Document;
}

bool UFF_PDFGENBPLibrary::PDFGen_Doc_Save(UPARAM(ref)UPdfGenDoc*& In_PDF, FString In_Path)
{
	if (!IsValid(In_PDF))
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	int Result = pdf_save(In_PDF->Document, TCHAR_TO_UTF8(*In_Path));

	if (Result < 0)
	{
		return false;
	}

	else
	{
		return true;
	}
}

bool UFF_PDFGENBPLibrary::PDFGen_Doc_Close(UPARAM(ref)UPdfGenDoc*& In_PDF)
{
	if (!IsValid(In_PDF))
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	pdf_destroy(In_PDF->Document);

	In_PDF = nullptr;

	return true;
}

bool UFF_PDFGENBPLibrary::PDFGen_Add_Text(UPARAM(ref)UPdfGenDoc*& In_PDF, int32 PageIndex, FString In_Text, FVector2D In_Location, FVector2D In_Rotation, float FontSize, FColor In_Color)
{
	if (!IsValid(In_PDF))
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	pdf_object* TargetPage = In_PDF->Pages[PageIndex];

	if (!TargetPage)
	{
		return false;
	}

	int Result = pdf_add_text(In_PDF->Document, In_PDF->Pages[PageIndex], TCHAR_TO_UTF8(*In_Text), FontSize, (int)In_Location.X, (int)In_Location.Y, PDF_RGB(In_Color.R, In_Color.G, In_Color.B));

	if (Result == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool PDF_Image_Callback(UPARAM(ref)UPdfGenDoc*& In_PDF, pdf_object* TargetPage, UObject* Target_Image, FVector2D In_Location, FColor TransparentColor)
{
	UTexture2D* Texture2D = Cast<UTexture2D>(Target_Image);

	FVector2D Size;
	TArray64<uint8_t> Bytes;

	if (Texture2D)
	{
		Size = FVector2D(Texture2D->GetSizeX(), Texture2D->GetSizeY());

#if WITH_EDITOR

		FImage Image;
		FImageUtils::GetTexture2DSourceImage(Texture2D, Image);

		Bytes.SetNum(Image.RawData.Num());
		FMemory::Memcpy(Bytes.GetData(), Image.RawData.GetData(), Image.RawData.Num());

#else

		if (Texture2D->GetPixelFormat() == EPixelFormat::PF_B8G8R8A8 && Texture2D->CompressionSettings.GetIntValue() == 5 || Texture2D->CompressionSettings.GetIntValue() == 7)
		{
			FTexture2DMipMap& Texture_Mip = Texture2D->GetPlatformData()->Mips[0];
			void* Texture_Data = Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

			int64 BufferSize = Size.X * Size.Y * 4;
			if (BufferSize > Texture_Mip.BulkData.GetBulkDataSize())
			{
				UE_LOG(LogTemp, Display, TEXT("LibHaru PDF : Texture settings are not compatible."))

					Texture_Mip.BulkData.Unlock();

				return nullptr;
			}

			Bytes.SetNum(BufferSize);
			FMemory::Memcpy(Bytes.GetData(), (uint8_t*)Texture_Data, Size.X * Size.Y * 4);

			Texture_Mip.BulkData.Unlock();

			UE_LOG(LogTemp, Display, TEXT("LibHaru PDF : Texture2D image insertion from runtime."))
		}

		else
		{
			UE_LOG(LogTemp, Display, TEXT("LibHaru PDF : Texture settings are not compatible."))

				return nullptr;
		}

#endif // WITH_EDITOR
	}

	UTextureRenderTarget2D* TRT2D = Cast<UTextureRenderTarget2D>(Target_Image);

	if (TRT2D)
	{
		Size = FVector2D(TRT2D->SizeX, TRT2D->SizeY);
		FImageUtils::GetRawData(TRT2D, Bytes);

		UE_LOG(LogTemp, Display, TEXT("LibHaru PDF : TextureRenderTarget2D image insertion."))
	}

	if (!Texture2D && !TRT2D)
	{
		UE_LOG(LogTemp, Display, TEXT("LibHaru PDF : There is no image to read."))
			return nullptr;
	}

	TArray<FColor> Array_Colors;
	Array_Colors.SetNum(Size.X * Size.Y);
	FMemory::Memcpy(Array_Colors.GetData(), Bytes.GetData(), Bytes.Num());

	TArray64<uint8_t> Bytes_24;
	Bytes_24.SetNum((int64)Array_Colors.Num() * 3);

	for (int32 Index_Colors = 0; Index_Colors < Array_Colors.Num(); Index_Colors++)
	{
		if (Array_Colors[Index_Colors].A == 0)
		{
			Bytes_24[static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3] = TransparentColor.R;
			Bytes_24[(static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3) + 1] = TransparentColor.G;
			Bytes_24[(static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3) + 2] = TransparentColor.B;
		}

		else
		{
			Bytes_24[static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3] = Array_Colors[Index_Colors].R;
			Bytes_24[(static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3) + 1] = Array_Colors[Index_Colors].G;
			Bytes_24[(static_cast<TArray<uint8, FDefaultAllocator64>::SizeType>(Index_Colors) * 3) + 2] = Array_Colors[Index_Colors].B;
		}
	}

	int Result = pdf_add_rgb24(In_PDF->Document, TargetPage, In_Location.X, In_Location.Y, Size.X, Size.Y, Bytes_24.GetData(), (uint32_t)Size.X, (uint32_t)Size.Y);

	if (Result < 0)
	{
		return false;
	}

	else
	{
		return true;
	}
}

bool UFF_PDFGENBPLibrary::PDFGen_Add_Image(UPARAM(ref)UPdfGenDoc*& In_PDF, int32 PageIndex, UObject* In_Texture, FVector2D In_Location, FVector2D In_Rotation, FColor TransparentColor)
{
	if (!IsValid(In_PDF))
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	if (!In_Texture)
	{
		return false;
	}

	pdf_object* TargetPage = In_PDF->Pages[PageIndex];

	if (!TargetPage)
	{
		return false;
	}

	return PDF_Image_Callback(In_PDF, TargetPage, In_Texture, In_Location, TransparentColor);
}