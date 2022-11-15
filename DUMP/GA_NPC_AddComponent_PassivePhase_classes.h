// BlueprintGeneratedClass GA_NPC_AddComponent_PassivePhase.GA_NPC_AddComponent_PassivePhase_C
// Size: 0xe78 (Inherited: 0xe70)
struct UGA_NPC_AddComponent_PassivePhase_C : UGA_NPC_Parent_AddAndRemoveComponents_Passive_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe70(0x08)

	void K2_ActivateAbility(); // Function GA_NPC_AddComponent_PassivePhase.GA_NPC_AddComponent_PassivePhase_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_NPC_AddComponent_PassivePhase.GA_NPC_AddComponent_PassivePhase_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_AddComponent_PassivePhase(int32_t EntryPoint); // Function GA_NPC_AddComponent_PassivePhase.GA_NPC_AddComponent_PassivePhase_C.ExecuteUbergraph_GA_NPC_AddComponent_PassivePhase // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

