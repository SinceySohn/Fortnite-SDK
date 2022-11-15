// BlueprintGeneratedClass GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C
// Size: 0xe64 (Inherited: 0xe58)
struct UGA_NPC_Parent_Despawn_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct FGameplayTag TC_ForceKillDeathReason; // 0xe60(0x04)

	void Completed_5728AC19442E0E150A866BAF87A9A1C2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.Completed_5728AC19442E0E150A866BAF87A9A1C2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_5728AC19442E0E150A866BAF87A9A1C2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.Cancelled_5728AC19442E0E150A866BAF87A9A1C2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_5728AC19442E0E150A866BAF87A9A1C2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.Triggered_5728AC19442E0E150A866BAF87A9A1C2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayDespawnMontage(); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.PlayDespawnMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DespawnMontageCancelledOrCompleted(); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.DespawnMontageCancelledOrCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Parent_Despawn(int32_t EntryPoint); // Function GA_NPC_Parent_Despawn.GA_NPC_Parent_Despawn_C.ExecuteUbergraph_GA_NPC_Parent_Despawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

