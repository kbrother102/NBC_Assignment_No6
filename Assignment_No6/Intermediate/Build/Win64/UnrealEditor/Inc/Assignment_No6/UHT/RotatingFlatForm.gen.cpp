// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment_No6/Public/RotatingFlatForm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingFlatForm() {}

// Begin Cross Module References
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_ARotatingFlatForm();
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_ARotatingFlatForm_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Assignment_No6();
// End Cross Module References

// Begin Class ARotatingFlatForm
void ARotatingFlatForm::StaticRegisterNativesARotatingFlatForm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingFlatForm);
UClass* Z_Construct_UClass_ARotatingFlatForm_NoRegister()
{
	return ARotatingFlatForm::StaticClass();
}
struct Z_Construct_UClass_ARotatingFlatForm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingFlatForm.h" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "FlatForm|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "FlatForm|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotDirection_MetaData[] = {
		{ "Category", "FlatForm|Property" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotSpeed_MetaData[] = {
		{ "Category", "FlatForm|Property" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTimer_MetaData[] = {
		{ "Category", "FlatForm|Property" },
		{ "ModuleRelativePath", "Public/RotatingFlatForm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingFlatForm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingFlatForm, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingFlatForm, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RotDirection = { "RotDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingFlatForm, RotDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotDirection_MetaData), NewProp_RotDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RotSpeed = { "RotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingFlatForm, RotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotSpeed_MetaData), NewProp_RotSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RTimer = { "RTimer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingFlatForm, RTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTimer_MetaData), NewProp_RTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingFlatForm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RotDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RotSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingFlatForm_Statics::NewProp_RTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingFlatForm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingFlatForm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment_No6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingFlatForm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingFlatForm_Statics::ClassParams = {
	&ARotatingFlatForm::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingFlatForm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingFlatForm_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingFlatForm_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingFlatForm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingFlatForm()
{
	if (!Z_Registration_Info_UClass_ARotatingFlatForm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingFlatForm.OuterSingleton, Z_Construct_UClass_ARotatingFlatForm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingFlatForm.OuterSingleton;
}
template<> ASSIGNMENT_NO6_API UClass* StaticClass<ARotatingFlatForm>()
{
	return ARotatingFlatForm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingFlatForm);
ARotatingFlatForm::~ARotatingFlatForm() {}
// End Class ARotatingFlatForm

// Begin Registration
struct Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_RotatingFlatForm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingFlatForm, ARotatingFlatForm::StaticClass, TEXT("ARotatingFlatForm"), &Z_Registration_Info_UClass_ARotatingFlatForm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingFlatForm), 1708665110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_RotatingFlatForm_h_1874055281(TEXT("/Script/Assignment_No6"),
	Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_RotatingFlatForm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_RotatingFlatForm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
