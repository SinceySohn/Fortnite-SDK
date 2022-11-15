// BlueprintGeneratedClass B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C
// Size: 0x1751 (Inherited: 0x15a0)
struct AB_Ranged_GenericMountedCannon_C : AFortWeaponRangedMountedCannon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15a0(0x08)
	struct UParticleSystemComponent* Muzzle1P(Empty); // 0x15a8(0x08)
	struct UStaticMeshComponent* IronSightsMesh1P; // 0x15b0(0x08)
	struct UParticleSystemComponent* MuzzleWindParticle(Empty); // 0x15b8(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x15c0(0x08)
	struct UParticleSystemComponent* Shells(empty); // 0x15c8(0x08)
	struct UStaticMeshComponent* ScopeMesh1P; // 0x15d0(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x15d8(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_E57F8A624B0326DDF7A607AB2B92D195; // 0x15e0(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_E57F8A624B0326DDF7A607AB2B92D195; // 0x15e4(0x01)
	char pad_15E5[0x3]; // 0x15e5(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x15e8(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x15f0(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x15f8(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1600(0x08)
	bool UseDestroyEffect; // 0x1608(0x01)
	bool Use Reload Particles; // 0x1609(0x01)
	char pad_160A[0x6]; // 0x160a(0x06)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1610(0x08)
	double LastPlayFXTime; // 0x1618(0x08)
	double MinPlayFXTime; // 0x1620(0x08)
	bool UseShellsOnFire?; // 0x1628(0x01)
	bool UseShellsOnReload?; // 0x1629(0x01)
	bool UseShellsOnPump?; // 0x162a(0x01)
	char pad_162B[0x5]; // 0x162b(0x05)
	struct UParticleSystem* ShellsParticleSystemTemplate; // 0x1630(0x08)
	struct FName ReloadSocketName; // 0x1638(0x04)
	char pad_163C[0x4]; // 0x163c(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1640(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1650(0x01)
	char pad_1651[0x3]; // 0x1651(0x03)
	struct FName Shells Socket Name; // 0x1654(0x04)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x1658(0x01)
	char pad_1659[0x7]; // 0x1659(0x07)
	double Shells Spawn Rate Scale; // 0x1660(0x08)
	struct FVector ShellsRotationRate; // 0x1668(0x18)
	struct FVector Shells Velocity; // 0x1680(0x18)
	struct FVector Shells Gravity; // 0x1698(0x18)
	double Shells Lifetime; // 0x16b0(0x08)
	struct FVector Shells Size; // 0x16b8(0x18)
	double Shells Time Dilation; // 0x16d0(0x08)
	bool SmallShells; // 0x16d8(0x01)
	bool MediumShells; // 0x16d9(0x01)
	bool LargeShells; // 0x16da(0x01)
	bool ShotgunShells; // 0x16db(0x01)
	bool EnergyShells; // 0x16dc(0x01)
	char pad_16DD[0x3]; // 0x16dd(0x03)
	double Inherit Parent Velocity; // 0x16e0(0x08)
	double Cylindrical Radius; // 0x16e8(0x08)
	double Cylindrical Height; // 0x16f0(0x08)
	bool DebugShellsSocket?; // 0x16f8(0x01)
	char pad_16F9[0x7]; // 0x16f9(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x1700(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x1708(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1710(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x1718(0x20)
	bool Is Wind Enabled; // 0x1738(0x01)
	char pad_1739[0x7]; // 0x1739(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x1740(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x1748(0x08)
	bool ShouldHideReticleAfterDelay; // 0x1750(0x01)

	void HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HandlePawnAndWeaponVisFor1PTargeting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowReticle(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideReticle(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideIronSightsMesh(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HideIronSightsMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateMuzzleFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.DeactivateMuzzleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateReloadSmokeFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateReloadSmokeFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateShellsFX(bool bool); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateShellsFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupShellFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateShellEmittersFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.UpdateShellEmittersFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWpnRarity(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddRandomScale(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.AddRandomScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_575FCB5443E495736B8BE6BBC3D41E8C(struct UObject* Loaded); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnLoaded_575FCB5443E495736B8BE6BBC3D41E8C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_941B4D03491F957EF97917BFF1EF6B00(struct UObject* Loaded); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnLoaded_941B4D03491F957EF97917BFF1EF6B00 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_16CAFB6E4E8091866C2642A669D4DCF7(struct UObject* Loaded); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnLoaded_16CAFB6E4E8091866C2642A669D4DCF7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_CD8718E64EA83A512EE3B892656574CE(struct UObject* Loaded); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnLoaded_CD8718E64EA83A512EE3B892656574CE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStopWeaponFireFX(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void InitializeScopeVariables(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ShellsON_(onPump)(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEquippedWeaponDestory(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HideWeaponMesh(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeaponMesh(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideGunMesh(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HideGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowGunMesh(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ShowGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideWeapon(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowWeapon(); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Ranged_GenericMountedCannon(int32_t EntryPoint); // Function B_Ranged_GenericMountedCannon.B_Ranged_GenericMountedCannon_C.ExecuteUbergraph_B_Ranged_GenericMountedCannon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

