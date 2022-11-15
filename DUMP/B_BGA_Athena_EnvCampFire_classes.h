// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
// Size: 0xcea (Inherited: 0x9d8)
struct AB_BGA_Athena_EnvCampFire_C : ABuildingGameplayActorCampFire {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x9e0(0x08)
	struct USphereComponent* Sphere; // 0x9e8(0x08)
	struct UStaticMeshComponent* FirePitEmpty; // 0x9f0(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x9f8(0x08)
	struct UArrowComponent* FireLoc; // 0xa00(0x08)
	struct UStaticMeshComponent* Wood; // 0xa08(0x08)
	struct UStaticMeshComponent* Root; // 0xa10(0x08)
	struct AFortPawn* InteractingPawn; // 0xa18(0x08)
	bool BeenUsed; // 0xa20(0x01)
	char pad_A21[0x7]; // 0xa21(0x07)
	double DousedSmokeLife; // 0xa28(0x08)
	struct FScalableFloat Row_DousedSmokeLife; // 0xa30(0x28)
	bool HotfixedEnabled; // 0xa58(0x01)
	bool DestroyIfDisabled; // 0xa59(0x01)
	bool Destroyed; // 0xa5a(0x01)
	char pad_A5B[0x5]; // 0xa5b(0x05)
	struct FScalableFloat Row_HotfixEnabled; // 0xa60(0x28)
	struct FVector TraceOffset; // 0xa88(0x18)
	bool Season7Campfire; // 0xaa0(0x01)
	char pad_AA1[0x7]; // 0xaa1(0x07)
	struct FGameplayTagContainer CustomSpecialS7Tags; // 0xaa8(0x20)
	double SpecialS7FireTime; // 0xac8(0x08)
	struct FTimerHandle DousedSmokeWispTimer; // 0xad0(0x08)
	struct UParticleSystem* S7SuccessEmitter; // 0xad8(0x08)
	struct USoundBase* S7SuccessSound; // 0xae0(0x08)
	bool BlockInteraction; // 0xae8(0x01)
	char pad_AE9[0x3]; // 0xae9(0x03)
	int32_t LitRepBool; // 0xaec(0x04)
	struct FGameplayTag DousedCue; // 0xaf0(0x04)
	struct FGameplayTag DeathCue; // 0xaf4(0x04)
	struct FScalableFloat Row_Light_Cost; // 0xaf8(0x28)
	struct FText Text_Light; // 0xb20(0x18)
	struct FText Text_LightCost; // 0xb38(0x18)
	struct FText Text_LightCostNeedMore; // 0xb50(0x18)
	struct UFortWorldItemDefinition* Item_Wood; // 0xb68(0x08)
	bool Stoked; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	struct FGameplayTag StokedCue; // 0xb74(0x04)
	struct FScalableFloat Row_Stoke_Cost; // 0xb78(0x28)
	struct FScalableFloat Row_HotfixStokeEnabled; // 0xba0(0x28)
	struct FText Text_StokeCostNeedMore; // 0xbc8(0x18)
	bool HasBeenLit; // 0xbe0(0x01)
	char pad_BE1[0x7]; // 0xbe1(0x07)
	struct FScalableFloat Row_ReplaceCampfire; // 0xbe8(0x28)
	struct ABuildingActor* ActorToReplaceWith; // 0xc10(0x08)
	bool CurieActivated; // 0xc18(0x01)
	char pad_C19[0x7]; // 0xc19(0x07)
	struct FScalableFloat FloodLevel; // 0xc20(0x28)
	double FloodHeightPerLevel; // 0xc48(0x08)
	double OceanHeight; // 0xc50(0x08)
	struct TMap<struct AActor*, struct FCurieInteractHandle> InteractHandleMap; // 0xc58(0x50)
	struct FGameplayTag FireCue; // 0xca8(0x04)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct UMaterialInstanceDynamic* WoodBurningMatInstance; // 0xcb0(0x08)
	double FX_WoodBurnAmount; // 0xcb8(0x08)
	double FX_WoodBurnEmissive; // 0xcc0(0x08)
	struct FGameplayTagContainer TC_PlaylistNoRetriggerTags; // 0xcc8(0x20)
	bool PlaylistBlocksRetrigger; // 0xce8(0x01)
	bool IsLit; // 0xce9(0x01)

	void GetWoodComponent(struct UStaticMeshComponent*& WoodComponent); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetWoodComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLocationToSpawnFireVFX(struct FVector& WorldLocation); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetLocationToSpawnFireVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsStoked(bool& IsStoked); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.IsStoked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveItem(struct AFortPawn* FortPawn, struct UFortWorldItemDefinition* ItemDefinition, int32_t AmountToRemove); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RemoveItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetItemQuantity(struct AFortPawn* FortPawn, struct UFortWorldItemDefinition* ItemDefinition, int32_t& Quantity); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetItemQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CheckForRetriggerPlaylist(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckForRetriggerPlaylist // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisableIfBelowFlood(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.DisableIfBelowFlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldPlayNativeCurieFX(struct FGameplayTag FxTag, struct FFortNativeCurieFXResponse& OutResponse); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ShouldPlayNativeCurieFX // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void HasInfiniteResources(struct APawn* Pawn, bool& HasInfiniteResources); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HasInfiniteResources // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_Stoked(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Stoked // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	int32_t GetCostReActivate(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetCostReActivate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_LitRepBool(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Destroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckIfUserIsSpecialS7(struct AFortPawn* PawnWhoLitFire, bool& UserIsSpecial); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool RowToBool(struct FScalableFloat& Input); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetSheetValues(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Light(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GoOut(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Start(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBoundDestroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckDestroyDisabled(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpecialS7LightsFireAfterOut(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KillDouseSmokeWisp(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Server_QuestObjectiveUpdated(struct AFortPlayerController* Controller, struct UFortQuestItemDefinition* QuestDef, struct FName BackendName, int32_t CompletionCount, bool ObjectiveCompleted, bool QuestCompleted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCharacterVariantTransition(struct AFortPawn* TransitioningPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PayLightCost(struct AFortPawn* InteractingPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayLightCost // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PayStokeCost(struct AFortPawn* InteractingPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayStokeCost // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckReplaceCampfire(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckReplaceCampfire // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void EndFireInteract(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.EndFireInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementAttached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementAttached_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementDetached_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void CheckInitialOverlappingActors(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckInitialOverlappingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Begin_Wood_Burn_FX(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Begin_Wood_Burn_FX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32_t EntryPoint); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

