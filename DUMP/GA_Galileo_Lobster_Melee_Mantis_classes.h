// BlueprintGeneratedClass GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C
// Size: 0xc88 (Inherited: 0xbdc)
struct UGA_Galileo_Lobster_Melee_Mantis_C : UGA_Melee_Mantis_Parent_C {
	char pad_BDC[0x4]; // 0xbdc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe0(0x08)
	struct FGameplayTag T_MeleeAbility; // 0xbe8(0x04)
	struct FGameplayTag T_GCMeleeClash; // 0xbec(0x04)
	bool StaggerMelee; // 0xbf0(0x01)
	char pad_BF1[0x7]; // 0xbf1(0x07)
	struct FScalableFloat EnableStagger; // 0xbf8(0x28)
	struct FScalableFloat ImpulseXY; // 0xc20(0x28)
	struct FScalableFloat ImpulseZ; // 0xc48(0x28)
	struct FGameplayTag T_StaggerEvent; // 0xc70(0x04)
	char pad_C74[0x4]; // 0xc74(0x04)
	struct UGameplayEffect* GE_StaggerEnemy; // 0xc78(0x08)
	struct AFortPlayerPawn* Fort Player Pawn; // 0xc80(0x08)

	void Added_257119E44AAC9BD082F95A9F3201447E(); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.Added_257119E44AAC9BD082F95A9F3201447E // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_3D9CCD6F49D4ABCB0E35DB855ADE0B29(struct FGameplayEventData Payload); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.EventReceived_3D9CCD6F49D4ABCB0E35DB855ADE0B29 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTag ApplicationTag); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.BP_OnMantisTechniqueHit // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Galileo_Lobster_Melee_Mantis(int32_t EntryPoint); // Function GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C.ExecuteUbergraph_GA_Galileo_Lobster_Melee_Mantis // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

