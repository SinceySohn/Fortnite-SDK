// Class VehicleAudioRuntime.FortVehicleSoundComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UFortVehicleSoundComponent : UActorComponent {
};

// Class VehicleAudioRuntime.FortVehicleSoundData
// Size: 0x40 (Inherited: 0x30)
struct UFortVehicleSoundData : UDataAsset {
	struct TArray<struct UFortVehicleSoundComponent*> SoundComponents; // 0x30(0x10)
};

