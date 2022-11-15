// BlueprintGeneratedClass B_RealitySaplingsWeeds_Spawner.B_RealitySaplingsWeeds_Spawner_C
// Size: 0x568 (Inherited: 0x469)
struct AB_RealitySaplingsWeeds_Spawner_C : AB_ActorSpawner_Parent_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UArrowComponent* LootDropDirection; // 0x478(0x08)
	struct AB_SMA_Athena_RealitySapling_Parent_C* Sapling; // 0x480(0x08)
	struct FHitResult LastHit; // 0x488(0xe0)

	void ServerActorSpawned(struct AActor* Actor); // Function B_RealitySaplingsWeeds_Spawner.B_RealitySaplingsWeeds_Spawner_C.ServerActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_RealitySaplingsWeeds_Spawner.B_RealitySaplingsWeeds_Spawner_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StartEQSSpawnLoop(); // Function B_RealitySaplingsWeeds_Spawner.B_RealitySaplingsWeeds_Spawner_C.StartEQSSpawnLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_RealitySaplingsWeeds_Spawner(int32_t EntryPoint); // Function B_RealitySaplingsWeeds_Spawner.B_RealitySaplingsWeeds_Spawner_C.ExecuteUbergraph_B_RealitySaplingsWeeds_Spawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

