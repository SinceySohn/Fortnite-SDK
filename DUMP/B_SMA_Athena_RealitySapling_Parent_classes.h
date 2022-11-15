// BlueprintGeneratedClass B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C
// Size: 0x15cf (Inherited: 0xef8)
struct AB_SMA_Athena_RealitySapling_Parent_C : ABuildingRealitySapling {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef8(0x08)
	struct UAudioComponent* AmbientLoop; // 0xf00(0x08)
	struct UNonPlayerConversationComponent_C* NonPlayerConversationComponent; // 0xf08(0x08)
	struct UBoxComponent* Box; // 0xf10(0x08)
	struct UStaticMeshComponent* StumpStaticMesh; // 0xf18(0x08)
	struct UStaticMeshComponent* YouthStaticMesh; // 0xf20(0x08)
	struct UStaticMeshComponent* BabyStaticMesh; // 0xf28(0x08)
	double FruitStartDistanceFromGround; // 0xf30(0x08)
	double FruitHorizDistanceFromCenter; // 0xf38(0x08)
	struct FScalableFloat NumFruitsToGrow; // 0xf40(0x28)
	struct TArray<struct FServerSpawnedFruitSlot> ServerSpawnedFruitSlot; // 0xf68(0x10)
	struct TArray<struct AActor*> ServerWeeds; // 0xf78(0x10)
	struct TArray<struct AActor*> ServerConsumables; // 0xf88(0x10)
	double YouthScale; // 0xf98(0x08)
	double BabyScale; // 0xfa0(0x08)
	int32_t NumTimesWeeded; // 0xfa8(0x04)
	char pad_FAC[0x4]; // 0xfac(0x04)
	struct AB_RealitySaplingsWeeds_Spawner_C* WeedSpawner; // 0xfb0(0x08)
	int32_t SaplingNurturedCountThisMatch; // 0xfb8(0x04)
	char pad_FBC[0x4]; // 0xfbc(0x04)
	struct FScalableFloat MaxWeedingTimes; // 0xfc0(0x28)
	struct FTimerHandle CreateFruitTimerHandle; // 0xfe8(0x08)
	bool bUseShortTimes; // 0xff0(0x01)
	char pad_FF1[0x3]; // 0xff1(0x03)
	int32_t PrevNumTimesWeeded; // 0xff4(0x04)
	bool Overrride Sapling Persistence; // 0xff8(0x01)
	char pad_FF9[0x7]; // 0xff9(0x07)
	double FruitAngleOffset; // 0x1000(0x08)
	int32_t ReviveCount_unrepped; // 0x1008(0x04)
	bool HasDied; // 0x100c(0x01)
	char pad_100D[0x3]; // 0x100d(0x03)
	struct UMaterialInstance* Dead Baby Material; // 0x1010(0x08)
	struct UFortWeakPointComponent* WeakPointComp; // 0x1018(0x08)
	struct TArray<struct UFortWeakPointComponent*> WeakPointCmps; // 0x1020(0x10)
	bool Debug; // 0x1030(0x01)
	char pad_1031[0x7]; // 0x1031(0x07)
	struct AFortPlayerController* Owning Player Controller Repped; // 0x1038(0x08)
	struct AFortPlayerStateAthena* Owning Player State Repped; // 0x1040(0x08)
	double SecondsWateredThisMatch; // 0x1048(0x08)
	struct FScalableFloat MaxTimesASaplingCanBeWateredPerMatch; // 0x1050(0x28)
	struct FScalableFloat NumSecondsWateredForReaction; // 0x1078(0x28)
	double LastWateredTime; // 0x10a0(0x08)
	struct FTimerHandle WaterTimerHandle; // 0x10a8(0x08)
	int32_t NumTimesWateredThisMatch; // 0x10b0(0x04)
	bool IsBeingWatered; // 0x10b4(0x01)
	bool DestroyedForTransplant; // 0x10b5(0x01)
	bool DestroyedFromAging; // 0x10b6(0x01)
	char pad_10B7[0x1]; // 0x10b7(0x01)
	int32_t NumCurrentWeeds; // 0x10b8(0x04)
	char pad_10BC[0x4]; // 0x10bc(0x04)
	struct FDateTime LastWeededDateTime; // 0x10c0(0x08)
	struct FTimespan DebugTimespanOffset; // 0x10c8(0x08)
	int32_t DayOffset; // 0x10d0(0x04)
	int32_t MinuteOffset; // 0x10d4(0x04)
	bool NeedsWeeding; // 0x10d8(0x01)
	char pad_10D9[0x3]; // 0x10d9(0x03)
	int32_t Fruit1State; // 0x10dc(0x04)
	int32_t Fruit2State; // 0x10e0(0x04)
	int32_t Fruit3State; // 0x10e4(0x04)
	enum class SaplingFruitVariants InitialSaplingFruitVariant; // 0x10e8(0x01)
	bool HasSpawnedMythic; // 0x10e9(0x01)
	bool isInSafeZone; // 0x10ea(0x01)
	char pad_10EB[0x5]; // 0x10eb(0x05)
	struct TArray<int32_t> Persistent Sapling Data Fruit States; // 0x10f0(0x10)
	struct FMulticastInlineDelegate SaplingUpdateEvent; // 0x1100(0x10)
	struct FRealitySaplingPersistentData MovedSaplingPersistentData; // 0x1110(0x60)
	struct USoundBase* FruitSpawnSound; // 0x1170(0x08)
	struct USoundBase* NurturedSound; // 0x1178(0x08)
	struct USoundBase* DamagedSound; // 0x1180(0x08)
	struct UMaterialInstance* Dead Youth Material; // 0x1188(0x08)
	struct UMaterialInstance* Dead Mature Material; // 0x1190(0x08)
	struct UMaterialInstance* Dead Stump Material; // 0x1198(0x08)
	bool SaplingTransplanted; // 0x11a0(0x01)
	char pad_11A1[0x7]; // 0x11a1(0x07)
	struct FRealitySaplingPersistentData PersistentDataWhenSpawned; // 0x11a8(0x60)
	struct USoundBase* PlantedSound; // 0x1208(0x08)
	struct AFortPlayerController* PlanterPlayerController; // 0x1210(0x08)
	struct FSaplingBPReppedData SaplingBPReppedData; // 0x1218(0x08)
	bool OverrideIsLocalPlayerSapling; // 0x1220(0x01)
	bool FruitFallsOffSaplingsWhenKilled; // 0x1221(0x01)
	char pad_1222[0x6]; // 0x1222(0x06)
	struct UStaticMeshComponent* Active Static Mesh Comp; // 0x1228(0x08)
	double MoveOnZAxis; // 0x1230(0x08)
	struct USoundBase* FruitGrowSound; // 0x1238(0x08)
	struct USoundBase* WitheringSound; // 0x1240(0x08)
	struct FScalableFloat DelayForPartialNurtureCelebration; // 0x1248(0x28)
	struct FScalableFloat DelayForNurtureFruitUpgrade; // 0x1270(0x28)
	struct FScalableFloat DelayForNurtureCelebration; // 0x1298(0x28)
	struct FScalableFloat MinNurturingLevel; // 0x12c0(0x28)
	bool HasBeenInitialized; // 0x12e8(0x01)
	bool IsGhost; // 0x12e9(0x01)
	char pad_12EA[0x6]; // 0x12ea(0x06)
	struct FScalableFloat MaturityLevelWhenGroundItemsShowUp; // 0x12f0(0x28)
	struct FScalableFloat SaplingsEnabled; // 0x1318(0x28)
	struct FScalableFloat MythicFruitEnabled; // 0x1340(0x28)
	struct TSoftObjectPtr<UTexture2D> OwningPlayerSocialAvatarIcon; // 0x1368(0x28)
	bool FoundMythic; // 0x1390(0x01)
	char pad_1391[0x7]; // 0x1391(0x07)
	struct FScalableFloat OverrideMinBabyFruitsAtStartOfMatch; // 0x1398(0x28)
	struct FScalableFloat OverrideMinYouthFruitsAtStartOfMatch; // 0x13c0(0x28)
	struct FScalableFloat OverrideMinAdultFruitsAtStartOfMatch; // 0x13e8(0x28)
	int32_t fruitStateCount; // 0x1410(0x04)
	int32_t youthCount; // 0x1414(0x04)
	int32_t adultCount; // 0x1418(0x04)
	int32_t babyConst; // 0x141c(0x04)
	int32_t youthConst; // 0x1420(0x04)
	int32_t adultConst; // 0x1424(0x04)
	struct FMulticastInlineDelegate SaplingDestroyedForTransplantEvent; // 0x1428(0x10)
	struct FMulticastInlineDelegate SaplingWeededByEnemyEvent; // 0x1438(0x10)
	struct FMulticastInlineDelegate SaplingHarvestedByEnemyEvent; // 0x1448(0x10)
	struct FMulticastInlineDelegate SaplingDamagedByEnemyEvent; // 0x1458(0x10)
	bool OkToNotify; // 0x1468(0x01)
	char pad_1469[0x7]; // 0x1469(0x07)
	struct FScalableFloat AutoWeedWhenWeedsCantBePlaced; // 0x1470(0x28)
	struct FScalableFloat NumFruitsToGrow_Uncommon; // 0x1498(0x28)
	struct FScalableFloat NumFruitsToGrow_Common; // 0x14c0(0x28)
	struct FScalableFloat NumFruitsToGrow_Rare; // 0x14e8(0x28)
	struct FScalableFloat NumFruitsToGrow_Legendary; // 0x1510(0x28)
	struct FScalableFloat NumFruitsToGrow_Epic; // 0x1538(0x28)
	struct FScalableFloat AutoLootFruitsWhenTooMany; // 0x1560(0x28)
	bool EnemyAttacking; // 0x1588(0x01)
	bool EnemyLooting; // 0x1589(0x01)
	char pad_158A[0x6]; // 0x158a(0x06)
	struct FScalableFloat RemoveAllFruitsWhenNeedsWeeding; // 0x1590(0x28)
	bool HasBegunPlay; // 0x15b8(0x01)
	bool HasHeldOffInitialize; // 0x15b9(0x01)
	char pad_15BA[0x2]; // 0x15ba(0x02)
	int32_t GrayAsInt; // 0x15bc(0x04)
	int32_t MythicAsBabyInt; // 0x15c0(0x04)
	int32_t TargetAsInt; // 0x15c4(0x04)
	int32_t GoldAsInt; // 0x15c8(0x04)
	enum class SaplingFruitVariants Gray; // 0x15cc(0x01)
	enum class SaplingFruitVariants MythicBaby; // 0x15cd(0x01)
	enum class SaplingFruitVariants Gold; // 0x15ce(0x01)

