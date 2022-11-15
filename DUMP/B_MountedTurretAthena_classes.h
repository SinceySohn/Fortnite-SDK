// BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C
// Size: 0x17dd (Inherited: 0x17d0)
struct AB_MountedTurretAthena_C : AB_Ranged_Dual_Generic_MountedTurret_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x17d0(0x08)
	struct FGameplayTag SnowmanCue; // 0x17d8(0x04)
	bool SkipCustomMuzzleFXSpawnScript; // 0x17dc(0x01)

	void OnHostVehicleSetup(); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.OnHostVehicleSetup // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ServerMountedTurretSnowmanCheck(); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.ServerMountedTurretSnowmanCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire, bool OffHand); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateShellsFX(bool bool, bool OffHand); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_MountedTurretAthena(int32_t EntryPoint); // Function B_MountedTurretAthena.B_MountedTurretAthena_C.ExecuteUbergraph_B_MountedTurretAthena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

