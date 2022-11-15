// BlueprintGeneratedClass GA_Athena_LowGravity_FallDamageImmunity.GA_Athena_LowGravity_FallDamageImmunity_C
// Size: 0xb40 (Inherited: 0xb2d)
struct UGA_Athena_LowGravity_FallDamageImmunity_C : UGAT_TriggeredAbility_C {
	char pad_B2D[0x3]; // 0xb2d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb30(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb38(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_LowGravity_FallDamageImmunity.GA_Athena_LowGravity_FallDamageImmunity_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity(int32_t EntryPoint); // Function GA_Athena_LowGravity_FallDamageImmunity.GA_Athena_LowGravity_FallDamageImmunity_C.ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

