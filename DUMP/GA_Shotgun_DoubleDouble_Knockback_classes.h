// BlueprintGeneratedClass GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C
// Size: 0xc7c (Inherited: 0xb20)
struct UGA_Shotgun_DoubleDouble_Knockback_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	double Distance; // 0xb28(0x08)
	double DistanceMagMod; // 0xb30(0x08)
	struct FScalableFloat Row_ZAdd; // 0xb38(0x28)
	struct FScalableFloat Row_KnockMag; // 0xb60(0x28)
	struct FScalableFloat Row_MaxDistance; // 0xb88(0x28)
	struct FScalableFloat Row_ResetFall; // 0xbb0(0x28)
	struct FVector FinalLaunchVel; // 0xbd8(0x18)
	struct FScalableFloat Row_ZStartOffset; // 0xbf0(0x28)
	struct FScalableFloat Row_ZVelMult; // 0xc18(0x28)
	struct FGameplayTagContainer DefaultTags; // 0xc40(0x20)
	struct AActor* Launcher; // 0xc60(0x08)
	double VelocityForFX; // 0xc68(0x08)
	double FX Delay; // 0xc70(0x08)
	struct FGameplayTag KnockbackCue; // 0xc78(0x04)

	void KnockPlayer(); // Function GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C.KnockPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckVel(); // Function GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C.CheckVel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Shotgun_DoubleDouble_Knockback(int32_t EntryPoint); // Function GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C.ExecuteUbergraph_GA_Shotgun_DoubleDouble_Knockback // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

