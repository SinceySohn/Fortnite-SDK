// BlueprintGeneratedClass BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C
// Size: 0x14c (Inherited: 0xa0)
struct UBuildingActorLootDropOnDamageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FName LootOnDamagePackage; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FVector OffsetLocation; // 0xb0(0x18)
	struct ABuildingActor* BuildingActorOwner; // 0xc8(0x08)
	bool Enabled; // 0xd0(0x01)
	bool AthenaOnly; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FScalableFloat SF_ChanceToDropLoot; // 0xd8(0x28)
	struct FGameplayTagQuery EventDamageTagQuery; // 0x100(0x48)
	struct FGameplayTag DamageReceivedEventTag; // 0x148(0x04)

	struct FVector MakeRelativeOffset(struct AActor* Target, struct FVector InVec); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.MakeRelativeOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void EventReceived_CC0AD8EC448BA6EE333FAEBE495D79F0(struct FGameplayEventData Payload); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.EventReceived_CC0AD8EC448BA6EE333FAEBE495D79F0 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_749E6FAB4292478B264F7491180DDC27(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.OnReady_749E6FAB4292478B264F7491180DDC27 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DamageRecieved(struct AActor* DamageCauser, struct FVector Hit Location); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.DamageRecieved // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaitDamageReceived(); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.WaitDamageReceived // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.OnDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BuildingActorLootDropOnDamageComponent(int32_t EntryPoint); // Function BuildingActorLootDropOnDamageComponent.BuildingActorLootDropOnDamageComponent_C.ExecuteUbergraph_BuildingActorLootDropOnDamageComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

