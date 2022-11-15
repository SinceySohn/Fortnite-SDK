// BlueprintGeneratedClass B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C
// Size: 0x1890 (Inherited: 0x1818)
struct AB_WaffleTruck_Rocket_Slurp_C : AB_WaffleTruck_Bazooka_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct AAthena_LockOnWidgetActor_SlurpBazooka_C* WidgetActor; // 0x1820(0x08)
	struct AActor* LockOnTarget; // 0x1828(0x08)
	double TurnSpeedMax; // 0x1830(0x08)
	double HomingDistanceThreshold; // 0x1838(0x08)
	double HealthPercent; // 0x1840(0x08)
	struct UWaffleTruck_SlurpBazooka_HealthBar_C* LockOnWidget; // 0x1848(0x08)
	bool CanPlay?; // 0x1850(0x01)
	char pad_1851[0x7]; // 0x1851(0x07)
	struct FScalableFloat ShouldSpawnBandages; // 0x1858(0x28)
	struct FTimerHandle LockOnWidgetHandle; // 0x1880(0x08)
	struct UFXSystemAsset* RearMuzzleFXSystem; // 0x1888(0x08)

	void UserConstructionScript(); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnProjectile(struct AFortProjectileBase* SpawnProjectile); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.OnSpawnProjectile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetHealthPercentServer(); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.SetHealthPercentServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHealthPercentClient(double HealthPercent, double ShieldPercent); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.SetHealthPercentClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshLockOnWidget(); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.RefreshLockOnWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_WaffleTruck_Rocket_Slurp(int32_t EntryPoint); // Function B_WaffleTruck_Rocket_Slurp.B_WaffleTruck_Rocket_Slurp_C.ExecuteUbergraph_B_WaffleTruck_Rocket_Slurp // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

