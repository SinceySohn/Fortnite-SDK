// BlueprintGeneratedClass BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C
// Size: 0x15d (Inherited: 0x14c)
struct UBuildingActorLootDropOnDamageComponent_ChromeProps_C : UBuildingActorLootDropOnDamageComponent_C {
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FGameplayTag GCN_Destroyed; // 0x158(0x04)
	bool bEffectApplied; // 0x15c(0x01)

	void OnReady_AAAB26664BB6E0D41A22A8B3AF01B0DF(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.OnReady_AAAB26664BB6E0D41A22A8B3AF01B0DF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RemoveDeathParticles(); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.RemoveDeathParticles // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckChrome(); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.CheckChrome // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChrome(); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.ApplyChrome // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.GamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.OnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BuildingActorLootDropOnDamageComponent_ChromeProps(int32_t EntryPoint); // Function BuildingActorLootDropOnDamageComponent_ChromeProps.BuildingActorLootDropOnDamageComponent_ChromeProps_C.ExecuteUbergraph_BuildingActorLootDropOnDamageComponent_ChromeProps // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

