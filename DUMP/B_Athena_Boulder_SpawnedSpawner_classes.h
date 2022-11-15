// BlueprintGeneratedClass B_Athena_Boulder_SpawnedSpawner.B_Athena_Boulder_SpawnedSpawner_C
// Size: 0x498 (Inherited: 0x469)
struct AB_Athena_Boulder_SpawnedSpawner_C : AB_ActorSpawner_Parent_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct FGameplayTagContainer QuestTags; // 0x478(0x20)

	void ServerActorSpawned(struct AActor* Actor); // Function B_Athena_Boulder_SpawnedSpawner.B_Athena_Boulder_SpawnedSpawner_C.ServerActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Boulder_SpawnedSpawner(int32_t EntryPoint); // Function B_Athena_Boulder_SpawnedSpawner.B_Athena_Boulder_SpawnedSpawner_C.ExecuteUbergraph_B_Athena_Boulder_SpawnedSpawner // (Final|UbergraphFunction) // @ game+0xdef49c
};

