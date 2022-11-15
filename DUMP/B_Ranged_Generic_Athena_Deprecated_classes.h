// BlueprintGeneratedClass B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C
// Size: 0x1691 (Inherited: 0x14d0)
struct AB_Ranged_Generic_Athena_Deprecated_C : AFortWeaponRanged {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UParticleSystemComponent* Muzzle1P(Empty); // 0x14d8(0x08)
	struct UStaticMeshComponent* IronSightsMesh1P; // 0x14e0(0x08)
	struct UParticleSystemComponent* MuzzleWindParticle(Empty); // 0x14e8(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x14f0(0x08)
	struct UParticleSystemComponent* Shells(empty); // 0x14f8(0x08)
	struct UStaticMeshComponent* ScopeMesh1P; // 0x1500(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x1508(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_8E980769412DEF67B9B63CAE644DA93B; // 0x1510(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_8E980769412DEF67B9B63CAE644DA93B; // 0x1514(0x01)
	char pad_1515[0x3]; // 0x1515(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x1518(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x1520(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1528(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1530(0x08)
	bool UseDestroyEffect; // 0x1538(0x01)
	bool RandomMuzzleFlashScaling; // 0x1539(0x01)
	bool Use Reload Particles; // 0x153a(0x01)
	char pad_153B[0x5]; // 0x153b(0x05)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1540(0x08)
	double LastPlayFXTime; // 0x1548(0x08)
	double MinPlayFXTime; // 0x1550(0x08)
	bool UseShellsOnFire?; // 0x1558(0x01)
	bool UseShellsOnReload?; // 0x1559(0x01)
	bool UseShellsOnPump?; // 0x155a(0x01)
	char pad_155B[0x5]; // 0x155b(0x05)
	struct UParticleSystem* ShellsParticleSystemTemplate; // 0x1560(0x08)
	struct FName ReloadSocketName; // 0x1568(0x04)
	char pad_156C[0x4]; // 0x156c(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1570(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1580(0x01)
	char pad_1581[0x3]; // 0x1581(0x03)
	struct FName Shells Socket Name; // 0x1584(0x04)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x1588(0x01)
	char pad_1589[0x7]; // 0x1589(0x07)
	double Shells Spawn Rate Scale; // 0x1590(0x08)
	struct FVector ShellsRotationRate; // 0x1598(0x18)
	struct FVector Shells Velocity; // 0x15b0(0x18)
	struct FVector Shells Gravity; // 0x15c8(0x18)
	double Shells Lifetime; // 0x15e0(0x08)
	struct FVector Shells Size; // 0x15e8(0x18)
	double Shells Time Dilation; // 0x1600(0x08)
	double Target Scope Vignette Blur Screen Percentage; // 0x1608(0x08)
	double Scope Camera Offset Amount; // 0x1610(0x08)
	bool SmallShells; // 0x1618(0x01)
	bool MediumShells; // 0x1619(0x01)
	bool LargeShells; // 0x161a(0x01)
	bool ShotgunShells; // 0x161b(0x01)
	bool EnergyShells; // 0x161c(0x01)
	char pad_161D[0x3]; // 0x161d(0x03)
	double Inherit Parent Velocity; // 0x1620(0x08)
	double Cylindrical Radius; // 0x1628(0x08)
	double Cylindrical Height; // 0x1630(0x08)
	bool DebugShellsSocket?; // 0x1638(0x01)
	char pad_1639[0x7]; // 0x1639(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x1640(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x1648(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1650(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x1658(0x20)
	bool Is Wind Enabled; // 0x1678(0x01)
	char pad_1679[0x7]; // 0x1679(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x1680(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x1688(0x08)
	bool ShouldHideReticleAfterDelay; // 0x1690(0x01)

	void GetScopeParameters(struct UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.GetScopeParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HandlePawnAndWeaponVisFor1PTargeting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowReticle(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideReticle(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideIronSightsMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideIronSightsMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateMuzzleFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateMuzzleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateReloadSmokeFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateShellsFX(bool bool); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateShellsFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupShellFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateShellEmittersFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.UpdateShellEmittersFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWpnRarity(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddRandomScale(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AddRandomScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_43F549264BB135D3D385D4BB5846412A(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_43F549264BB135D3D385D4BB5846412A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_109F12F046377B483CA7FF92A795CBD2(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_65280D504DA982E453E39BA22D9D1643(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_65280D504DA982E453E39BA22D9D1643 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_351A9D71483BD9CF417705946595CB08(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_351A9D71483BD9CF417705946595CB08 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStopWeaponFireFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void InitializeScopeVariables(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ShellsON_(onPump)(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEquippedWeaponDestory(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HideWeaponMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeaponMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideGunMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowGunMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideWeapon(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeapon(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Ranged_Generic_Athena_Deprecated(int32_t EntryPoint); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ExecuteUbergraph_B_Ranged_Generic_Athena_Deprecated // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

