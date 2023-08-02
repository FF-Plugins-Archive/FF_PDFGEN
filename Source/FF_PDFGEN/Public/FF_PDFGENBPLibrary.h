// Copyright Epic Games, Inc. All Rights Reserved.

/*
* LibHaru Source Code
* https://github.com/AndreRenaud/PDFGen
*/

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#include "pdfgen.h"
THIRD_PARTY_INCLUDES_END

#include "ExtendedVarsBPLibrary.h"

#include "FF_PDFGENBPLibrary.generated.h"

UCLASS(BlueprintType)
class FF_PDFGEN_API UPdfGenDoc : public UObject
{
	GENERATED_BODY()

public:

	pdf_doc* Document = nullptr;

	TArray<pdf_object*> Pages;

};

UCLASS(BlueprintType)
class FF_PDFGEN_API UPdfGenFont : public UObject
{
	GENERATED_BODY()

public:

	
};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegatePdfGen, bool, bIsSuccessfull, FString, OutCode);

UCLASS()
class UFF_PDFGENBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDFGen - Create Document", Keywords = "pdf, gen, create, doc, docs, document, write"), Category = "PDFGen|Write")
	static void PDFGen_Doc_Create(UPdfGenDoc*& Out_PDF, FString In_Author, FString In_Creator, FDateTime In_Date, FString In_Producer, FString In_Subject, FString In_Title, FVector2D In_Size);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDFGen - Save Document", Keywords = "pdf, gen, save, doc, docs, document, write"), Category = "PDFGen|Write")
	static bool PDFGen_Doc_Save(UPARAM(ref)UPdfGenDoc*& In_PDF, FString In_Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDFGen - Close Document", Keywords = "pdf, gen, save, doc, docs, document, write"), Category = "PDFGen|Write")
	static bool PDFGen_Doc_Close(UPARAM(ref)UPdfGenDoc*& In_PDF);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDFGen - Add Text", Keywords = "pdf, gen, create, doc, docs, document, write"), Category = "PDFGen|Write")
	static bool PDFGen_Add_Text(UPARAM(ref)UPdfGenDoc*& In_PDF, int32 PageIndex, FString In_Text, FVector2D In_Location, FVector2D In_Rotation, float FontSize, FColor In_Color);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDFGen - Add Image", Keywords = "pdf, gen, create, doc, docs, document, write"), Category = "PDFGen|Write")
	static bool PDFGen_Add_Image(UPARAM(ref)UPdfGenDoc*& In_PDF, int32 PageIndex, UObject* In_Texture, FVector2D In_Location, FVector2D In_Rotation, FColor TransparentColor);

};
