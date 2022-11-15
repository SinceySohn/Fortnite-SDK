// BlueprintGeneratedClass GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C
// Size: 0xb3c (Inherited: 0xb20)
struct UGA_Athena_Vehicle_Boost_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	double TriggerDuration; // 0xb30(0x08)
	struct FGameplayTag BoostCue; // 0xb38(0x04)

	void EventReceived_E4232094451482BC683CB7B08344D26A(struct FGameplayEventData Payload); // Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.EventReceived_E4232094451482BC683CB7B08344D26A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Vehicle_Boost(int32_t EntryPoint); // Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.ExecuteUbergraph_GA_Athena_Vehicle_Boost // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

