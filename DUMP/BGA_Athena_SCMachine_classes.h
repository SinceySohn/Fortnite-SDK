// BlueprintGeneratedClass BGA_Athena_SCMachine.BGA_Athena_SCMachine_C
// Size: 0xec0 (Inherited: 0xb90)
struct ABGA_Athena_SCMachine_C : ABuildingGameplayActorSpawnMachine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb90(0x08)
	struct UMultiInteractActorComponent_C* MultiInteractActorComponent; // 0xb98(0x08)
	struct UAudioComponent* ActivateEndSound; // 0xba0(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicatorComponent; // 0xba8(0x08)
	struct UStaticMeshComponent* BlockingSkirt; // 0xbb0(0x08)
	struct UChildActorComponent* EdgeNavLinks2; // 0xbb8(0x08)
	struct UChildActorComponent* EdgeNavLinks; // 0xbc0(0x08)
	struct UAudioComponent* SC_Machine_Cooldown_Cue_End; // 0xbc8(0x08)
	struct UAudioComponent* SC_Machine_Cooldown_Cue; // 0xbd0(0x08)
	struct UParticleSystemComponent* P_SCMachine_HoloLogo; // 0xbd8(0x08)
	struct USpotLightComponent* HeadlightR; // 0xbe0(0x08)
	struct USpotLightComponent* HeadlightL; // 0xbe8(0x08)
	struct UParticleSystemComponent* P_SCMachine_PedestalGlow; // 0xbf0(0x08)
	struct UAudioComponent* ActivateSound; // 0xbf8(0x08)
	struct UAudioComponent* AmbientSound; // 0xc00(0x08)
	struct UCapsuleComponent* BlockingVolume; // 0xc08(0x08)
	struct UStaticMeshComponent* PadCollision; // 0xc10(0x08)
	struct UStaticMeshComponent* Van; // 0xc18(0x08)
	struct UBoxComponent* InteractionBox; // 0xc20(0x08)
	float LightFlash_LightBrightness_9296C3734D2838F5D5DD42912D8F0CBB; // 0xc28(0x04)
	enum class ETimelineDirection LightFlash__Direction_9296C3734D2838F5D5DD42912D8F0CBB; // 0xc2c(0x01)
	char pad_C2D[0x3]; // 0xc2d(0x03)
	struct UTimelineComponent* LightFlash; // 0xc30(0x08)
	struct FVector WarpVan_Scale_947A8C9647767577A408EC87E76820CB; // 0xc38(0x18)
	enum class ETimelineDirection WarpVan__Direction_947A8C9647767577A408EC87E76820CB; // 0xc50(0x01)
	char pad_C51[0x7]; // 0xc51(0x07)
	struct UTimelineComponent* WarpVan; // 0xc58(0x08)
	struct UParticleSystem* SpawnInParticle; // 0xc60(0x08)
	struct FVector SpawnInParticleOffset; // 0xc68(0x18)
	struct FVector MannequinTransitionOffset; // 0xc80(0x18)
	double FXDoneDelay; // 0xc98(0x08)
	struct TArray<struct AActor*> PawnsBehindVan; // 0xca0(0x10)
	struct FTimerHandle Timer_Cooldown; // 0xcb0(0x08)
	double FXDelayThenBotSpawn; // 0xcb8(0x08)
	int32_t VanState; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct UMaterialInstanceDynamic* ScreensMaterial; // 0xcc8(0x08)
	struct FScalableFloat Row_DestroyIfOff; // 0xcd0(0x28)
	double PlayRate; // 0xcf8(0x08)
	double XYKnockAmountPlayer; // 0xd00(0x08)
	double ZKnockAmountPlayer; // 0xd08(0x08)
	struct USoundBase* DefaultAmbientAudio; // 0xd10(0x08)
	struct USoundBase* CooldownAmbientAudio; // 0xd18(0x08)
	double DelayBeforeCooldown; // 0xd20(0x08)
	struct FScalableFloat Row_RespawnTime; // 0xd28(0x28)
	struct FScalableFloat Row_InteractTime; // 0xd50(0x28)
	bool RepServerInteract; // 0xd78(0x01)
	char pad_D79[0x7]; // 0xd79(0x07)
	struct UFortWorldItemDefinition* WeaponToGive; // 0xd80(0x08)
	struct UFortWorldItemDefinition* MatsToGive; // 0xd88(0x08)
	int32_t MatNumberToGive; // 0xd90(0x04)
	int32_t AmmoNumberToGive; // 0xd94(0x04)
	struct FText FailedTextNoCard; // 0xd98(0x18)
	struct UFortWorldItemDefinition* AmmoToGive; // 0xdb0(0x08)
	struct FText FailedTextRecharging; // 0xdb8(0x18)
	struct FText FailedTextRebooting; // 0xdd0(0x18)
	struct FText PassedText; // 0xde8(0x18)
	struct UMaterialInstanceDynamic* VanBodyMaterial; // 0xe00(0x08)
	double HeadlightIntensity; // 0xe08(0x08)
	bool Did Horn Play?; // 0xe10(0x01)
	char pad_E11[0x7]; // 0xe11(0x07)
	struct TArray<struct AFortPlayerControllerAthena*> PlayersInteracting; // 0xe18(0x10)
	struct FName GrantedItemsLootTier; // 0xe28(0x04)
	char pad_E2C[0x4]; // 0xe2c(0x04)
	double HeightCheckForSkydive; // 0xe30(0x08)
	double ZKnockAmountVehicle; // 0xe38(0x08)
	double XYKnockAmountVehicle; // 0xe40(0x08)
	double InvincibleVisualsDuration; // 0xe48(0x08)
	struct FGameplayTag ActiveCue; // 0xe50(0x04)
	struct FGameplayTag EndCue; // 0xe54(0x04)
	struct FGameplayTag TransitionCue; // 0xe58(0x04)
	struct FGameplayTag ActivateCue; // 0xe5c(0x04)
	double DelayBeforeSkydiveCheck; // 0xe60(0x08)
	struct FGameplayTag SCMachine Respawn Cue; // 0xe68(0x04)
	bool RepDisabledState; // 0xe6c(0x01)
	char pad_E6D[0x3]; // 0xe6d(0x03)
	struct FScalableFloat Row_EnabledInWorld; // 0xe70(0x28)
	struct UMaterialInterface* StaticScreen_Material; // 0xe98(0x08)
	int32_t ScreenMaterialIndex; // 0xea0(0x04)
	struct FName Van Emissive Parameter; // 0xea4(0x04)
	bool UseRiftSpawn; // 0xea8(0x01)
	char pad_EA9[0x7]; // 0xea9(0x07)
	struct USoundBase* HornAlertAudio; // 0xeb0(0x08)
	struct AFortPlayerPawn* RebootedPlayer; // 0xeb8(0x08)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_RepDisabledState(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepDisabledState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KnockVehicles(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockVehicles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GiveWeaponsAndResources(struct AFortPlayerController* FortPC); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.GiveWeaponsAndResources // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckQuestCredit(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CheckQuestCredit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnRep_RepServerInteract(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepServerInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateScreen(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UpdateScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KnockPlayerPawns(struct AActor* IgnoreKnock); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockPlayerPawns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WarpVan__FinishedFunc(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void WarpVan__UpdateFunc(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void LightFlash__FinishedFunc(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void LightFlash__UpdateFunc(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnReady_10047ADE486AD610434BFBB28224F10F(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnReady_10047ADE486AD610434BFBB28224F10F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerPawnResurrected(struct AFortPlayerPawn* PlayerPawn); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnResurrectionStarted(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnResurrectionCompleted(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleAmbientSound(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleAmbientSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void TriggerRespawnFX(struct AFortPawn* PhaseInPawn); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.TriggerRespawnFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginLongUse(struct AFortPlayerControllerAthena* AthenaPC); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnBeginLongUse // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInterruptLongUse(struct AFortPlayerControllerAthena* AthenaPC); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnInterruptLongUse // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnMachineStateChanged(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnSpawnMachineStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ToggleHologram(bool TurnOn); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ToggleHologram // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CooldownTimer(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CooldownTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Horn Sound(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Play Horn Sound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartCoolDown(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCoolDown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Cooldown Sound(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Update Cooldown Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SkydiveIfAirborne(struct AFortPlayerPawn* Player); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SkydiveIfAirborne // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisabledState(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.DisabledState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InteactComplete(struct AFortPawn* InteractingPawn); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.InteactComplete // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnRift(struct AFortPawn* InFortPawn); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SpawnRift // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Rift(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Reset Rift // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Activate Sound Timer(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Start Activate Sound Timer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleActorCountChanged(int32_t InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleActorCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_SCMachine(int32_t EntryPoint); // Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ExecuteUbergraph_BGA_Athena_SCMachine // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

