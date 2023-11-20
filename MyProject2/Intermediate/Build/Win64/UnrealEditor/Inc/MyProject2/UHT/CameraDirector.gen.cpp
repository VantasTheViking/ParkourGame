// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/CameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT2_API UClass* Z_Construct_UClass_ACameraDirector();
	MYPROJECT2_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraDirector);
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		if (!Z_Registration_Info_UClass_ACameraDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraDirector.OuterSingleton, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraDirector.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
	ACameraDirector::~ACameraDirector() {}
	struct Z_CompiledInDeferFile_FID_Users_Ethan_Miguel_Documents_GitHub_UnrealTesting_MyProject2_Source_MyProject2_CameraDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Miguel_Documents_GitHub_UnrealTesting_MyProject2_Source_MyProject2_CameraDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraDirector, ACameraDirector::StaticClass, TEXT("ACameraDirector"), &Z_Registration_Info_UClass_ACameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraDirector), 1654755996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Miguel_Documents_GitHub_UnrealTesting_MyProject2_Source_MyProject2_CameraDirector_h_2699309758(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_Users_Ethan_Miguel_Documents_GitHub_UnrealTesting_MyProject2_Source_MyProject2_CameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ethan_Miguel_Documents_GitHub_UnrealTesting_MyProject2_Source_MyProject2_CameraDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
