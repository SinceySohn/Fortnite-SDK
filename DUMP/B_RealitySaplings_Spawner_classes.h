// BlueprintGeneratedClass B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C
// Size: 0x524 (Inherited: 0x469)
struct AB_RealitySaplings_Spawner_C : AB_ActorSpawner_Parent_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UArrowComponent* LootDropDirection; // 0x478(0x08)
	enum class SaplingAgeVariants Sapling Age; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FMulticastInlineDelegate Event_ServerActorSpawned; // 0x488(0x10)
	bool Overrride SaplingPersistence; // 0x498(0x01)
	bool OverrideIsLocalPlayerSapling; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	int32_t Num Times Weeded; // 0x49c(0x04)
	int32_t Fruit 1State; // 0x4a0(0x04)
	int32_t Fruit 2State; // 0x4a4(0x04)
	int32_t Fruit 3State; // 0x4a8(0x04)
	bool Needs Weeding; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	int32_t Day Offset; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FRealitySaplingPersistentData MovedSaplingPersistentData; // 0x4b8(0x60)
	struct AFortPlayerController* PlanterPlayerController; // 0x518(0x08)
	int32_t SaplingNumTimesWateredThisMatch; // 0x520(0x04)

	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult& HitInfo); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Event_ServerActorSpawned_Event(struct AActor* SpawnedActor); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.Event_ServerActorSpawned_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnActor(struct FTransform New Transform); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_RealitySaplings_Spawner(int32_t EntryPoint); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.ExecuteUbergraph_B_RealitySaplings_Spawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void Event_ServerActorSpawned__DelegateSignature(struct AActor* Actor); // Function B_RealitySaplings_Spawner.B_RealitySaplings_Spawner_C.Event_ServerActorSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

