// BlueprintGeneratedClass GA_Trap_MountedTurret.GA_Trap_MountedTurret_C
// Size: 0xb40 (Inherited: 0xb20)
struct UGA_Trap_MountedTurret_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UFortWeaponItemDefinition* MountedTurretWeapon; // 0xb28(0x08)
	struct AFortWeapon* PreviousWeapon; // 0xb30(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb38(0x08)

	void Removed_5AEF8B64474E58FA96707F8A7FD72F76(); // Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.Removed_5AEF8B64474E58FA96707F8A7FD72F76 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Trap_MountedTurret(int32_t EntryPoint); // Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.ExecuteUbergraph_GA_Trap_MountedTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

