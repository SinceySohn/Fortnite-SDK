// BlueprintGeneratedClass B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C
// Size: 0x18f4 (Inherited: 0x1818)
struct AB_Shotgun_Chrome_Athena_C : AB_Shotgun_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UChromeQuartz_AudioSwitcher_Component_C* ChromeQuartz_AudioSwitcher_Component; // 0x1820(0x08)
	struct UFortSoundIndicatorComponent* ShootSoundIndicator; // 0x1828(0x08)
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1830(0x08)
	struct TMap<int32_t, struct USoundBase*> FireSounds_1P; // 0x1838(0x50)
	struct TMap<int32_t, struct USoundBase*> FireSounds_3P; // 0x1888(0x50)
	int32_t EvolutionLevel; // 0x18d8(0x04)
	char pad_18DC[0x4]; // 0x18dc(0x04)
	struct UC_ChromeWeapons_XPComponent_C* ChromeXPComp; // 0x18e0(0x08)
	struct USoundBase* SFX_UpgradeReady; // 0x18e8(0x08)
	struct FGameplayTag GCN_ReformCrystals; // 0x18f0(0x04)

	void MIDChangeXP(double XP Normalized); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.MIDChangeXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MIDPlayUpgradeAnimation(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.MIDPlayUpgradeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MIDShatterCrystals(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.MIDShatterCrystals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_EvolutionLevel(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.OnRep_EvolutionLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPowerUpReady(int32_t CurrentItemIndex, int32_t PendingItemIndex); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.OnPowerUpReady // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayWeaponFireCustomAudio(bool bPersistentFire, bool bSecondaryFire); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.PlayWeaponFireCustomAudio // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void AnimNotify_Upgrade_ShatterCrystals(); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.AnimNotify_Upgrade_ShatterCrystals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On XP Change(double XPDelta, double CurrentXPPercentage); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.On XP Change // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Shotgun_Chrome_Athena(int32_t EntryPoint); // Function B_Shotgun_Chrome_Athena.B_Shotgun_Chrome_Athena_C.ExecuteUbergraph_B_Shotgun_Chrome_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

