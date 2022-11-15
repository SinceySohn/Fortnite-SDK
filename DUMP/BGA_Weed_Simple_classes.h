// BlueprintGeneratedClass BGA_Weed_Simple.BGA_Weed_Simple_C
// Size: 0xb6a (Inherited: 0x9d8)
struct ABGA_Weed_Simple_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x9e8(0x08)
	struct AB_SMA_Athena_RealitySapling_Parent_C* Sapling; // 0x9f0(0x08)
	struct USoundBase* WeedPulledSound; // 0x9f8(0x08)
	double LerpTimerInterval; // 0xa00(0x08)
	bool HasReachedDestScale; // 0xa08(0x01)
	char pad_A09[0x7]; // 0xa09(0x07)
	struct FTimerHandle LerpTimerHandle; // 0xa10(0x08)
	double Cur Min World Scale; // 0xa18(0x08)
	double Cur Max World Scale; // 0xa20(0x08)
	double Curr World Scale; // 0xa28(0x08)
	double Scale Interp Speed; // 0xa30(0x08)
	double Start World Scale; // 0xa38(0x08)
	double Dest World Scale; // 0xa40(0x08)
	bool ScaleOutAndDie; // 0xa48(0x01)
	char pad_A49[0x7]; // 0xa49(0x07)
	struct FHitResult FloorHit; // 0xa50(0xe0)
	struct AFortPlayerController* Owning Player Controller Repped; // 0xb30(0x08)
	struct FScalableFloat EnabledForAllPlayers; // 0xb38(0x28)
	bool PlaylistDataReady; // 0xb60(0x01)
	char pad_B61[0x3]; // 0xb61(0x03)
	int32_t AllPlayersCanSeeAndInteractState; // 0xb64(0x04)
	bool bAvailableLocally; // 0xb68(0x01)
	bool pastFirstDelay; // 0xb69(0x01)

	void OnRep_AllPlayersCanSeeAndInteractState(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnRep_AllPlayersCanSeeAndInteractState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Initialize From Local Player Controller And Determine Enabled for Local Player(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Initialize From Local Player Controller And Determine Enabled for Local Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Initialize All Players Can Interact And See State(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Initialize All Players Can Interact And See State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Owning Player Controller Repped(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnRep_Owning Player Controller Repped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Sapling(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnRep_Sapling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Weed Scale(double SizeAlpha); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Set Weed Scale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destroy(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddWeedToSapling(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.AddWeedToSapling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool OnInteractAllowedToConsume(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnInteractAllowedToConsume // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_095E1208417ABF174C7FF3BC2E8F3C2F(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnReady_095E1208417ABF174C7FF3BC2E8F3C2F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DestroyWeed(struct AFortPawn* NewParam); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.DestroyWeed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateLerpToDest(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.UpdateLerpToDest // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Scale Out and Die(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Scale Out and Die // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Bind To Supporting Actor Destroyed(); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Bind To Supporting Actor Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Base Destroyed(struct AActor* DestroyedActor); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Base Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Base Died(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.Base Died // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Weed_Simple(int32_t EntryPoint); // Function BGA_Weed_Simple.BGA_Weed_Simple_C.ExecuteUbergraph_BGA_Weed_Simple // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

