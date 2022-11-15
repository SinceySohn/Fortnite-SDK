// BlueprintGeneratedClass GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C
// Size: 0x998 (Inherited: 0x960)
struct AGCNL_PhaseableBuild_Player_Phase_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct USoundBase* SFX_PhaseWall_Player; // 0x968(0x08)
	struct USoundBase* SFX_PhaseFloor_Player; // 0x970(0x08)
	struct USoundBase* SFX_PhaseCeiling_Player; // 0x978(0x08)
	struct USoundBase* SFX_PhaseWall_Wall; // 0x980(0x08)
	struct USoundBase* SFX_PhaseFloor_Floor; // 0x988(0x08)
	struct USoundBase* SFX_PhaseCeiling_Ceiling; // 0x990(0x08)

	void Set Audio Comp Team Affiliation(struct UAudioComponent* AudioComponent, struct AActor* Pawn); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.Set Audio Comp Team Affiliation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePhaseSounds(struct AActor* Player, struct FVector PhaseLocation, struct FVector Normal); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.HandlePhaseSounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_PhaseableBuild_Player_Phase(int32_t EntryPoint); // Function GCNL_PhaseableBuild_Player_Phase.GCNL_PhaseableBuild_Player_Phase_C.ExecuteUbergraph_GCNL_PhaseableBuild_Player_Phase // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

