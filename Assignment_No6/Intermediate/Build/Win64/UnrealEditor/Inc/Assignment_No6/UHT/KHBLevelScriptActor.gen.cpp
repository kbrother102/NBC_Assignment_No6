// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment_No6/Public/KHBLevelScriptActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKHBLevelScriptActor() {}

// Begin Cross Module References
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AKHBLevelScriptActor();
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AKHBLevelScriptActor_NoRegister();
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AMovingFlatform_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
UPackage* Z_Construct_UPackage__Script_Assignment_No6();
// End Cross Module References

// Begin Class AKHBLevelScriptActor
void AKHBLevelScriptActor::StaticRegisterNativesAKHBLevelScriptActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKHBLevelScriptActor);
UClass* Z_Construct_UClass_AKHBLevelScriptActor_NoRegister()
{
	return AKHBLevelScriptActor::StaticClass();
}
struct Z_Construct_UClass_AKHBLevelScriptActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "KHBLevelScriptActor.h" },
		{ "ModuleRelativePath", "Public/KHBLevelScriptActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movingclass_MetaData[] = {
		{ "Category", "KHB" },
		{ "ModuleRelativePath", "Public/KHBLevelScriptActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Movingclass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKHBLevelScriptActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKHBLevelScriptActor_Statics::NewProp_Movingclass = { "Movingclass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKHBLevelScriptActor, Movingclass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMovingFlatform_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movingclass_MetaData), NewProp_Movingclass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKHBLevelScriptActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKHBLevelScriptActor_Statics::NewProp_Movingclass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBLevelScriptActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKHBLevelScriptActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment_No6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBLevelScriptActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKHBLevelScriptActor_Statics::ClassParams = {
	&AKHBLevelScriptActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKHBLevelScriptActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKHBLevelScriptActor_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBLevelScriptActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AKHBLevelScriptActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKHBLevelScriptActor()
{
	if (!Z_Registration_Info_UClass_AKHBLevelScriptActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKHBLevelScriptActor.OuterSingleton, Z_Construct_UClass_AKHBLevelScriptActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKHBLevelScriptActor.OuterSingleton;
}
template<> ASSIGNMENT_NO6_API UClass* StaticClass<AKHBLevelScriptActor>()
{
	return AKHBLevelScriptActor::StaticClass();
}
AKHBLevelScriptActor::AKHBLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKHBLevelScriptActor);
AKHBLevelScriptActor::~AKHBLevelScriptActor() {}
// End Class AKHBLevelScriptActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBLevelScriptActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKHBLevelScriptActor, AKHBLevelScriptActor::StaticClass, TEXT("AKHBLevelScriptActor"), &Z_Registration_Info_UClass_AKHBLevelScriptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKHBLevelScriptActor), 975548747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBLevelScriptActor_h_510102736(TEXT("/Script/Assignment_No6"),
	Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBLevelScriptActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBLevelScriptActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
