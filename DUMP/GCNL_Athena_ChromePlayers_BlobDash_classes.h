// BlueprintGeneratedClass GCNL_Athena_ChromePlayers_BlobDash.GCNL_Athena_ChromePlayers_BlobDash_C
// Size: 0x980 (Inherited: 0x960)
struct AGCNL_Athena_ChromePlayers_BlobDash_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	int32_t SpeedLineCount; // 0x968(0x04)
	char pad_96C[0x4]; // 0x96c(0x04)
	struct AFortPlayerPawn* As Fort Player Pawn; // 0x970(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x978(0x08)

	void SetAudioComponentParams(struct TArray<struct UAudioComponent*>& BurstAudioComponents); // Function GCNL_Athena_ChromePlayers_BlobDash.GCNL_Athena_ChromePlayers_BlobDash_C.SetAudioComponentParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ChromePlayers_BlobDash.GCNL_Athena_ChromePlayers_BlobDash_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromePlayers_BlobDash.GCNL_Athena_ChromePlayers_BlobDash_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ChromePlayers_BlobDash(int32_t EntryPoint); // Function GCNL_Athena_ChromePlayers_BlobDash.GCNL_Athena_ChromePlayers_BlobDash_C.ExecuteUbergraph_GCNL_Athena_ChromePlayers_BlobDash // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

