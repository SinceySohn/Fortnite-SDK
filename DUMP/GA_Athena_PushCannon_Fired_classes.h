// BlueprintGeneratedClass GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C
// Size: 0xb34 (Inherited: 0xb20)
struct UGA_Athena_PushCannon_Fired_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FGameplayTag ReloadingCue; // 0xb30(0x04)

	void EventReceived_754FCB724B0719D064732A99C8CBBF35(struct FGameplayEventData Payload); // Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.EventReceived_754FCB724B0719D064732A99C8CBBF35 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_PushCannon_Fired(int32_t EntryPoint); // Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.ExecuteUbergraph_GA_Athena_PushCannon_Fired // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

