// Class TankUI.FortGameSettingRegistryExtension_Tank
// Size: 0x28 (Inherited: 0x28)
struct UFortGameSettingRegistryExtension_Tank : UFortGameSettingRegistryExtension {
};

// Class TankUI.TankVehicleReticle
// Size: 0x458 (Inherited: 0x438)
struct UTankVehicleReticle : UFortAthenaVehicleDashboardWidget {
	struct AFortTankVehicle* OwningTankVehicle; // 0x438(0x08)
	float MinTurretPitch; // 0x440(0x04)
	float MaxTurretPitch; // 0x444(0x04)
	bool bDistanceMeterEnabled; // 0x448(0x01)
	bool bTankOrientationEventsEnabled; // 0x449(0x01)
	char pad_44A[0xe]; // 0x44a(0x0e)

	void SetupVehicleFromBP(struct AActor* NewVehicle); // Function TankUI.TankVehicleReticle.SetupVehicleFromBP // (Final|Native|Protected|BlueprintCallable) // @ game+0x687d7d4
	void OnTreadEnabledChanged(bool bEnabled, enum class ETreadSide Side); // Function TankUI.TankVehicleReticle.OnTreadEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankTurretAimYawValueChanged(float Value); // Function TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankTurretAimPitchValueChanged(float Pitch, float PitchPercent); // Function TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankTargetingReleased(); // Function TankUI.TankVehicleReticle.OnTankTargetingReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankTargetingPressed(); // Function TankUI.TankVehicleReticle.OnTankTargetingPressed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankRotationValueChanged(float TankValue, float TurretValue); // Function TankUI.TankVehicleReticle.OnTankRotationValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.OnTankHatchHealthChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.OnTankEngineHealthChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTankDistanceUpdate(float Distance, float DistancePercent); // Function TankUI.TankVehicleReticle.OnTankDistanceUpdate // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCannonFired(float RateTime); // Function TankUI.TankVehicleReticle.OnCannonFired // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnEquipMountedWeapon(struct AFortWeaponRanged* EquippedMountedWeapon); // Function TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon // (Final|Native|Private) // @ game+0x687d754
	void HandleOnDamageablePartHealthChanged(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged // (Final|Native|Private|HasOutParms) // @ game+0x687d59c
};

