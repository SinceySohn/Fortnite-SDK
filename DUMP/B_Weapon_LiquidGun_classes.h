// BlueprintGeneratedClass B_Weapon_LiquidGun.B_Weapon_LiquidGun_C
// Size: 0x19a9 (Inherited: 0x1818)
struct AB_Weapon_LiquidGun_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UNiagaraComponent* NS_UnstableLiquidGun_CanisterLiquid_Small; // 0x1820(0x08)
	struct UNiagaraComponent* NS_UnstableLiquidGun_CanisterLiquid; // 0x1828(0x08)
	struct UStaticMeshComponent* Reload_MagazineReload; // 0x1830(0x08)
	struct UStaticMeshComponent* Reload_Ammo; // 0x1838(0x08)
	float PlayLiquidFillOnRolad_PlaySuckInFX_68B3544043D82758C88D0BA18A6B52B8; // 0x1840(0x04)
	float PlayLiquidFillOnRolad_LiquidStretch_68B3544043D82758C88D0BA18A6B52B8; // 0x1844(0x04)
	float PlayLiquidFillOnRolad_PlaySuckOutFX_68B3544043D82758C88D0BA18A6B52B8; // 0x1848(0x04)
	float PlayLiquidFillOnRolad_SuckOut_68B3544043D82758C88D0BA18A6B52B8; // 0x184c(0x04)
	float PlayLiquidFillOnRolad_FillUp_68B3544043D82758C88D0BA18A6B52B8; // 0x1850(0x04)
	enum class ETimelineDirection PlayLiquidFillOnRolad__Direction_68B3544043D82758C88D0BA18A6B52B8; // 0x1854(0x01)
	char pad_1855[0x3]; // 0x1855(0x03)
	struct UTimelineComponent* PlayLiquidFillOnRolad; // 0x1858(0x08)
	struct AB_Prj_Ranged_NitroglycerineGun_C* LastPrj; // 0x1860(0x08)
	struct FTimerHandle ResetForcedInputTimer; // 0x1868(0x08)
	double VelocityIncrease; // 0x1870(0x08)
	struct TArray<struct FVector4> PrjPos; // 0x1878(0x10)
	struct TArray<struct AB_Prj_Ranged_NitroglycerineGun_C*> PrjList; // 0x1888(0x10)
	struct UNiagaraComponent* RibbonFX; // 0x1898(0x08)
	bool MidStream; // 0x18a0(0x01)
	char pad_18A1[0x7]; // 0x18a1(0x07)
	struct TArray<struct FVector> PrjPositions; // 0x18a8(0x10)
	struct ABP_LiquidGun_RibbonManager_C* CurrentManager; // 0x18b8(0x08)
	bool Firing; // 0x18c0(0x01)
	char pad_18C1[0x7]; // 0x18c1(0x07)
	struct UAudioComponent* FireLoop; // 0x18c8(0x08)
	struct USoundBase* SFX_FireLoop_1P; // 0x18d0(0x08)
	struct USoundBase* SFX_FireLoop_3P; // 0x18d8(0x08)
	struct USoundBase* SFX_FireStop_1P; // 0x18e0(0x08)
	struct USoundBase* SFX_FireStop_3P; // 0x18e8(0x08)
	bool bPlayedStopAudio; // 0x18f0(0x01)
	char pad_18F1[0x3]; // 0x18f1(0x03)
	int32_t LocalAmmoCount; // 0x18f4(0x04)
	struct UAnimMontage* PlayerStartFiringMontage; // 0x18f8(0x08)
	struct UAnimMontage* PlayerEndFiringMontage; // 0x1900(0x08)
	struct UAnimMontage* TempWeaponLoopMontage; // 0x1908(0x08)
	bool bFiringMontagesActive; // 0x1910(0x01)
	bool bDebug; // 0x1911(0x01)
	char pad_1912[0x6]; // 0x1912(0x06)
	double PistonProgressCache; // 0x1918(0x08)
	double StreamStartTime; // 0x1920(0x08)
	bool FireButtonPressed; // 0x1928(0x01)
	char pad_1929[0x7]; // 0x1929(0x07)
	struct FScalableFloat SF_SpiralSpread_Enabled; // 0x1930(0x28)
	struct FScalableFloat SF_SpiralSpread_RadiusIncreaseOverTime; // 0x1958(0x28)
	struct FScalableFloat SF_SpiralSpread_RotationSpeed; // 0x1980(0x28)
	bool MidBurstLocal; // 0x19a8(0x01)

	void PlayLiquidFillOnRolad__FinishedFunc(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.PlayLiquidFillOnRolad__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void PlayLiquidFillOnRolad__UpdateFunc(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.PlayLiquidFillOnRolad__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_90C9316C4327E0D7CC879585B3293F1C(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyEnd_90C9316C4327E0D7CC879585B3293F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_90C9316C4327E0D7CC879585B3293F1C(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyBegin_90C9316C4327E0D7CC879585B3293F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_90C9316C4327E0D7CC879585B3293F1C(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnInterrupted_90C9316C4327E0D7CC879585B3293F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_90C9316C4327E0D7CC879585B3293F1C(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnBlendOut_90C9316C4327E0D7CC879585B3293F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_90C9316C4327E0D7CC879585B3293F1C(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnCompleted_90C9316C4327E0D7CC879585B3293F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_4BAA5B6F458F4A007C2C1789159A6A87(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyEnd_4BAA5B6F458F4A007C2C1789159A6A87 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_4BAA5B6F458F4A007C2C1789159A6A87(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyBegin_4BAA5B6F458F4A007C2C1789159A6A87 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_4BAA5B6F458F4A007C2C1789159A6A87(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnInterrupted_4BAA5B6F458F4A007C2C1789159A6A87 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_4BAA5B6F458F4A007C2C1789159A6A87(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnBlendOut_4BAA5B6F458F4A007C2C1789159A6A87 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_4BAA5B6F458F4A007C2C1789159A6A87(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnCompleted_4BAA5B6F458F4A007C2C1789159A6A87 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_93C2E2974B5465EF6B5110B9D71EB504(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyEnd_93C2E2974B5465EF6B5110B9D71EB504 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_93C2E2974B5465EF6B5110B9D71EB504(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnNotifyBegin_93C2E2974B5465EF6B5110B9D71EB504 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_93C2E2974B5465EF6B5110B9D71EB504(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnInterrupted_93C2E2974B5465EF6B5110B9D71EB504 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_93C2E2974B5465EF6B5110B9D71EB504(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnBlendOut_93C2E2974B5465EF6B5110B9D71EB504 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_93C2E2974B5465EF6B5110B9D71EB504(struct FName NotifyName); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnCompleted_93C2E2974B5465EF6B5110B9D71EB504 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnProjectile(struct AFortProjectileBase* SpawnProjectile); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnSpawnProjectile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FireReleased(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.FireReleased // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleOnFire(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.HandleOnFire // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnEndFire(bool bIsEquipped); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.HandleOnEndFire // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StartFiring(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.StartFiring // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LocalAmmoChanged(int32_t LocalCount, int32_t LocalRemaining); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.LocalAmmoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayStartFiringMontages(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.PlayStartFiringMontages // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayEndFiringMontages(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.PlayEndFiringMontages // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPersistentFireStopped_Event(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnPersistentFireStopped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReleaseTrigger_(struct AFortWeapon* Weapon); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnReleaseTrigger_ // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BurstEnded(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.BurstEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndedFiring(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.EndedFiring // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndedFiring (Server)(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.EndedFiring (Server) // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStartFiring_Server(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnStartFiring_Server // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStartFiring_Event(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.OnStartFiring_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FirePressed(struct AFortWeapon* Weapon); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.FirePressed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetForcedInput(); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.ResetForcedInput // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Weapon_LiquidGun(int32_t EntryPoint); // Function B_Weapon_LiquidGun.B_Weapon_LiquidGun_C.ExecuteUbergraph_B_Weapon_LiquidGun // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

