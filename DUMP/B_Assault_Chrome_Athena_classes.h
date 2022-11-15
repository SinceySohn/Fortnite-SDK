// BlueprintGeneratedClass B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C
// Size: 0x183c (Inherited: 0x1818)
struct AB_Assault_Chrome_Athena_C : AB_Assault_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UChromeQuartz_AudioSwitcher_Component_C* ChromeQuartz_AudioSwitcher_Component; // 0x1820(0x08)
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1828(0x08)
	struct UC_ChromeWeapons_XPComponent_C* XPComponentRef; // 0x1830(0x08)
	struct FGameplayTag GCN_ReformCrystals; // 0x1838(0x04)

	void MIDChangeXP(double XP Normalized); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.MIDChangeXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MIDUpgradeAnimation(); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.MIDUpgradeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MIDShatterCrystals(); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.MIDShatterCrystals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void AnimNotify_Upgrade_ShatterCrystals(); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.AnimNotify_Upgrade_ShatterCrystals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On XP Change(double XPDelta, double CurrentXPPercentage); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.On XP Change // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Assault_Chrome_Athena(int32_t EntryPoint); // Function B_Assault_Chrome_Athena.B_Assault_Chrome_Athena_C.ExecuteUbergraph_B_Assault_Chrome_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

