// BlueprintGeneratedClass GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C
// Size: 0xb38 (Inherited: 0xb20)
struct UGA_OctopusVehicleWeapon_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortWeapon* PreviousWeapon; // 0xb28(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb30(0x08)

	void Removed_DE1C33CD4D588B05A50CC5A99FE6CB41(); // Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.Removed_DE1C33CD4D588B05A50CC5A99FE6CB41 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_OctopusVehicleWeapon(int32_t EntryPoint); // Function GA_OctopusVehicleWeapon.GA_OctopusVehicleWeapon_C.ExecuteUbergraph_GA_OctopusVehicleWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

