// BlueprintGeneratedClass GA_WaffleTruck_SlurpBazooka_ApplySlurp.GA_WaffleTruck_SlurpBazooka_ApplySlurp_C
// Size: 0xb78 (Inherited: 0xb20)
struct UGA_WaffleTruck_SlurpBazooka_ApplySlurp_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	double PrevMissingHealth; // 0xb28(0x08)
	struct UGameplayEffect* GE_HealShield; // 0xb30(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb38(0x08)
	struct FScalableFloat RowHealAmount; // 0xb40(0x28)
	struct AFortPawn* OwningPawn; // 0xb68(0x08)
	struct ANPC_Pawn_Wildlife_Parent_C* WildlifePawn; // 0xb70(0x08)

	void GetMagnitudes(double& HealMagnitude, double& ShieldMagnitude, bool& ApplyEffect); // Function GA_WaffleTruck_SlurpBazooka_ApplySlurp.GA_WaffleTruck_SlurpBazooka_ApplySlurp_C.GetMagnitudes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_WaffleTruck_SlurpBazooka_ApplySlurp.GA_WaffleTruck_SlurpBazooka_ApplySlurp_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_WaffleTruck_SlurpBazooka_ApplySlurp.GA_WaffleTruck_SlurpBazooka_ApplySlurp_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_WaffleTruck_SlurpBazooka_ApplySlurp(int32_t EntryPoint); // Function GA_WaffleTruck_SlurpBazooka_ApplySlurp.GA_WaffleTruck_SlurpBazooka_ApplySlurp_C.ExecuteUbergraph_GA_WaffleTruck_SlurpBazooka_ApplySlurp // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

