// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment_No6/Public/KHBCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKHBCharacter() {}

// Begin Cross Module References
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AKHBCharacter();
ASSIGNMENT_NO6_API UClass* Z_Construct_UClass_AKHBCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Assignment_No6();
// End Cross Module References

// Begin Class AKHBCharacter Function Look
struct Z_Construct_UFunction_AKHBCharacter_Look_Statics
{
	struct KHBCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_Look_Statics::KHBCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_Look_Statics::KHBCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function Look

// Begin Class AKHBCharacter Function Move
struct Z_Construct_UFunction_AKHBCharacter_Move_Statics
{
	struct KHBCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90 \xec\xa1\xb4\xec\x9e\xac\xeb\xa7\x8c \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90 \xec\xa1\xb4\xec\x9e\xac\xeb\xa7\x8c \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_Move_Statics::KHBCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_Move_Statics::KHBCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function Move

// Begin Class AKHBCharacter Function StartJump
struct Z_Construct_UFunction_AKHBCharacter_StartJump_Statics
{
	struct KHBCharacter_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\x85\xeb\xa0\xa5 \xeb\xb0\xb8\xeb\xa5\x98 \xed\x83\x80\xec\x9e\x85( 1D, 2D,...)\n" },
#endif
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x85\xeb\xa0\xa5 \xeb\xb0\xb8\xeb\xa5\x98 \xed\x83\x80\xec\x9e\x85( 1D, 2D,...)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::KHBCharacter_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::KHBCharacter_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function StartJump

// Begin Class AKHBCharacter Function StartSprint
struct Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics
{
	struct KHBCharacter_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::KHBCharacter_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::KHBCharacter_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function StartSprint

// Begin Class AKHBCharacter Function StopJump
struct Z_Construct_UFunction_AKHBCharacter_StopJump_Statics
{
	struct KHBCharacter_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\xb8\xea\xb9\x8d\xec\x9d\x80 \xec\x99\xa0\xeb\xa7\x8c\xed\x95\x98\xeb\xa9\xb4 \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84\xeb\x95\x8c\xec\x99\x80 \xeb\x97\x90\xec\x9d\x84\xeb\x95\x8c \xeb\x82\x98\xeb\x88\xa0\xec\xa3\xbc\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\xb8\xea\xb9\x8d\xec\x9d\x80 \xec\x99\xa0\xeb\xa7\x8c\xed\x95\x98\xeb\xa9\xb4 \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84\xeb\x95\x8c\xec\x99\x80 \xeb\x97\x90\xec\x9d\x84\xeb\x95\x8c \xeb\x82\x98\xeb\x88\xa0\xec\xa3\xbc\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::KHBCharacter_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::KHBCharacter_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function StopJump

// Begin Class AKHBCharacter Function StopSprint
struct Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics
{
	struct KHBCharacter_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KHBCharacter_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKHBCharacter, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::KHBCharacter_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::KHBCharacter_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKHBCharacter_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKHBCharacter_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKHBCharacter::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AKHBCharacter Function StopSprint

// Begin Class AKHBCharacter
void AKHBCharacter::StaticRegisterNativesAKHBCharacter()
{
	UClass* Class = AKHBCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AKHBCharacter::execLook },
		{ "Move", &AKHBCharacter::execMove },
		{ "StartJump", &AKHBCharacter::execStartJump },
		{ "StartSprint", &AKHBCharacter::execStartSprint },
		{ "StopJump", &AKHBCharacter::execStopJump },
		{ "StopSprint", &AKHBCharacter::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKHBCharacter);
UClass* Z_Construct_UClass_AKHBCharacter_NoRegister()
{
	return AKHBCharacter::StaticClass();
}
struct Z_Construct_UClass_AKHBCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KHBCharacter.h" },
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "KHBCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81\xec\x95\x94\xea\xb3\xbc \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xeb\x8b\xac\xea\xb8\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81\xec\x95\x94\xea\xb3\xbc \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xeb\x8b\xac\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "KHBCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KHBCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKHBCharacter_Look, "Look" }, // 1796110346
		{ &Z_Construct_UFunction_AKHBCharacter_Move, "Move" }, // 616536981
		{ &Z_Construct_UFunction_AKHBCharacter_StartJump, "StartJump" }, // 4277269484
		{ &Z_Construct_UFunction_AKHBCharacter_StartSprint, "StartSprint" }, // 2658134442
		{ &Z_Construct_UFunction_AKHBCharacter_StopJump, "StopJump" }, // 2988916212
		{ &Z_Construct_UFunction_AKHBCharacter_StopSprint, "StopSprint" }, // 2900733715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKHBCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKHBCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKHBCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKHBCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKHBCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKHBCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKHBCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKHBCharacter_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKHBCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment_No6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKHBCharacter_Statics::ClassParams = {
	&AKHBCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKHBCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKHBCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKHBCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AKHBCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKHBCharacter()
{
	if (!Z_Registration_Info_UClass_AKHBCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKHBCharacter.OuterSingleton, Z_Construct_UClass_AKHBCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKHBCharacter.OuterSingleton;
}
template<> ASSIGNMENT_NO6_API UClass* StaticClass<AKHBCharacter>()
{
	return AKHBCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKHBCharacter);
AKHBCharacter::~AKHBCharacter() {}
// End Class AKHBCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKHBCharacter, AKHBCharacter::StaticClass, TEXT("AKHBCharacter"), &Z_Registration_Info_UClass_AKHBCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKHBCharacter), 431805922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_3300287938(TEXT("/Script/Assignment_No6"),
	Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
