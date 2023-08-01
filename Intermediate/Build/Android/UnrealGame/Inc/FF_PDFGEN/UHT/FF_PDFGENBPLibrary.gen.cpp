// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FF_PDFGEN/Public/FF_PDFGENBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFF_PDFGENBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UFF_PDFGENBPLibrary();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UFF_PDFGENBPLibrary_NoRegister();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UPdfGenDoc();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UPdfGenDoc_NoRegister();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UPdfGenFont();
	FF_PDFGEN_API UClass* Z_Construct_UClass_UPdfGenFont_NoRegister();
	FF_PDFGEN_API UFunction* Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FF_PDFGEN();
// End Cross Module References
	void UPdfGenDoc::StaticRegisterNativesUPdfGenDoc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPdfGenDoc);
	UClass* Z_Construct_UClass_UPdfGenDoc_NoRegister()
	{
		return UPdfGenDoc::StaticClass();
	}
	struct Z_Construct_UClass_UPdfGenDoc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPdfGenDoc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_PDFGEN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPdfGenDoc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_PDFGENBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPdfGenDoc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPdfGenDoc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPdfGenDoc_Statics::ClassParams = {
		&UPdfGenDoc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPdfGenDoc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPdfGenDoc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPdfGenDoc()
	{
		if (!Z_Registration_Info_UClass_UPdfGenDoc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPdfGenDoc.OuterSingleton, Z_Construct_UClass_UPdfGenDoc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPdfGenDoc.OuterSingleton;
	}
	template<> FF_PDFGEN_API UClass* StaticClass<UPdfGenDoc>()
	{
		return UPdfGenDoc::StaticClass();
	}
	UPdfGenDoc::UPdfGenDoc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPdfGenDoc);
	UPdfGenDoc::~UPdfGenDoc() {}
	void UPdfGenFont::StaticRegisterNativesUPdfGenFont()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPdfGenFont);
	UClass* Z_Construct_UClass_UPdfGenFont_NoRegister()
	{
		return UPdfGenFont::StaticClass();
	}
	struct Z_Construct_UClass_UPdfGenFont_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPdfGenFont_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_PDFGEN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPdfGenFont_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_PDFGENBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPdfGenFont_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPdfGenFont>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPdfGenFont_Statics::ClassParams = {
		&UPdfGenFont::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPdfGenFont_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPdfGenFont_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPdfGenFont()
	{
		if (!Z_Registration_Info_UClass_UPdfGenFont.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPdfGenFont.OuterSingleton, Z_Construct_UClass_UPdfGenFont_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPdfGenFont.OuterSingleton;
	}
	template<> FF_PDFGEN_API UClass* StaticClass<UPdfGenFont>()
	{
		return UPdfGenFont::StaticClass();
	}
	UPdfGenFont::UPdfGenFont(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPdfGenFont);
	UPdfGenFont::~UPdfGenFont() {}
	struct Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics
	{
		struct _Script_FF_PDFGEN_eventDelegatePdfGen_Parms
		{
			bool bIsSuccessfull;
			FString OutCode;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_FF_PDFGEN_eventDelegatePdfGen_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_FF_PDFGEN_eventDelegatePdfGen_Parms), &Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_PDFGEN_eventDelegatePdfGen_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::NewProp_OutCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FF_PDFGEN, nullptr, "DelegatePdfGen__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::_Script_FF_PDFGEN_eventDelegatePdfGen_Parms), Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FF_PDFGEN_DelegatePdfGen__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDelegatePdfGen_DelegateWrapper(const FScriptDelegate& DelegatePdfGen, bool bIsSuccessfull, const FString& OutCode)
{
	struct _Script_FF_PDFGEN_eventDelegatePdfGen_Parms
	{
		bool bIsSuccessfull;
		FString OutCode;
	};
	_Script_FF_PDFGEN_eventDelegatePdfGen_Parms Parms;
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false;
	Parms.OutCode=OutCode;
	DelegatePdfGen.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFF_PDFGENBPLibrary::execPDFGen_Add_Text)
	{
		P_GET_OBJECT_REF(UPdfGenDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Text);
		P_GET_STRUCT(FVector2D,Z_Param_In_Location);
		P_GET_STRUCT(FVector2D,Z_Param_In_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FontSize);
		P_GET_STRUCT(FColor,Z_Param_In_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_PDFGENBPLibrary::PDFGen_Add_Text(Z_Param_Out_In_PDF,Z_Param_PageIndex,Z_Param_In_Text,Z_Param_In_Location,Z_Param_In_Rotation,Z_Param_FontSize,Z_Param_In_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_PDFGENBPLibrary::execPDFGen_Doc_Close)
	{
		P_GET_OBJECT_REF(UPdfGenDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_PDFGENBPLibrary::PDFGen_Doc_Close(Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_PDFGENBPLibrary::execPDFGen_Doc_Save)
	{
		P_GET_OBJECT_REF(UPdfGenDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_PDFGENBPLibrary::PDFGen_Doc_Save(Z_Param_Out_In_PDF,Z_Param_In_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_PDFGENBPLibrary::execPDFGen_Doc_Create)
	{
		P_GET_OBJECT_REF(UPdfGenDoc,Z_Param_Out_Out_PDF);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Author);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Creator);
		P_GET_STRUCT(FDateTime,Z_Param_In_Date);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Producer);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Subject);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Title);
		P_GET_STRUCT(FVector2D,Z_Param_In_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_PDFGENBPLibrary::PDFGen_Doc_Create(Z_Param_Out_Out_PDF,Z_Param_In_Author,Z_Param_In_Creator,Z_Param_In_Date,Z_Param_In_Producer,Z_Param_In_Subject,Z_Param_In_Title,Z_Param_In_Size);
		P_NATIVE_END;
	}
	void UFF_PDFGENBPLibrary::StaticRegisterNativesUFF_PDFGENBPLibrary()
	{
		UClass* Class = UFF_PDFGENBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PDFGen_Add_Text", &UFF_PDFGENBPLibrary::execPDFGen_Add_Text },
			{ "PDFGen_Doc_Close", &UFF_PDFGENBPLibrary::execPDFGen_Doc_Close },
			{ "PDFGen_Doc_Create", &UFF_PDFGENBPLibrary::execPDFGen_Doc_Create },
			{ "PDFGen_Doc_Save", &UFF_PDFGENBPLibrary::execPDFGen_Doc_Save },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics
	{
		struct FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms
		{
			UPdfGenDoc* In_PDF;
			int32 PageIndex;
			FString In_Text;
			FVector2D In_Location;
			FVector2D In_Rotation;
			float FontSize;
			FColor In_Color;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Color;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, In_PDF), Z_Construct_UClass_UPdfGenDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Text = { "In_Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, In_Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Location = { "In_Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, In_Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Rotation = { "In_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, In_Rotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, FontSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Color = { "In_Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms, In_Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms), &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_In_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFGen|Write" },
		{ "DisplayName", "PDFGen - Add Text" },
		{ "Keywords", "pdf, gen, create, doc, docs, document, write" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_PDFGENBPLibrary, nullptr, "PDFGen_Add_Text", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::FF_PDFGENBPLibrary_eventPDFGen_Add_Text_Parms), Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics
	{
		struct FF_PDFGENBPLibrary_eventPDFGen_Doc_Close_Parms
		{
			UPdfGenDoc* In_PDF;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Close_Parms, In_PDF), Z_Construct_UClass_UPdfGenDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_PDFGENBPLibrary_eventPDFGen_Doc_Close_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_PDFGENBPLibrary_eventPDFGen_Doc_Close_Parms), &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFGen|Write" },
		{ "DisplayName", "PDFGen - Close Document" },
		{ "Keywords", "pdf, gen, save, doc, docs, document, write" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_PDFGENBPLibrary, nullptr, "PDFGen_Doc_Close", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::FF_PDFGENBPLibrary_eventPDFGen_Doc_Close_Parms), Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics
	{
		struct FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms
		{
			UPdfGenDoc* Out_PDF;
			FString In_Author;
			FString In_Creator;
			FDateTime In_Date;
			FString In_Producer;
			FString In_Subject;
			FString In_Title;
			FVector2D In_Size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_PDF;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Author;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Creator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Date;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Producer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Subject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Title;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_Out_PDF = { "Out_PDF", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, Out_PDF), Z_Construct_UClass_UPdfGenDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Author = { "In_Author", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Author), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Creator = { "In_Creator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Creator), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Date = { "In_Date", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Producer = { "In_Producer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Producer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Subject = { "In_Subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Subject), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Title = { "In_Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Size = { "In_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms, In_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_Out_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Creator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Producer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::NewProp_In_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFGen|Write" },
		{ "DisplayName", "PDFGen - Create Document" },
		{ "Keywords", "pdf, gen, create, doc, docs, document, write" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_PDFGENBPLibrary, nullptr, "PDFGen_Doc_Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::FF_PDFGENBPLibrary_eventPDFGen_Doc_Create_Parms), Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics
	{
		struct FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms
		{
			UPdfGenDoc* In_PDF;
			FString In_Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms, In_PDF), Z_Construct_UClass_UPdfGenDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_In_Path = { "In_Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms, In_Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms), &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_In_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFGen|Write" },
		{ "DisplayName", "PDFGen - Save Document" },
		{ "Keywords", "pdf, gen, save, doc, docs, document, write" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_PDFGENBPLibrary, nullptr, "PDFGen_Doc_Save", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::FF_PDFGENBPLibrary_eventPDFGen_Doc_Save_Parms), Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFF_PDFGENBPLibrary);
	UClass* Z_Construct_UClass_UFF_PDFGENBPLibrary_NoRegister()
	{
		return UFF_PDFGENBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_PDFGEN,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Add_Text, "PDFGen_Add_Text" }, // 731228350
		{ &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Close, "PDFGen_Doc_Close" }, // 2666531016
		{ &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Create, "PDFGen_Doc_Create" }, // 10698415
		{ &Z_Construct_UFunction_UFF_PDFGENBPLibrary_PDFGen_Doc_Save, "PDFGen_Doc_Save" }, // 305302231
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FF_PDFGENBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_PDFGENBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFF_PDFGENBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::ClassParams = {
		&UFF_PDFGENBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFF_PDFGENBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFF_PDFGENBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFF_PDFGENBPLibrary.OuterSingleton, Z_Construct_UClass_UFF_PDFGENBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFF_PDFGENBPLibrary.OuterSingleton;
	}
	template<> FF_PDFGEN_API UClass* StaticClass<UFF_PDFGENBPLibrary>()
	{
		return UFF_PDFGENBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFF_PDFGENBPLibrary);
	UFF_PDFGENBPLibrary::~UFF_PDFGENBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_PDFGEN_Source_FF_PDFGEN_Public_FF_PDFGENBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_PDFGEN_Source_FF_PDFGEN_Public_FF_PDFGENBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPdfGenDoc, UPdfGenDoc::StaticClass, TEXT("UPdfGenDoc"), &Z_Registration_Info_UClass_UPdfGenDoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPdfGenDoc), 4249044391U) },
		{ Z_Construct_UClass_UPdfGenFont, UPdfGenFont::StaticClass, TEXT("UPdfGenFont"), &Z_Registration_Info_UClass_UPdfGenFont, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPdfGenFont), 965126526U) },
		{ Z_Construct_UClass_UFF_PDFGENBPLibrary, UFF_PDFGENBPLibrary::StaticClass, TEXT("UFF_PDFGENBPLibrary"), &Z_Registration_Info_UClass_UFF_PDFGENBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFF_PDFGENBPLibrary), 1032439015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_PDFGEN_Source_FF_PDFGEN_Public_FF_PDFGENBPLibrary_h_595920495(TEXT("/Script/FF_PDFGEN"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_PDFGEN_Source_FF_PDFGEN_Public_FF_PDFGENBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_PDFGEN_Source_FF_PDFGEN_Public_FF_PDFGENBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
