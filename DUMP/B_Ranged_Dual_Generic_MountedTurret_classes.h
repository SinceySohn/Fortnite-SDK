// BlueprintGeneratedClass B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C
// Size: 0x17d0 (Inherited: 0x1618)
struct AB_Ranged_Dual_Generic_MountedTurret_C : AFortWeaponRangedDualMountedTurret {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1618(0x08)
	struct UParticleSystemComponent* LeftReload(Empty); // 0x1620(0x08)
	struct UParticleSystemComponent* LeftShells(Empty); // 0x1628(0x08)
	struct UParticleSystemComponent* LeftMuzzle(Empty); // 0x1630(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x1638(0x08)
	struct UParticleSystemComponent* Shells(empty); // 0x1640(0x08)
	struct UStaticMeshComponent* ScopeMesh1P; // 0x1648(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x1650(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x1658(0x08)
	bool Use Reload Particles; // 0x1660(0x01)
	char pad_1661[0x7]; // 0x1661(0x07)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1668(0x08)
	double LastPlayFXTime; // 0x1670(0x08)
	double MinPlayFXTime; // 0x1678(0x08)
	bool UseShellsOnFire?; // 0x1680(0x01)
	bool UseShellsOnReload?; // 0x1681(0x01)
	bool UseShellsOnPump?; // 0x1682(0x01)
	char pad_1683[0x5]; // 0x1683(0x05)
	struct UParticleSystem* ShellsParticleSystemTemplate; // 0x1688(0x08)
	struct FName ReloadSocketName; // 0x1690(0x04)
	char pad_1694[0x4]; // 0x1694(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1698(0x10)
	struct FName Shells Socket Name; // 0x16a8(0x04)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x16ac(0x01)
	char pad_16AD[0x3]; // 0x16ad(0x03)
	double Shells Spawn Rate Scale; // 0x16b0(0x08)
	struct FVector ShellsRotationRate; // 0x16b8(0x18)
	struct FVector Shells Velocity; // 0x16d0(0x18)
	struct FVector Shells Gravity; // 0x16e8(0x18)
	double Shells Lifetime; // 0x1700(0x08)
	struct FVector Shells Size; // 0x1708(0x18)
	double Shells Time Dilation; // 0x1720(0x08)
	bool SmallShells; // 0x1728(0x01)
	bool MediumShells; // 0x1729(0x01)
	bool LargeShells; // 0x172a(0x01)
	bool ShotgunShells; // 0x172b(0x01)
	bool EnergyShells; // 0x172c(0x01)
	char pad_172D[0x3]; // 0x172d(0x03)
	double Inherit Parent Velocity; // 0x1730(0x08)
	double Cylindrical Radius; // 0x1738(0x08)
	double Cylindrical Height; // 0x1740(0x08)
	bool DebugShellsSocket?; // 0x1748(0x01)
	char pad_1749[0x7]; // 0x1749(0x07)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1750(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x1758(0x20)
	bool Is Wind Enabled; // 0x1778(0x01)
	char pad_1779[0x7]; // 0x1779(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x1780(0x08)
	struct UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1788(0x08)
	enum class EDualWeaponHand LastHandFired; // 0x1790(0x01)
	char pad_1791[0x7]; // 0x1791(0x07)
	struct AFortPlayerPawn* PlayerPawn; // 0x1798(0x08)
	enum class E_MountedTurret_FireStates FireState; // 0x17a0(0x01)
	char pad_17A1[0x7]; // 0x17a1(0x07)
	struct USoundBase* Sound_OnFailToFireWhenOverheated; // 0x17a8(0x08)
	bool SetupFXInConstructor; // 0x17b0(0x01)
	char pad_17B1[0x7]; // 0x17b1(0x07)
	struct FVector Left Shells Velocity; // 0x17b8(0x18)

	void Setup FX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Setup FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowReticle(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideReticle(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateMuzzleFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateMuzzleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateReloadSmokeFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateShellsFX(bool bool, bool OffHand); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateShellsFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupShellFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateShellEmittersFX(struct UParticleSystemComponent* PS); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UpdateShellEmittersFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire, bool OffHand); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWpnRarity(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddRandomScale(bool OffHand); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.AddRandomScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_A62EBF3C40D050102770839C33BDCD2B(struct UObject* Loaded); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_A62EBF3C40D050102770839C33BDCD2B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_8E55310B48630E205569E8A245229E05(struct UObject* Loaded); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_8E55310B48630E205569E8A245229E05 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_BCE7AA6D424444D979EECCB29BA62459(struct UObject* Loaded); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_BCE7AA6D424444D979EECCB29BA62459 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_1E63D17A42E49E043370B58CD8F301C5(struct UObject* Loaded); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_1E63D17A42E49E043370B58CD8F301C5 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStopWeaponFireFX(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HideWeaponMesh(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeaponMesh(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideWeapon(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeapon(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandFired(enum class EDualWeaponHand Hand, bool bPersistantFire); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HandFired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindOnHandFired(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.BindOnHandFired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStartOverheated(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartOverheated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartHeating(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartHeating // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartCooling(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartCooling // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedCooling(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnFinishedCooling // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLocalFailedToFireWhenOverheated(); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLocalFailedToFireWhenOverheated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret(int32_t EntryPoint); // Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

