// BlueprintGeneratedClass ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C
// Size: 0x11d0 (Inherited: 0x10d8)
struct AParentBuildingContainerBlueprint_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d8(0x08)
	bool DebugWind; // 0x10e0(0x01)
	char pad_10E1[0x7]; // 0x10e1(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0x10e8(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0x10f8(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x1100(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0x1110(0x08)
	double DebugWindYaw; // 0x1118(0x08)
	double Debug Wind Intensity; // 0x1120(0x08)
	bool Set Max Actor Scale; // 0x1128(0x01)
	char pad_1129[0x7]; // 0x1129(0x07)
	double Max Scale; // 0x1130(0x08)
	bool Disable TOD Lights and Material Emissive Values; // 0x1138(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0x1139(0x01)
	bool Use An Alternate Shadow Mesh When The Light is On ; // 0x113a(0x01)
	char pad_113B[0x5]; // 0x113b(0x05)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0x1140(0x08)
	bool Animate Emissive and Lights Over Time; // 0x1148(0x01)
	char pad_1149[0x7]; // 0x1149(0x07)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0x1150(0x10)
	struct TArray<double> CodeControlled_LightConeOpacity; // 0x1160(0x10)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0x1170(0x10)
	double Day Phase Transition Length; // 0x1180(0x08)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0x1188(0x10)
	double Volumetric Light Scattering Intensity; // 0x1198(0x08)
	bool Cast Volumetric Shadows; // 0x11a0(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0x11a1(0x01)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0x11a2(0x01)
	char pad_11A3[0x5]; // 0x11a3(0x05)
	struct UCurveFloat* LightAnimationCurve; // 0x11a8(0x08)
	double CodeControlled_Animation Curve Animation Length; // 0x11b0(0x08)
	int32_t CodeControlled_NumberOfMaterials; // 0x11b8(0x04)
	char pad_11BC[0x4]; // 0x11bc(0x04)
	double Random Time Scale Percent; // 0x11c0(0x08)
	double CodeControlled_CurrentPlayLength; // 0x11c8(0x08)

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetSearched(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Loop Animation Curve(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ExecuteUbergraph_ParentBuildingContainerBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

