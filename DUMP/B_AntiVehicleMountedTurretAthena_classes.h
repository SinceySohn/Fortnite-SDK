// BlueprintGeneratedClass B_AntiVehicleMountedTurretAthena.B_AntiVehicleMountedTurretAthena_C
// Size: 0x1810 (Inherited: 0x17dd)
struct AB_AntiVehicleMountedTurretAthena_C : AB_MountedTurretAthena_C {
	char pad_17DD[0x3]; // 0x17dd(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x17e0(0x08)
	struct UFXSystemComponent* AntiVehicleTurretMF; // 0x17e8(0x08)
	struct AFortAthenaVehicle* AthenaVehicle; // 0x17f0(0x08)
	bool IsArmoredBattleBus; // 0x17f8(0x01)
	char pad_17F9[0x7]; // 0x17f9(0x07)
	struct UFXSystemAsset* MuzzleFlashFX; // 0x1800(0x08)
	struct UCameraShakeBase* FireCameraShake; // 0x1808(0x08)

	void OnHostVehicleSetup(); // Function B_AntiVehicleMountedTurretAthena.B_AntiVehicleMountedTurretAthena_C.OnHostVehicleSetup // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_AntiVehicleMountedTurretAthena.B_AntiVehicleMountedTurretAthena_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire, bool OffHand); // Function B_AntiVehicleMountedTurretAthena.B_AntiVehicleMountedTurretAthena_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_AntiVehicleMountedTurretAthena(int32_t EntryPoint); // Function B_AntiVehicleMountedTurretAthena.B_AntiVehicleMountedTurretAthena_C.ExecuteUbergraph_B_AntiVehicleMountedTurretAthena // (Final|UbergraphFunction) // @ game+0xdef49c
};

