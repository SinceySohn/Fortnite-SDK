// BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// Size: 0x1000 (Inherited: 0xef0)
struct AAthena_Prop_ParentBuildingContainerBlueprint_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	bool DebugWind; // 0xef8(0x01)
	char pad_EF9[0x7]; // 0xef9(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xf00(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xf10(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xf18(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xf28(0x08)
	double DebugWindYaw; // 0xf30(0x08)
	double Debug Wind Intensity; // 0xf38(0x08)
	bool Set Max Actor Scale; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	double Max Scale; // 0xf48(0x08)
	bool Disable TOD Lights and Material Emissive Values; // 0xf50(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0xf51(0x01)
	bool Use An Alternate Shadow Mesh When The Light is On ; // 0xf52(0x01)
	char pad_F53[0x5]; // 0xf53(0x05)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0xf58(0x08)
	bool Animate Emissive and Lights Over Time; // 0xf60(0x01)
	char pad_F61[0x7]; // 0xf61(0x07)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0xf68(0x10)
	struct TArray<double> CodeControlled_LightConeOpacity; // 0xf78(0x10)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0xf88(0x10)
	double Day Phase Transition Length; // 0xf98(0x08)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0xfa0(0x10)
	double Volumetric Light Scattering Intensity; // 0xfb0(0x08)
	bool Cast Volumetric Shadows; // 0xfb8(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0xfb9(0x01)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0xfba(0x01)
	char pad_FBB[0x5]; // 0xfbb(0x05)
	struct UCurveFloat* LightAnimationCurve; // 0xfc0(0x08)
	double CodeControlled_Animation Curve Animation Length; // 0xfc8(0x08)
	int32_t CodeControlled_NumberOfMaterials; // 0xfd0(0x04)
	char pad_FD4[0x4]; // 0xfd4(0x04)
	struct TArray<double> ; // 0xfd8(0x10)
	double Random Time Scale Percent; // 0xfe8(0x08)
	double CodeControlled_CurrentPlayLength; // 0xff0(0x08)
	double Snow Coverage Amount; // 0xff8(0x08)

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Loop Animation Curve(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetSearched(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

