// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment_No6/Public/GMST.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMST() {}

// Begin Cross Module References
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AGMST();
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AGMST_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Assignment_No6();
// End Cross Module References

// Begin Class AGMST
void AGMST::StaticRegisterNativesAGMST()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMST);
UClass* Z_Construct_UClass_AGMST_NoRegister()
{
	return AGMST::StaticClass();
}
struct Z_Construct_UClass_AGMST_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GMST.h" },
		{ "ModuleRelativePath", "Public/GMST.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMST>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGMST_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment_No6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMST_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMST_Statics::ClassParams = {
	&AGMST::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMST_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMST_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMST()
{
	if (!Z_Registration_Info_UClass_AGMST.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMST.OuterSingleton, Z_Construct_UClass_AGMST_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMST.OuterSingleton;
}
template<> ASSIGNMENT_NO6_API UClass* StaticClass<AGMST>()
{
	return AGMST::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMST);
AGMST::~AGMST() {}
// End Class AGMST

// Begin Registration
struct Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_GMST_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMST, AGMST::StaticClass, TEXT("AGMST"), &Z_Registration_Info_UClass_AGMST, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMST), 2369963502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_GMST_h_1076728280(TEXT("/Script/Assignment_No6"),
	Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_GMST_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_GMST_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
