// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KHBCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ASSIGNMENT_NO6_KHBCharacter_generated_h
#error "KHBCharacter.generated.h already included, missing '#pragma once' in KHBCharacter.h"
#endif
#define ASSIGNMENT_NO6_KHBCharacter_generated_h

#define FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKHBCharacter(); \
	friend struct Z_Construct_UClass_AKHBCharacter_Statics; \
public: \
	DECLARE_CLASS(AKHBCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment_No6"), NO_API) \
	DECLARE_SERIALIZER(AKHBCharacter)


#define FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKHBCharacter(AKHBCharacter&&); \
	AKHBCharacter(const AKHBCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKHBCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKHBCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKHBCharacter) \
	NO_API virtual ~AKHBCharacter();


#define FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_13_PROLOG
#define FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_NO6_API UClass* StaticClass<class AKHBCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_03_GameProgramming_06_GitHub_NBC_Assignment_No6_Assignment_No6_Source_Assignment_No6_Public_KHBCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
