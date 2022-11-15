// BlueprintGeneratedClass B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C
// Size: 0x1868 (Inherited: 0x1819)
struct AB_Athena_GrappleGlider_Weapon_C : AB_Athena_GrapplingHoot_Weap_C {
	char pad_1819[0x7]; // 0x1819(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1820(0x08)
	struct FTimerHandle CheckForTrees_Timer; // 0x1828(0x08)
	struct FScalableFloat TargetingRange; // 0x1830(0x28)
	double TargetingOffset; // 0x1858(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x1860(0x08)

	void ReceiveBeginPlay(); // Function B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckForTrees(); // Function B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C.CheckForTrees // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_GrappleGlider_Weapon(int32_t EntryPoint); // Function B_Athena_GrappleGlider_Weapon.B_Athena_GrappleGlider_Weapon_C.ExecuteUbergraph_B_Athena_GrappleGlider_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

