// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
// Size: 0x2b8 (Inherited: 0x2a8)
struct ADynamicAthenaHUDDirector : ADynamicUIDirectorBase {
	struct UDynamicUIScene* VehicleHUDScene; // 0x2a8(0x08)
	struct UDynamicUIScene* CreativeQuickbarScene; // 0x2b0(0x08)

	void HandleExitingVehicle(); // Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle // (Final|Native|Private) // @ game+0x6908de4
	void HandleEnteringVehicle(); // Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle // (Final|Native|Private) // @ game+0x6908dd0
	void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped); // Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged // (Final|Native|Private) // @ game+0x6908d50
};

