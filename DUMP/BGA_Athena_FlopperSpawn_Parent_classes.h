// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C
// Size: 0xef0 (Inherited: 0x9d8)
struct ABGA_Athena_FlopperSpawn_Parent_C : ABuildingGameplayActorFlopperSpawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UBoxComponent* OverlapVolume; // 0x9e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x9e8(0x08)
	struct FScalableFloat Row_MaxUses; // 0x9f0(0x28)
	struct FScalableFloat Row_MinUses; // 0xa18(0x28)
	int32_t Uses; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	double AfterHideLifeSpan; // 0xa48(0x08)
	struct FName ItemsToDrop; // 0xa50(0x04)
	struct FGameplayTag GC_Spawn; // 0xa54(0x04)
	struct FScalableFloat Row_SpawnChanceMax; // 0xa58(0x28)
	bool IsWorldSpawner; // 0xa80(0x01)
	char pad_A81[0x7]; // 0xa81(0x07)
	struct FScalableFloat Row_SpawnChanceMin; // 0xa88(0x28)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_FishingSpotTier; // 0xab0(0x50)
	bool AlreadySpawnChecked; // 0xb00(0x01)
	char pad_B01[0x7]; // 0xb01(0x07)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_DefaultTier; // 0xb08(0x50)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_ToUse; // 0xb58(0x50)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_HighTier_FishingRod; // 0xba8(0x50)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_OverrideLoot; // 0xbf8(0x50)
	struct TMap<struct FGameplayTag, struct FScalableFloat> TagToLoot_OverrideCount; // 0xc48(0x50)
	bool HasTypeTag; // 0xc98(0x01)
	char pad_C99[0x7]; // 0xc99(0x07)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xca0(0x10)
	struct FGameplayTagContainer LootTags; // 0xcb0(0x20)
	bool MaxUses; // 0xcd0(0x01)
	bool Debug; // 0xcd1(0x01)
	char pad_CD2[0x6]; // 0xcd2(0x06)
	struct FScalableFloat Row_AddedBobChanceOnOverlapMin; // 0xcd8(0x28)
	struct FScalableFloat Row_AddedBobChanceOnOverlapMax; // 0xd00(0x28)
	struct AFortPickup* SpawnedItem; // 0xd28(0x08)
	struct USoundBase* Sound_HighTierPoolSpawn; // 0xd30(0x08)
	struct FGameplayTagContainer QuestTag_DefaultSpawn; // 0xd38(0x20)
	struct FGameplayTagContainer QuestTag_WorldSpawn; // 0xd58(0x20)
	struct APrj_Athena_FloppingRabbit_C* Projectile; // 0xd78(0x08)
	struct UCurveFloat* FishSizeCurve; // 0xd80(0x08)
	struct TMap<struct UFortItemDefinition*, struct FScalableFloat> FishSizeMap; // 0xd88(0x50)
	double MiniGameFishSizeThreshold; // 0xdd8(0x08)
	struct FScalableFloat MiniGameFishSizePercentileThreshold; // 0xde0(0x28)
	bool AlwaysStartMiniGame; // 0xe08(0x01)
	char pad_E09[0x3]; // 0xe09(0x03)
	struct FGameplayTag HighTierFishingRod; // 0xe0c(0x04)
	struct FName HighTierLootData; // 0xe10(0x04)
	struct FGameplayTag DefaultLootTag; // 0xe14(0x04)
	struct FString Fish Variant String; // 0xe18(0x10)
	bool New Best Fish; // 0xe28(0x01)
	char pad_E29[0x7]; // 0xe29(0x07)
	double Fish Length; // 0xe30(0x08)
	double RespawnDelay; // 0xe38(0x08)
	struct FScalableFloat Row_RespawnDelayMin; // 0xe40(0x28)
	struct FScalableFloat Row_RespawnDelayMax; // 0xe68(0x28)
	double ForcedRespawnDelay; // 0xe90(0x08)
	struct TMap<struct FGameplayTag, struct FScalableFloat> FishSizeMap_ItemTags; // 0xe98(0x50)
	struct UFortItemDefinition* ; // 0xee8(0x08)

	void GetQuantMultiplierOverride(struct AActor* Player, double& Multiplier); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetQuantMultiplierOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetLootOverride(struct AActor* Player, bool& Success?, struct FName& ItemsToDrop); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SendQuestFishingEvent(struct AActor* Actor); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SendQuestFishingEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FindFishSize(struct TMap<struct FGameplayTag, struct FScalableFloat>& FishSizeMap, struct UFortItemDefinition* ItemDef, struct FScalableFloat& FishSize, bool& Found); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FindFishSize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool Can Respawn(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Can Respawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetRespawnDelay(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetRespawnDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Loot Tier(bool IsExplosion, bool IsProFishingRod, struct AActor* Player, struct FName& Output_Get); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Get Loot Tier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldKill(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleUseTracking(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBalanceValues(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_5804F209455A50B3EE64E3AED087DE64(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlaySpawnItemHightier(struct FVector Location); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FishingComplete(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FishingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideAndKill(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnItem(struct AActor* Target, bool Hooked, struct USceneComponent* HookComponent, struct FVector SpawnLoc, struct AActor* Player, double ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, struct AActor* ItemUsedToFish, struct APrj_Athena_FloppingRabbit_C* Projectile, struct FGameplayTagContainer Required Tags); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCollectionsComponent(bool bCaughtFish, struct AActor* Player, struct UFortItemDefinition* ItemDefinition, struct AFortPickup* PickUp, double Length); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UpdateCollectionsComponent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Clear Saved Collection Data(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Clear Saved Collection Data // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideAndDelayForRespawn(double TimeToDelay); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndDelayForRespawn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SomethingCaught(struct AFortPickup* ItemSpawned, struct AActor* Player, struct FGameplayTagContainer RequiredTags, struct USceneComponent* HookComponent); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SomethingCaught // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int32_t EntryPoint); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

