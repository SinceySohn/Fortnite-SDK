// BlueprintGeneratedClass Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C
// Size: 0x1200 (Inherited: 0x10d8)
struct ATiered_RealityFruit_Athena_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d8(0x08)
	struct UAudioComponent* Chest_Ambient_Sound; // 0x10e0(0x08)
	float Timeline_0_Time_1D160C0840A776ECFE3572869222E745; // 0x10e8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_1D160C0840A776ECFE3572869222E745; // 0x10ec(0x01)
	char pad_10ED[0x3]; // 0x10ed(0x03)
	struct UTimelineComponent* ; // 0x10f0(0x08)
	float MobileSelectedTL_LerpInteactoIcon_0577B8574F1CB5CC5A46CAA6B5168C3E; // 0x10f8(0x04)
	float MobileSelectedTL_LerpObject_0577B8574F1CB5CC5A46CAA6B5168C3E; // 0x10fc(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_0577B8574F1CB5CC5A46CAA6B5168C3E; // 0x1100(0x01)
	char pad_1101[0x7]; // 0x1101(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0x1108(0x08)
	float MobileOnInteractTL_LERP_24887B34456E923C5BF85EB2F3AA6AE2; // 0x1110(0x04)
	enum class ETimelineDirection MobileOnInteractTL__Direction_24887B34456E923C5BF85EB2F3AA6AE2; // 0x1114(0x01)
	char pad_1115[0x3]; // 0x1115(0x03)
	struct UTimelineComponent* MobileOnInteractTL; // 0x1118(0x08)
	struct UParticleSystemComponent* Loot_Effect; // 0x1120(0x08)
	struct USoundBase* SpecialChestOpenSound; // 0x1128(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x1130(0x10)
	double MobileWiggleAmount; // 0x1140(0x08)
	double ChestChimeVisualUpdate; // 0x1148(0x08)
	struct UMaterialInterface* MobileInteractionMaterial; // 0x1150(0x08)
	struct UStaticMeshComponent* MobileInteractIcon; // 0x1158(0x08)
	struct FVector MobileInteractIconLocation; // 0x1160(0x18)
	struct FVector MobileInteractIconScale; // 0x1178(0x18)
	struct USoundBase* Open Chest Sound; // 0x1190(0x08)
	struct UParticleSystem* P_Loot_Chest_Opened_FX; // 0x1198(0x08)
	struct UParticleSystemComponent* ; // 0x11a0(0x08)
	struct UParticleSystemComponent* ; // 0x11a8(0x08)
	struct UParticleSystem* Galileo_Chest_Open_FX; // 0x11b0(0x08)
	double OpenFX_Rotation; // 0x11b8(0x08)
	bool EnableAudioIndicator; // 0x11c0(0x01)
	char pad_11C1[0x3]; // 0x11c1(0x03)
	struct FName NurturedLootTierGroup; // 0x11c4(0x04)
	struct FName UnNurturedLootTierGroup; // 0x11c8(0x04)
	int32_t MaxTierLevel; // 0x11cc(0x04)
	struct UNiagaraComponent* NS_FruitLoot_Open; // 0x11d0(0x08)
	struct UNiagaraSystem* NS_LootOpen; // 0x11d8(0x08)
	struct AFortPawn* Looting Pawn; // 0x11e0(0x08)
	struct FFruitReppedData FruitReppedData; // 0x11e8(0x18)

	void FruitDataRepped(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.FruitDataRepped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_FruitReppedData(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnRep_FruitReppedData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct AFortPlayerControllerAthena* GetOwningControllerForAnalytics(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.GetOwningControllerForAnalytics // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Set Loot Tier Group From Rarity(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Set Loot Tier Group From Rarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Loot Tier Group From Nurturing(struct AB_SMA_Athena_RealitySapling_Parent_C* LocalSaplingParent); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Set Loot Tier Group From Nurturing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetCustomDepthStencilValue(struct TArray<struct UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool& bOutConsume); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnSetCustomDepthStencilValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetVisibleMobileInteractIcon(bool Visible); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetMaxAudibleDistance(double& Max Distance); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.GetMaxAudibleDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CleanupWiggleMIDs(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.CleanupWiggleMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateMobileMIDs(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.CreateMobileMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetLightVisibility(bool Visible); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.SetLightVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MobileOnInteractTL__FinishedFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.MobileOnInteractTL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileOnInteractTL__UpdateFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.MobileOnInteractTL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__FinishedFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__UpdateFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetSearched(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Mobile_Outline_On(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Mobile_Outline_On // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_Outline_Off(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Mobile_Outline_Off // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_OnInteract(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Mobile_OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_OnDisconnect(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.Mobile_OnDisconnect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnableBacchusHighlight(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DisableBacchusHighlight(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginSearch(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnBeginSearch // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HideChestOpenableCosmetics(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.HideChestOpenableCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DetermineVFXRotation(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.DetermineVFXRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnChestOpenVFX(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.SpawnChestOpenVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayChestOpeningTimeline(); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.PlayChestOpeningTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFruitLooted(struct AFortPawn* FortPawn); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.OnFruitLooted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnBeginInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.BlueprintOnBeginInteract // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tiered_RealityFruit_Athena_Parent(int32_t EntryPoint); // Function Tiered_RealityFruit_Athena_Parent.Tiered_RealityFruit_Athena_Parent_C.ExecuteUbergraph_Tiered_RealityFruit_Athena_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