	void Check for Too Many Fruits at Rarity Level(bool ForceSilent); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Check for Too Many Fruits at Rarity Level // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Num Fruits to Grow At Current Rarity(int32_t& RetVal); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Get Num Fruits to Grow At Current Rarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsOkToAutoping(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.IsOkToAutoping // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Init Local Persistent Sapling Data Fruit States(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Init Local Persistent Sapling Data Fruit States // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Persistent Sapling Fruit States Immediate(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Setup Persistent Sapling Fruit States Immediate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateControllerCompSaplingDataStruct(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.UpdateControllerCompSaplingDataStruct // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Kill Weeds(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Kill Weeds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DestroyedForTransplant(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_DestroyedForTransplant // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetRarityNameAndColor(struct FText& Name, struct FLinearColor& Color); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.GetRarityNameAndColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_ServerSpawnedFruitSlot(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_ServerSpawnedFruitSlot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Notify Sapling Fruit Destroyed(struct AActor* Destroyed Fruit Actor); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Notify Sapling Fruit Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Notify Fruits Upgraded(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Notify Fruits Upgraded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnFruit(int32_t ArrayIndex, bool bIsMythic, struct ATiered_RealityFruit_Athena_C*& TieredFruitAthena); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SpawnFruit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OverrideIsLocalPlayerSapling(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_OverrideIsLocalPlayerSapling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SaplingBPReppedData(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_SaplingBPReppedData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Sapling Newly Transplanted(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Sapling Newly Transplanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Sapling Belongs to Local Player(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Sapling Belongs to Local Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Sapling Baby Planted(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Sapling Baby Planted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NeedsWeeding(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_NeedsWeeding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Notify Getting Transplanted(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Notify Getting Transplanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Turned Into A Ghost(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Turned Into A Ghost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Sapling Partially Nurtured(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Sapling Partially Nurtured // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Owning Player State Repped(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_Owning Player State Repped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MarkSapling(bool MarkOnClient); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.MarkSapling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Persistent Sapling Fruit States(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Setup Persistent Sapling Fruit States // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Notify Fruit State Changed(struct ATiered_RealityFruit_Athena_C* Fruit); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Notify Fruit State Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSafeZoneStatus(bool bInSafeZone); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.UpdateSafeZoneStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FName GetMarkerDetailsId(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.GetMarkerDetailsId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Get Fruit Spawn Transform(int32_t FruitIndex, struct FTransform& OutTransform); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Get Fruit Spawn Transform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Get UTCTime With Offset Added(struct FDateTime& NewParam); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Get UTCTime With Offset Added // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Calc Needs Weeding(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Calc Needs Weeding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNeedsWeeding(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SetNeedsWeeding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NumCurrentWeeds(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_NumCurrentWeeds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_HasDied(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_HasDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Owning Player Controller Repped(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_Owning Player Controller Repped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Dead(bool& RetVal); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Is Dead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Set Sapling Mesh Active(struct UStaticMeshComponent* InStaticMeshComp, bool bVisible, bool bActiveCollision, struct UMaterialInstance* OriginalMaterial, struct UMaterialInstance* DeadMaterial); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Set Sapling Mesh Active // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Add Fruit Timer if Needed(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Start Add Fruit Timer if Needed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Scalable Float Time(struct FScalableFloat ScalableFloat, double& Value); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Get Scalable Float Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Add Server Weed(struct AActor* Weed); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Add Server Weed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Add Server Consumable(struct AActor* Consumable); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Add Server Consumable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SaplingNurturedCountThisMatch(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnRep_SaplingNurturedCountThisMatch // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Consumable Destroyed(struct AActor* Consumable); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Consumable Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Weed Destroyed(struct AActor* Weed); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Weed Destroyed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSaplingAgeVariant(enum class SaplingAgeVariants& SaplingAge); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.GetSaplingAgeVariant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnMissingFruitActors(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SpawnMissingFruitActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnWeedsIfNeeded(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SpawnWeedsIfNeeded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnMushrooms(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SpawnMushrooms // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnWeedsImmediate(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SpawnWeedsImmediate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSaplingNurtured(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnSaplingNurtured // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Fruit Destroyed(struct AActor* DestroyedActor); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Fruit Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateFruits(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.CreateFruits // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeSapling(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.InitializeSapling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult& HitInfo); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ReceiveRadialDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCurieStateAttached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag StateTag); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnCurieStateAttached_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSaplingKilled(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnSaplingKilled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieStateDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag StateTag); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnCurieStateDetached_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void WaterSapling(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.WaterSapling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Watered Timer(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Start Watered Timer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToBoxOverlapEvent(bool Begin); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.BindToBoxOverlapEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Water With Gasoline(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Water With Gasoline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartBoxOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.StartBoxOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Sapling Partially Nurtured(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Sapling Partially Nurtured // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WeedSpawnerDestroyed(struct AActor* DestroyedActor); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.WeedSpawnerDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SafeZoneCheck(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SafeZoneCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateServerFruitAndBindToDestroyed(int32_t Index, bool IsMythic); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.CreateServerFruitAndBindToDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFruitVariantOrRarityChangedEvent(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnFruitVariantOrRarityChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForSaplingNewlyTransplanted(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.CheckForSaplingNewlyTransplanted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnterGhostState(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.EnterGhostState // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FillVariablesFromPersistentData(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.FillVariablesFromPersistentData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AgeUpSapling(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.AgeUpSapling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On End Of Life(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On End Of Life // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventGrowthSound(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.EventGrowthSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventFinishedSound(struct USoundBase* SoundToPlay); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.EventFinishedSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Sapling Transplanting Away(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Sapling Transplanting Away // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceSpawnWeeds(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ForceSpawnWeeds // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Weeds Killed(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.On Weeds Killed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Instigate Sapling Wither(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Instigate Sapling Wither // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSaplingRegistered(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnSaplingRegistered // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void CheckMatchStartHotFixFruitStateOverrides(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.CheckMatchStartHotFixFruitStateOverrides // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.GamePhaseStepChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CustomEvent(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Client_OnEnemyDamaged(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Client_OnEnemyDamaged // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Client_OnEnemyHarvested(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.Client_OnEnemyHarvested // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NotificationCooldownExpired(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.NotificationCooldownExpired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNotificationCooldown(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SetNotificationCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNotificationTimer(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SetNotificationTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NotificationTimerExpired(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.NotificationTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnemyDamaged(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnEnemyDamaged // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnemyHarvested(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.OnEnemyHarvested // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_SMA_Athena_RealitySapling_Parent(int32_t EntryPoint); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.ExecuteUbergraph_B_SMA_Athena_RealitySapling_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void SaplingDamagedByEnemyEvent__DelegateSignature(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SaplingDamagedByEnemyEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingHarvestedByEnemyEvent__DelegateSignature(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SaplingHarvestedByEnemyEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingWeededByEnemyEvent__DelegateSignature(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SaplingWeededByEnemyEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingDestroyedForTransplantEvent__DelegateSignature(); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SaplingDestroyedForTransplantEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SaplingUpdateEvent__DelegateSignature(struct AB_SMA_Athena_RealitySapling_Parent_C* Sapling); // Function B_SMA_Athena_RealitySapling_Parent.B_SMA_Athena_RealitySapling_Parent_C.SaplingUpdateEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

