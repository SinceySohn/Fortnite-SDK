// BlueprintGeneratedClass GA_NPC_Parent_Death.GA_NPC_Parent_Death_C
// Size: 0xe70 (Inherited: 0xe58)
struct UGA_NPC_Parent_Death_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct TArray<struct FGameplayTag> WeakPointsToActivateDuringAbility; // 0xe60(0x10)

	void SetWeakpointsActive(bool SetActive); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.SetWeakpointsActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_7635B00B463F7960B5CD039C13CD1E0F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.Completed_7635B00B463F7960B5CD039C13CD1E0F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_7635B00B463F7960B5CD039C13CD1E0F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.Cancelled_7635B00B463F7960B5CD039C13CD1E0F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_7635B00B463F7960B5CD039C13CD1E0F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.Triggered_7635B00B463F7960B5CD039C13CD1E0F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Parent_Death(int32_t EntryPoint); // Function GA_NPC_Parent_Death.GA_NPC_Parent_Death_C.ExecuteUbergraph_GA_NPC_Parent_Death // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

