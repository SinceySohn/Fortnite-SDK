// BlueprintGeneratedClass Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C
// Size: 0x1200 (Inherited: 0x10d8)
struct ATiered_Chest_Athena_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d8(0x08)
	struct UNiagaraComponent* NS_Athena_Loot_Chest_Aura; // 0x10e0(0x08)
	struct UFortSoundIndicatorComponent* Sound Indicator Component; // 0x10e8(0x08)
	struct UStaticMeshComponent* S_Chest_SmokeSheet; // 0x10f0(0x08)
	struct UPointLightComponent* TreasureLight; // 0x10f8(0x08)
	struct UAudioComponent* Chest_Ambient_Sound; // 0x1100(0x08)
	float Timeline_0_Time_9F2F7D434432281DE86E7F8AF689ADEE; // 0x1108(0x04)
	enum class ETimelineDirection Timeline_0__Direction_9F2F7D434432281DE86E7F8AF689ADEE; // 0x110c(0x01)
	char pad_110D[0x3]; // 0x110d(0x03)
	struct UTimelineComponent* ; // 0x1110(0x08)
	float MobileSelectedTL_LerpInteactoIcon_F15CC3BD4D3A06B01BAF58B068D3E97B; // 0x1118(0x04)
	float MobileSelectedTL_LerpObject_F15CC3BD4D3A06B01BAF58B068D3E97B; // 0x111c(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_F15CC3BD4D3A06B01BAF58B068D3E97B; // 0x1120(0x01)
	char pad_1121[0x7]; // 0x1121(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0x1128(0x08)
	float MobileOnInteractTL_LERP_B74B7BD743492EE98A415784DED92FC8; // 0x1130(0x04)
	enum class ETimelineDirection MobileOnInteractTL__Direction_B74B7BD743492EE98A415784DED92FC8; // 0x1134(0x01)
	char pad_1135[0x3]; // 0x1135(0x03)
	struct UTimelineComponent* MobileOnInteractTL; // 0x1138(0x08)
	struct UParticleSystemComponent* Loot_Effect; // 0x1140(0x08)
	struct USoundBase* SpecialChestOpenSound; // 0x1148(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x1150(0x10)
	double MobileWiggleAmount; // 0x1160(0x08)
	double ChestChimeVisualUpdate; // 0x1168(0x08)
	struct UMaterialInterface* MobileInteractionMaterial; // 0x1170(0x08)
	struct UStaticMeshComponent* MobileInteractIcon; // 0x1178(0x08)
	struct FVector MobileInteractIconLocation; // 0x1180(0x18)
	struct FVector MobileInteractIconScale; // 0x1198(0x18)
	struct USoundBase* Open Chest Sound; // 0x11b0(0x08)
	struct UParticleSystem* P_Loot_Chest_Opened_FX; // 0x11b8(0x08)
	struct UParticleSystemComponent* ; // 0x11c0(0x08)
	struct UParticleSystemComponent* ; // 0x11c8(0x08)
	double OpenFX_Rotation; // 0x11d0(0x08)
	bool EnableAudioIndicator; // 0x11d8(0x01)
	char pad_11D9[0x7]; // 0x11d9(0x07)
	struct TArray<struct UActorComponent*> AdditionalVFXToDestroyOnSearch; // 0x11e0(0x10)
	bool bOpened; // 0x11f0(0x01)
	char pad_11F1[0x7]; // 0x11f1(0x07)
	struct USoundEffectSourcePresetChain* ChestOpenSourceEffectOverride; // 0x11f8(0x08)

	void DestroyAdditionalVFXComponents(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.DestroyAdditionalVFXComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetCustomDepthStencilValue(struct TArray<struct UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool& bOutConsume); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.OnSetCustomDepthStencilValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetVisibleMobileInteractIcon(bool Visible); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetMaxAudibleDistance(double& Max Distance); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.GetMaxAudibleDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CleanupWiggleMIDs(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.CleanupWiggleMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateMobileMIDs(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.CreateMobileMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetLightVisibility(bool Visible); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.SetLightVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MobileOnInteractTL__FinishedFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.MobileOnInteractTL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileOnInteractTL__UpdateFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.MobileOnInteractTL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__FinishedFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__UpdateFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetSearched(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Mobile_Outline_On(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Mobile_Outline_On // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_Outline_Off(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Mobile_Outline_Off // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_OnInteract(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Mobile_OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Mobile_OnDisconnect(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.Mobile_OnDisconnect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnableBacchusHighlight(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DisableBacchusHighlight(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginSearch(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.OnBeginSearch // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HideChestOpenableCosmetics(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.HideChestOpenableCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnChestOpenVFX(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.SpawnChestOpenVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayChestOpeningTimeline(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.PlayChestOpeningTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AudioOnOpened(); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.AudioOnOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tiered_Chest_Athena_Parent(int32_t EntryPoint); // Function Tiered_Chest_Athena_Parent.Tiered_Chest_Athena_Parent_C.ExecuteUbergraph_Tiered_Chest_Athena_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

