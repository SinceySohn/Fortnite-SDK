// BlueprintGeneratedClass GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C
// Size: 0x9e8 (Inherited: 0x960)
struct AGCNL_Athena_ChromePlayers_BlobState_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UChromeSoundComponent_C* ChromeSoundComponent; // 0x968(0x08)
	struct USkeletalMesh* CachedSkeletalMesh; // 0x970(0x08)
	struct TArray<struct UMaterialInterface*> CachedMeshMaterials; // 0x978(0x10)
	struct UAnimInstance* CachedAnimClass; // 0x988(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x990(0x08)
	struct TArray<enum class EFortCustomPartType> Part Types; // 0x998(0x10)
	bool bHasSetMeshToBlob; // 0x9a8(0x01)
	bool bIsWalking; // 0x9a9(0x01)
	char pad_9AA[0x6]; // 0x9aa(0x06)
	struct TArray<struct UFXSystemComponent*> LoogingParticles; // 0x9b0(0x10)
	int32_t FXRibbonID; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct UNiagaraSystem* NS_Override_JumpSplashInWater; // 0x9c8(0x08)
	struct UNiagaraSystem* NS_Override_SwimmingComponent; // 0x9d0(0x08)
	struct UNiagaraSystem* NS_Cached_JumpSplashInWater; // 0x9d8(0x08)
	struct UNiagaraSystem* NS_Cached_SwimmingComponent; // 0x9e0(0x08)

	void SetCharacterPartVisibility(bool NewVisibility); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.SetCharacterPartVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAudioStates(struct AActor* Actor, bool IsBlobState); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.SetAudioStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CacheInitialState(); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.CacheInitialState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBlobMeshEnabled(bool Enabled); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.SetBlobMeshEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void JumpDetect(); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.JumpDetect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetOverrideWaterFXEnabled(bool Enabled); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.SetOverrideWaterFXEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ChromePlayers_BlobState(int32_t EntryPoint); // Function GCNL_Athena_ChromePlayers_BlobState.GCNL_Athena_ChromePlayers_BlobState_C.ExecuteUbergraph_GCNL_Athena_ChromePlayers_BlobState // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

