// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_PDFGENBPLibrary.h"
#include "FF_PDFGEN.h"

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