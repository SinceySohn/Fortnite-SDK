// BlueprintGeneratedClass GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C
// Size: 0xc1c (Inherited: 0xb20)
struct UGA_Shotgun_DoubleDouble_KnockbackSelf_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FScalableFloat Row_OffsetPitch; // 0xb28(0x28)
	struct FVector FinalLaunchVel; // 0xb50(0x18)
	struct FScalableFloat Row_ResetFall; // 0xb68(0x28)
	struct FScalableFloat Row_ZVelMult; // 0xb90(0x28)
	struct FScalableFloat Row_KnockMag; // 0xbb8(0x28)
	struct FScalableFloat Row_ZAdd; // 0xbe0(0x28)
	double FX Delay; // 0xc08(0x08)
	double VelocityForFX; // 0xc10(0x08)
	struct FGameplayTag KnockbackCue; // 0xc18(0x04)

	void IsInVehicle(struct AFortPawn* FortPawn, bool& IsInVehicle); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.IsInVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void LaunchPlayer(); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.LaunchPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckVel(); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.CheckVel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Shotgun_DoubleDouble_KnockbackSelf(int32_t EntryPoint); // Function GA_Shotgun_DoubleDouble_KnockbackSelf.GA_Shotgun_DoubleDouble_KnockbackSelf_C.ExecuteUbergraph_GA_Shotgun_DoubleDouble_KnockbackSelf // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

