// BlueprintGeneratedClass B_ActorSpawner_Parent.B_ActorSpawner_Parent_C
// Size: 0x469 (Inherited: 0x298)
struct AB_ActorSpawner_Parent_C : AFortEQSPrevisActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UTextRenderComponent* EditorText-AmountToSpawn; // 0x2a0(0x08)
	struct UStaticMeshComponent* PreVisMesh; // 0x2a8(0x08)
	struct AActor* ClassToSpawn; // 0x2b0(0x08)
	bool UseWeightedSpawnClassList; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FFortWeightedActorTypeList WeightedSpawnClassList; // 0x2c0(0x50)
	struct FScalableFloat Row_Enabled; // 0x310(0x28)
	struct FScalableFloat Row_SpawnChance; // 0x338(0x28)
	struct FScalableFloat Row_EQS_SpawnDensity; // 0x360(0x28)
	double SpawnDelayMin; // 0x388(0x08)
	double SpawnDelayMax; // 0x390(0x08)
	bool DestroyAfterSpawn; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	double DestroySelfLifeMin; // 0x3a0(0x08)
	double DestroySelfLifeMax; // 0x3a8(0x08)
	bool DestroyOnFailSpawnChance; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FVector SpawnLocationOffset; // 0x3b8(0x18)
	bool UsePrevisMeshScale; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t cachedSpawnAmount; // 0x3d4(0x04)
	struct UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x3d8(0x08)
	struct TArray<struct FVector> LocationsToSpawn; // 0x3e0(0x10)
	bool EQS_Enabled_MultiSpawn; // 0x3f0(0x01)
	bool EQS_RandomYaw; // 0x3f1(0x01)
	bool EQS_AlignToSurfaceNormal; // 0x3f2(0x01)
	bool UseRowsForMinMaxEQS; // 0x3f3(0x01)
	int32_t EQS_NumtoSpawnMIN; // 0x3f4(0x04)
	int32_t EQS_NumtoSpawnMAX; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FScalableFloat Row_EQS_NumtoSpawnMIN; // 0x400(0x28)
	struct FScalableFloat Row_EQS_NumtoSpawnMAX; // 0x428(0x28)
	double EQS_ScaleMAX; // 0x450(0x08)
	double EQS_ScaleMIN; // 0x458(0x08)
	struct UEnvQuery* EQS_QueryTemplate; // 0x460(0x08)
	bool spawnManagerControlled?; // 0x468(0x01)

	int32_t GetSpawnAmountForEQS(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.GetSpawnAmountForEQS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AActor* GetActorClassToSpawn(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.GetActorClassToSpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_3020151C426C42F77FE60292E2524DFC(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.OnReady_3020151C426C42F77FE60292E2524DFC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ServerActorSpawned(struct AActor* Actor); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ServerActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EQS Finished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.EQS Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartEQSSpawnLoop(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.StartEQSSpawnLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnActor(struct FTransform New Transform); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroySpawner(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.DestroySpawner // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PrepForPrevis(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.PrepForPrevis // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TriggeredSpawnActivation(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.TriggeredSpawnActivation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_ActorSpawner_Parent(int32_t EntryPoint); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ExecuteUbergraph_B_ActorSpawner_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

