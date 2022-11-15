// BlueprintGeneratedClass B_RealitySaplingsMushrooms_Spawner.B_RealitySaplingsMushrooms_Spawner_C
// Size: 0x480 (Inherited: 0x469)
struct AB_RealitySaplingsMushrooms_Spawner_C : AB_ActorSpawner_Parent_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct AB_SMA_Athena_RealitySapling_Parent_C* Sapling; // 0x478(0x08)

	void ServerActorSpawned(struct AActor* Actor); // Function B_RealitySaplingsMushrooms_Spawner.B_RealitySaplingsMushrooms_Spawner_C.ServerActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_RealitySaplingsMushrooms_Spawner.B_RealitySaplingsMushrooms_Spawner_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_RealitySaplingsMushrooms_Spawner(int32_t EntryPoint); // Function B_RealitySaplingsMushrooms_Spawner.B_RealitySaplingsMushrooms_Spawner_C.ExecuteUbergraph_B_RealitySaplingsMushrooms_Spawner // (Final|UbergraphFunction) // @ game+0xdef49c
};

