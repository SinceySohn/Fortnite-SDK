// BlueprintGeneratedClass GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C
// Size: 0x12f0 (Inherited: 0x1248)
struct UGA_NPC_Irwin_Avian_Spawn_Alternate_C : UGA_NPC_Irwin_Avian_EQS_Move_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1248(0x08)
	struct FVector NewMoveDestination; // 0x1250(0x18)
	double NPC MaxDistanceFromNearestPlayerToActivate; // 0x1268(0x08)
	struct FGameplayTagContainer TC_FallbackSpawnIntroIfAlternateFailsEQS; // 0x1270(0x20)
	struct UGameplayEffect* GE_WanderCooldown; // 0x1290(0x08)
	struct UGameplayEffect* GE_AvoidEnemyCooldown; // 0x1298(0x08)
	double NPC DistanceToCheckForAdditionalBirdsSpawningIn; // 0x12a0(0x08)
	struct FGameplayTagContainer TC_PawnTagsToCheckForAdditionalBirdsSpawningIn; // 0x12a8(0x20)
	struct FGameplayTagContainer TC_AbilityTagsToCheckForAddionalBirdsSpawningIn; // 0x12c8(0x20)
	double NPC DurationToCheckForAddionalBirdsSpawningIn; // 0x12e8(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void NPC MoveToLocation(struct FVector MoveLocation); // Function GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C.NPC MoveToLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC EQS MoveNoPointsFound(); // Function GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C.NPC EQS MoveNoPointsFound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_NPC_Irwin_Avian_Spawn_Alternate(int32_t EntryPoint); // Function GA_NPC_Irwin_Avian_Spawn_Alternate.GA_NPC_Irwin_Avian_Spawn_Alternate_C.ExecuteUbergraph_GA_NPC_Irwin_Avian_Spawn_Alternate // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

