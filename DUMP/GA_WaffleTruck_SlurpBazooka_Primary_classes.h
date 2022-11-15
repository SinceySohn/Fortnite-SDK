// BlueprintGeneratedClass GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C
// Size: 0xba4 (Inherited: 0xb58)
struct UGA_WaffleTruck_SlurpBazooka_Primary_C : UFortGameplayAbility_RangedWeapon {
	struct FGameplayTag MuzzleFlash; // 0xb58(0x04)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct FGameplayAttribute Attribute; // 0xb60(0x38)
	bool ManualFireEvent; // 0xb98(0x01)
	char pad_B99[0x3]; // 0xb99(0x03)
	struct FGameplayTag GT_EventWeaponFire; // 0xb9c(0x04)
	struct FGameplayTag PowerDown; // 0xba0(0x04)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetEventData(struct FGameplayTag EventTag, struct FGameplayEventData& GameplayEventData); // Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.GetEventData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_WaffleTruck_SlurpBazooka_Primary.GA_WaffleTruck_SlurpBazooka_Primary_C.K2_CommitExecute // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

