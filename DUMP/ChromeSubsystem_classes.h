// BlueprintGeneratedClass ChromeSubsystem.ChromeSubsystem_C
// Size: 0x7a0 (Inherited: 0x598)
struct UChromeSubsystem_C : UFortChromeSubsystem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x598(0x08)
	enum class B_Lackluster_ActorTypes ActorType; // 0x5a0(0x01)
	enum class B_Lackluster_ChromeTypes ChromeType; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct TArray<struct FB_Lackluster_ChromeMaterialStruct> ChromeMaterialStructs; // 0x5a8(0x10)
	struct TArray<struct FB_Lackluster_OriginalMaterialStruct> OriginalMaterialStructs; // 0x5b8(0x10)
	enum class ELacklusterActorType NativeActorType; // 0x5c8(0x01)
	enum class ELacklusterChromeType NativeChromeType; // 0x5c9(0x01)
	char pad_5CA[0x6]; // 0x5ca(0x06)
	struct TArray<struct FLacklusterMaterialData> NativeChromeMaterialStructs; // 0x5d0(0x10)
	struct TArray<struct FLacklusterOriginalMaterialData> NativeOriginalMaterialStructs; // 0x5e0(0x10)
	struct TMap<struct FName, double> ContainerMaterialScalarParamMap; // 0x5f0(0x50)
	struct TMap<struct FName, struct FLinearColor> ContainerMaterialVectorParamMap; // 0x640(0x50)
	struct TMap<struct AActor*, struct UChromeSoundComponent_C*> ChromeSoundComponents; // 0x690(0x50)
	struct TMap<struct AActor*, bool> BuildingChromeApplied; // 0x6e0(0x50)
	struct TMap<struct AActor*, struct FB_Lackluster_MaterialsAndTypes> ActorMaterialsAndTypes; // 0x730(0x50)
	struct FGameplayTagContainer ContainerTags; // 0x780(0x20)

	void HandleContainerRandomUpgradeApplied(struct ABuildingContainer* BuildingContainer, int32_t UpgradeIndex, struct FName& UpgradeLootTierGroup); // Function ChromeSubsystem.ChromeSubsystem_C.HandleContainerRandomUpgradeApplied // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleVehicleModUpdated(struct AFortAthenaVehicle* Vehicle, struct FGameplayTag& ModTag); // Function ChromeSubsystem.ChromeSubsystem_C.HandleVehicleModUpdated // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleContainerMeshSetChanged(struct ABuildingSMActor* BuildingSMActor, struct FMeshSet& NewMeshSet); // Function ChromeSubsystem.ChromeSubsystem_C.HandleContainerMeshSetChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleContainerSearchedStateChanged(struct ABuildingContainer* BuildingContainer, bool bSearched); // Function ChromeSubsystem.ChromeSubsystem_C.HandleContainerSearchedStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindChromeEvents(struct AActor* Actor); // Function ChromeSubsystem.ChromeSubsystem_C.UnbindChromeEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindChromeEvents(struct AActor* Actor); // Function ChromeSubsystem.ChromeSubsystem_C.BindChromeEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChromeToActor(struct AActor* Actor); // Function ChromeSubsystem.ChromeSubsystem_C.ApplyChromeToActor // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void InitLacklusterFunctionLibrary(); // Function ChromeSubsystem.ChromeSubsystem_C.InitLacklusterFunctionLibrary // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetupChromeOnActor(struct AActor* Actor); // Function ChromeSubsystem.ChromeSubsystem_C.SetupChromeOnActor // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestoreActorOriginalMaterials(struct AActor* Actor); // Function ChromeSubsystem.ChromeSubsystem_C.RestoreActorOriginalMaterials // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChromeSubsystem(int32_t EntryPoint); // Function ChromeSubsystem.ChromeSubsystem_C.ExecuteUbergraph_ChromeSubsystem // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

