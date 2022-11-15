// BlueprintGeneratedClass GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C
// Size: 0xb38 (Inherited: 0xb20)
struct UGA_RealitySeed_ListenForTree_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AActor* PlayerOwnedTree; // 0xb28(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb30(0x08)

	void EventReceived_BEED7CAC42EA6CD4A52F96B69B8310D4(struct FGameplayEventData Payload); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.EventReceived_BEED7CAC42EA6CD4A52F96B69B8310D4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RegisterTree(struct AActor* Actor); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.RegisterTree // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingPlanted(bool isNewSapling, struct AB_SMA_Athena_RealitySapling_Parent_C* Reality Tree); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.SaplingPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_RealitySeed_ListenForTree(int32_t EntryPoint); // Function GA_RealitySeed_ListenForTree.GA_RealitySeed_ListenForTree_C.ExecuteUbergraph_GA_RealitySeed_ListenForTree // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

