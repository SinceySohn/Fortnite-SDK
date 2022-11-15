// BlueprintGeneratedClass B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C
// Size: 0x11e0 (Inherited: 0x1180)
struct AB_Mantis_Weapon_Parent_C : AB_Melee_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1180(0x08)
	struct UFortMantisWeaponComponent* FortMantisWeapon; // 0x1188(0x08)
	struct AFortPlayerPawn* PlayerCharacter; // 0x1190(0x08)
	struct FGameplayTagContainer T_MeleeAttackAbility; // 0x1198(0x20)
	struct FGameplayTagContainer T_HudElementToHide; // 0x11b8(0x20)
	struct FTimerHandle Timer_ShowReticleStatus; // 0x11d8(0x08)

	void ReticleStatusDisplay(bool Hide); // Function B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C.ReticleStatusDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ShowReticleStatusDisplay(); // Function B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C.ShowReticleStatusDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Mantis_Weapon_Parent(int32_t EntryPoint); // Function B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C.ExecuteUbergraph_B_Mantis_Weapon_Parent // (Final|UbergraphFunction) // @ game+0xdef49c
};

