// BlueprintGeneratedClass Athena_VehicleSpawner.Athena_VehicleSpawner_C
// Size: 0x340 (Inherited: 0x308)
struct AAthena_VehicleSpawner_C : AFortAthenaVehicleSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct AActor* SpawnedVehicle; // 0x310(0x08)
	bool YAxisForward; // 0x318(0x01)
	bool bShouldDestroyAfterVehicleSpawn; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct FGameplayTagContainer ForceMods; // 0x320(0x20)

	void SpawnVehicle(); // Function Athena_VehicleSpawner.Athena_VehicleSpawner_C.SpawnVehicle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnConstructVehicle(struct AFortAthenaVehicle* Vehicle); // Function Athena_VehicleSpawner.Athena_VehicleSpawner_C.OnConstructVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_VehicleSpawner(int32_t EntryPoint); // Function Athena_VehicleSpawner.Athena_VehicleSpawner_C.ExecuteUbergraph_Athena_VehicleSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

