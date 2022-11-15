// BlueprintGeneratedClass GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C
// Size: 0x9a8 (Inherited: 0x960)
struct AGCNL_RepairTool_Surface_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* SFX_SurfaceLoop; // 0x968(0x08)
	struct AActor* TargetActor; // 0x970(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0x978(0x04)
	char pad_97C[0x4]; // 0x97c(0x04)
	struct FTimerHandle RemovalTimer; // 0x980(0x08)
	struct USoundBase* WoodSurfaceSound; // 0x988(0x08)
	struct USoundBase* MetalSurfaceSound; // 0x990(0x08)
	struct USoundBase* GenericSurfaceSound; // 0x998(0x08)
	double Fade Out Duration; // 0x9a0(0x08)

	void GetSoundFromSurface(struct USoundBase*& sound); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.GetSoundFromSurface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void DestroyCue(); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.DestroyCue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_RepairTool_Surface(int32_t EntryPoint); // Function GCNL_RepairTool_Surface.GCNL_RepairTool_Surface_C.ExecuteUbergraph_GCNL_RepairTool_Surface // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

