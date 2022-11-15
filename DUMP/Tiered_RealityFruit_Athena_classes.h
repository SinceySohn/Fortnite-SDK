// BlueprintGeneratedClass Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C
// Size: 0x16b5 (Inherited: 0x1200)
struct ATiered_RealityFruit_Athena_C : ATiered_RealityFruit_Athena_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1200(0x08)
	struct UStaticMeshComponent* StaticMeshStem; // 0x1208(0x08)
	double Min World Scale Baby; // 0x1210(0x08)
	double Cur Min World Scale; // 0x1218(0x08)
	double Cur Max World Scale; // 0x1220(0x08)
	double Curr World Scale; // 0x1228(0x08)
	struct FLinearColor CurInnerColor; // 0x1230(0x10)
	struct FLinearColor CurOuterColor; // 0x1240(0x10)
	struct FLinearColor StartInnerColor; // 0x1250(0x10)
	struct FLinearColor StartOuterColor; // 0x1260(0x10)
	struct FLinearColor DestInnerColor; // 0x1270(0x10)
	struct FLinearColor DestOuterColor; // 0x1280(0x10)
	struct FLinearColor DestColor_Baby_Inner; // 0x1290(0x10)
	struct FLinearColor DestColor_Baby_Outer; // 0x12a0(0x10)
	struct FLinearColor DestColor_Youth_Inner; // 0x12b0(0x10)
	struct FLinearColor DestColor_Youth_Outer; // 0x12c0(0x10)
	struct FLinearColor Dest Color_Uncommon_Inner; // 0x12d0(0x10)
	struct FLinearColor Dest Color_Uncommon_Outer; // 0x12e0(0x10)
	struct FLinearColor Dest Color_Common_Inner; // 0x12f0(0x10)
	struct FLinearColor Dest Color_Common_Outer; // 0x1300(0x10)
	struct FLinearColor Dest Color_Rare_Inner; // 0x1310(0x10)
	struct FLinearColor Dest Color_Rare_Outer; // 0x1320(0x10)
	struct FLinearColor Dest Color_Epic_Inner; // 0x1330(0x10)
	struct FLinearColor Dest Color_Epic_Outer; // 0x1340(0x10)
	struct FLinearColor Dest Color_Legendary_Inner; // 0x1350(0x10)
	struct FLinearColor Dest Color_Legendary_Outer; // 0x1360(0x10)
	struct FLinearColor Dest Color_Mythic_Inner; // 0x1370(0x10)
	struct FLinearColor Dest Color_Mythic_Outer; // 0x1380(0x10)
	struct FLinearColor Dest Color_Mythic_Baby_Inner; // 0x1390(0x10)
	struct FTimerHandle LerpTimerHandle; // 0x13a0(0x08)
	double LerpTimerInterval; // 0x13a8(0x08)
	double Max World Size Alpha Mature; // 0x13b0(0x08)
	double Max World Size Alpha Youth ; // 0x13b8(0x08)
	double Min World Size Alpha Baby; // 0x13c0(0x08)
	double Max World Size Alpha Baby; // 0x13c8(0x08)
	struct FScalableFloat PickedTimerLength; // 0x13d0(0x28)
	struct FScalableFloat BabyTimerLength; // 0x13f8(0x28)
	struct FScalableFloat MatureTimerLength; // 0x1420(0x28)
	struct FScalableFloat YouthTimerLength; // 0x1448(0x28)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x1470(0x08)
	bool UseShortTimes; // 0x1478(0x01)
	char pad_1479[0x7]; // 0x1479(0x07)
	struct FVector OrigOrigin; // 0x1480(0x18)
	int32_t FallCount_repped; // 0x1498(0x04)
	char pad_149C[0x4]; // 0x149c(0x04)
	struct FVector LandingLocation; // 0x14a0(0x18)
	struct USoundBase* Sound_Landing; // 0x14b8(0x08)
	struct UFXSystemAsset* LandingFX; // 0x14c0(0x08)
	bool Opened; // 0x14c8(0x01)
	bool LandInterrupted; // 0x14c9(0x01)
	char pad_14CA[0x6]; // 0x14ca(0x06)
	double Max World Scale Mythic Mature; // 0x14d0(0x08)
	struct FLinearColor Dest Color_Mythic_Baby_Outer; // 0x14d8(0x10)
	bool HasReachedDestInnerColor; // 0x14e8(0x01)
	bool HasReachedDestScale; // 0x14e9(0x01)
	char pad_14EA[0x6]; // 0x14ea(0x06)
	double Scale Interp Speed; // 0x14f0(0x08)
	double Color Interp Speed Inner; // 0x14f8(0x08)
	struct FName LootTierGroup_Nurtured0; // 0x1500(0x04)
	struct FName LootTierGroup_Nurtured1; // 0x1504(0x04)
	struct FName LootTierGroup_Nurtured2; // 0x1508(0x04)
	struct FName LootTierGroup_Nurtured3; // 0x150c(0x04)
	struct FName LootTierGroup_Nurtured4; // 0x1510(0x04)
	bool DebugFruit; // 0x1514(0x01)
	bool IsMythicFruit; // 0x1515(0x01)
	enum class SaplingFruitVariants VariantOrRarity; // 0x1516(0x01)
	bool FallOffWhenOverripe; // 0x1517(0x01)
	struct FName LootTierGroup_Nurtured5; // 0x1518(0x04)
	enum class SaplingFruitVariants Gray; // 0x151c(0x01)
	char pad_151D[0x3]; // 0x151d(0x03)
	struct FTimerHandle GrowthTimer; // 0x1520(0x08)
	double Value; // 0x1528(0x08)
	struct FScalableFloat ShortTime; // 0x1530(0x28)
	struct FScalableFloat DelayTimerLength; // 0x1558(0x28)
	bool HasEverFallen; // 0x1580(0x01)
	char pad_1581[0x7]; // 0x1581(0x07)
	struct FMulticastInlineDelegate VariantOrRarityChangedEvent; // 0x1588(0x10)
	bool UseCurvedStem; // 0x1598(0x01)
	bool HasReachedDestOuterColor; // 0x1599(0x01)
	char pad_159A[0x6]; // 0x159a(0x06)
	double Color Interp Speed Outer; // 0x15a0(0x08)
	struct TArray<struct FText> RarityTexts; // 0x15a8(0x10)
	struct FText PickFruitTextFormat; // 0x15b8(0x18)
	struct USoundBase* FruitDestroyedSound; // 0x15d0(0x08)
	struct USoundBase* FruitPickedSound; // 0x15d8(0x08)
	struct UAudioComponent* SoundCurrentlyPlaying; // 0x15e0(0x08)
	double Cur Max World Alpha; // 0x15e8(0x08)
	bool HasReachedDestAlpha; // 0x15f0(0x01)
	char pad_15F1[0x7]; // 0x15f1(0x07)
	double Curr World Alpha; // 0x15f8(0x08)
	double Alpha Interp Speed; // 0x1600(0x08)
	double Max World Scale Youth; // 0x1608(0x08)
	double Max World Scale Baby; // 0x1610(0x08)
	double Cur Min World Alpha; // 0x1618(0x08)
	double Max World Scale Mature; // 0x1620(0x08)
	double Max World Size Alpha Mythic Mature; // 0x1628(0x08)
	struct FName Socket Name; // 0x1630(0x04)
	bool ScaleOutAndDie; // 0x1634(0x01)
	enum class SaplingFruitVariants MythicBaby; // 0x1635(0x01)
	char pad_1636[0x2]; // 0x1636(0x02)
	struct FGameplayTagContainer Legendary Fruit Gameplay Tags For Quest; // 0x1638(0x20)
	bool IsGoldFruit; // 0x1658(0x01)
	char pad_1659[0x7]; // 0x1659(0x07)
	struct FScalableFloat BabyColorAlphaFactor; // 0x1660(0x28)
	struct FScalableFloat YouthColorAlphaFactor; // 0x1688(0x28)
	int32_t FruitSlot; // 0x16b0(0x04)
	bool HasBegunPlay; // 0x16b4(0x01)

	void Get Sapling Variant or Rarity(int32_t NumTimesWeeded, enum class SaplingFruitVariants& OutRarityOrVariant); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Get Sapling Variant or Rarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Color By Rarity(enum class SaplingFruitVariants InColor, bool IsInner, struct FLinearColor& OutColor); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Get Color By Rarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Weighted Fruit Color(struct FLinearColor SourceColor, double AlphaFactor, bool IsInner, struct FLinearColor& OutColor); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Get Weighted Fruit Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Auto Loot Fruit(int32_t NumTimesWeeded); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Auto Loot Fruit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetFruitScale(double Scale); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.SetFruitScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetFruitRarityRichText(struct FText& Text); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.GetFruitRarityRichText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetFruitSizeAlpha(double SizeAlpha); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.SetFruitSizeAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_UseCurvedStem(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnRep_UseCurvedStem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Opened(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnRep_Opened // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set To Use Short Times(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Set To Use Short Times // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Notify Sapling Upgraded(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Notify Sapling Upgraded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_VariantOrRarity(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnRep_VariantOrRarity // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Loot Tier Group From Rarity(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Set Loot Tier Group From Rarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyThisFruit(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.DestroyThisFruit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartDecay(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.StartDecay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Bind To Building Actor(struct UObject* Object); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Setup Bind To Building Actor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Landing FX(bool bSpawnVFX); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Play Landing FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Force Open Fruit(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Force Open Fruit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleProjectileMovementStop(struct FHitResult ImpactResult); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.HandleProjectileMovementStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_LandingLocation(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnRep_LandingLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceSetLocationOnLanding(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.ForceSetLocationOnLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetScalableFloatTime(struct FScalableFloat ScalableFloat, double& Value); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.GetScalableFloatTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Increment Growth State(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Increment Growth State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Growth Status(bool NewParam); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Update Growth Status // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLerpToDest(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.UpdateLerpToDest // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetLerpParamsAndLerpTimer(double StartingScale, double StartingSizeAlpha); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.ResetLerpParamsAndLerpTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartLerpTimer(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.StartLerpTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLandingLocationChanged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnLandingLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetSearched(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Multicast_ApplyGravityForFall(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Multicast_ApplyGravityForFall // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void LandingInterrupted(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.LandingInterrupted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Multicast_ApplyGravityForFallOffSapling(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Multicast_ApplyGravityForFallOffSapling // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFruitLooted(struct AFortPawn* FortPawn); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnFruitLooted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventFruitEndSound(struct USoundBase* SoundToPlay); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.EventFruitEndSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Scale Out and Die(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.Scale Out and Die // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSaplingKilled(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.OnSaplingKilled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tiered_RealityFruit_Athena(int32_t EntryPoint); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.ExecuteUbergraph_Tiered_RealityFruit_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void VariantOrRarityChangedEvent__DelegateSignature(); // Function Tiered_RealityFruit_Athena.Tiered_RealityFruit_Athena_C.VariantOrRarityChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

