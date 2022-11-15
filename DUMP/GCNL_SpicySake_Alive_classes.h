// BlueprintGeneratedClass GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C
// Size: 0x9c8 (Inherited: 0x9a0)
struct AGCNL_SpicySake_Alive_C : AFortSpicySakeGameplayCueNotifyLoop_Alive {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UFortLayeredAudioComponent* FortLayeredAudio; // 0x9a8(0x08)
	struct UNiagaraComponent* LandFX; // 0x9b0(0x08)
	struct UNiagaraComponent* WaterFX; // 0x9b8(0x08)
	struct AFortPawn* FortPawnRef; // 0x9c0(0x08)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void InitializeGCNLAndAttach(struct UObject* Object); // Function GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C.InitializeGCNLAndAttach // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_SpicySake_Alive(int32_t EntryPoint); // Function GCNL_SpicySake_Alive.GCNL_SpicySake_Alive_C.ExecuteUbergraph_GCNL_SpicySake_Alive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

