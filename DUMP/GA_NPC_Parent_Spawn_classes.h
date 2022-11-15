// BlueprintGeneratedClass GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C
// Size: 0xe70 (Inherited: 0xe58)
struct UGA_NPC_Parent_Spawn_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct TArray<struct FGameplayTag> WeakPointsToActivateDuringAbility; // 0xe60(0x10)

	void SetWeakpointsActive(bool SetActive); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.SetWeakpointsActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_8477F6014312EEDD75DB15AE82DA4B6A(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.Completed_8477F6014312EEDD75DB15AE82DA4B6A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_8477F6014312EEDD75DB15AE82DA4B6A(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.Cancelled_8477F6014312EEDD75DB15AE82DA4B6A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_8477F6014312EEDD75DB15AE82DA4B6A(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.Triggered_8477F6014312EEDD75DB15AE82DA4B6A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void NPC SpawnMontageCompletedOrCancelled(); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.NPC SpawnMontageCompletedOrCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnAbilityTrigger(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.SpawnAbilityTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SpawnMontageStarted(); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.NPC SpawnMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Parent_Spawn(int32_t EntryPoint); // Function GA_NPC_Parent_Spawn.GA_NPC_Parent_Spawn_C.ExecuteUbergraph_GA_NPC_Parent_Spawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

