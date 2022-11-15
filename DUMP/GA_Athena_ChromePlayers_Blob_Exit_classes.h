// BlueprintGeneratedClass GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C
// Size: 0xc40 (Inherited: 0xc02)
struct UGA_Athena_ChromePlayers_Blob_Exit_C : UGA_Athena_Blob_Exit_C {
	char pad_C02[0x6]; // 0xc02(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc08(0x08)
	struct FTimerHandle TimerHandle_FailsafeCheck; // 0xc10(0x08)
	struct FScalableFloat Row_GrantingEffectDuration; // 0xc18(0x28)

	void FailsafeCheck(); // Function GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C.FailsafeCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Exit(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_Blob_Exit.GA_Athena_ChromePlayers_Blob_Exit_C.ExecuteUbergraph_GA_Athena_ChromePlayers_Blob_Exit // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

