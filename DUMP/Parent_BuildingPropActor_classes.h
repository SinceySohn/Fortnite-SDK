// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
// Size: 0x1021 (Inherited: 0xef0)
struct AParent_BuildingPropActor_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	bool DebugWind; // 0xef8(0x01)
	char pad_EF9[0x7]; // 0xef9(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xf00(0x10)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xf10(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xf20(0x08)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xf28(0x08)
	double Debug Wind Intensity; // 0xf30(0x08)
	double DebugWindYaw; // 0xf38(0x08)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0xf40(0x10)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0xf50(0x10)
	int32_t CodeControlled_NumberOfMaterials; // 0xf60(0x04)
	char pad_F64[0x4]; // 0xf64(0x04)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0xf68(0x10)
	struct TArray<double> CodeControlled_LightConeOpacity; // 0xf78(0x10)
	bool Animate Emissive and Lights Over Time; // 0xf88(0x01)
	char pad_F89[0x7]; // 0xf89(0x07)
	double Day Phase Transition Length; // 0xf90(0x08)
	bool Disable TOD Lights and Material Emissive Values; // 0xf98(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0xf99(0x01)
	char pad_F9A[0x6]; // 0xf9a(0x06)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0xfa0(0x08)
	bool Use An Alternate Shadow Mesh When The Light is Off ; // 0xfa8(0x01)
	char pad_FA9[0x7]; // 0xfa9(0x07)
	double Volumetric Light Scattering Intensity; // 0xfb0(0x08)
	bool Cast Volumetric Shadows; // 0xfb8(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0xfb9(0x01)
	char pad_FBA[0x6]; // 0xfba(0x06)
	struct UCurveFloat* LightAnimationCurve; // 0xfc0(0x08)
	double CodeControlled_Animation Curve Animation Length; // 0xfc8(0x08)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0xfd0(0x01)
	char pad_FD1[0x7]; // 0xfd1(0x07)
	double Random Time Scale Percent; // 0xfd8(0x08)
	double CodeControlled_CurrentTimeLength; // 0xfe0(0x08)
	struct TArray<struct FBuildingProp_4LayerMaterial_Struct> 4LayerColorInfo; // 0xfe8(0x10)
	double randomInitDayPhaseChangeDelay; // 0xff8(0x08)
	struct FNativeDayPhaseFloats LightIntensityByTimeOfDay; // 0x1000(0x10)
	struct FNativeDayPhaseFloats EmissiveIntensityByTimeOfDay; // 0x1010(0x10)
	bool PropagateBounceToLightComponents; // 0x1020(0x01)

	void validate MID Values For Lights 4Layer(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.validate MID Values For Lights 4Layer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void init_4LayerMaterials(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.init_4LayerMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handleBaseSimple4LayerMaterials(struct UMaterialInstanceDynamic* Mid, double Duration, double Start, double End); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.handleBaseSimple4LayerMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Call Animation Curve Again(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Call Animation Curve Again // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OLD_Set  MID Values For Lights(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OLD_Set  MID Values For Lights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Light parameters(double Previous to Current Day Phase Alpha); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Loop Animation Curve(); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Parent_BuildingPropActor(int32_t EntryPoint); // Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

