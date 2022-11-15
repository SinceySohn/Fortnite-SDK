// BlueprintGeneratedClass GA_NPC_Parent_AddAndRemoveComponents_Passive.GA_NPC_Parent_AddAndRemoveComponents_Passive_C
// Size: 0xe70 (Inherited: 0xe58)
struct UGA_NPC_Parent_AddAndRemoveComponents_Passive_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct TArray<struct UActorComponent*> ComponentsToAddDuringAbilityActivation; // 0xe60(0x10)

	void K2_ActivateAbility(); // Function GA_NPC_Parent_AddAndRemoveComponents_Passive.GA_NPC_Parent_AddAndRemoveComponents_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_NPC_Parent_AddAndRemoveComponents_Passive.GA_NPC_Parent_AddAndRemoveComponents_Passive_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_AddAndRemoveComponents_Passive.GA_NPC_Parent_AddAndRemoveComponents_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Parent_AddAndRemoveComponents_Passive(int32_t EntryPoint); // Function GA_NPC_Parent_AddAndRemoveComponents_Passive.GA_NPC_Parent_AddAndRemoveComponents_Passive_C.ExecuteUbergraph_GA_NPC_Parent_AddAndRemoveComponents_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

