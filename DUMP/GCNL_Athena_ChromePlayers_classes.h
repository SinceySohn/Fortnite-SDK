// BlueprintGeneratedClass GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C
// Size: 0x9a0 (Inherited: 0x960)
struct AGCNL_Athena_ChromePlayers_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UChromeSoundComponent_C* ChromeSoundComponent; // 0x968(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x970(0x08)
	struct FName MaterialScalarParam_ChromeCharactersStrength; // 0x978(0x04)
	float ChromeStrength; // 0x97c(0x04)
	bool ChromeEnabled; // 0x980(0x01)
	char pad_981[0x3]; // 0x981(0x03)
	struct FGameplayTag Tag_GCBlobState; // 0x984(0x04)
	struct USoundBase* DeactivateSound; // 0x988(0x08)
	float Delay_InitialChromeMaterialApplication; // 0x990(0x04)
	char pad_994[0x4]; // 0x994(0x04)
	struct USoundBase* RemovalSound; // 0x998(0x08)

	void PlayAttachRemovalAudio(); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.PlayAttachRemovalAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsLocalPawn(struct AFortPawn* FortPawn, bool& Islocal); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.IsLocalPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetCharacterParts(struct AFortPlayerPawn* InPlayerPawn, struct TArray<struct USkeletalMeshComponent*>& CharacterParts); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.GetCharacterParts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void PlayLocalAudio(struct USoundBase* sound, bool& Islocal, struct UAudioComponent*& AudioComponent); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.PlayLocalAudio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAudioChromeState(bool IsChromed); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.SetAudioChromeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetPlayerChromeMaterials(bool Enabled); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.SetPlayerChromeMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ChromePlayers(int32_t EntryPoint); // Function GCNL_Athena_ChromePlayers.GCNL_Athena_ChromePlayers_C.ExecuteUbergraph_GCNL_Athena_ChromePlayers // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

