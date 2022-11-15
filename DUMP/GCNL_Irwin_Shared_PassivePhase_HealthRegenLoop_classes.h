// BlueprintGeneratedClass GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop.GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C
// Size: 0x96c (Inherited: 0x960)
struct AGCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	int32_t Class Test; // 0x968(0x04)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop.GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C.OnRemove // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop.GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop.GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop(int32_t EntryPoint); // Function GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop.GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop_C.ExecuteUbergraph_GCNL_Irwin_Shared_PassivePhase_HealthRegenLoop // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

