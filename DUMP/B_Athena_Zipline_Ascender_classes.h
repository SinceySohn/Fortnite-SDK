// BlueprintGeneratedClass B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
// Size: 0x1168 (Inherited: 0xfb8)
struct AB_Athena_Zipline_Ascender_C : AFortAscenderZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xfc0(0x08)
	struct UCapsuleComponent* Capsule; // 0xfc8(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xfd0(0x08)
	struct UStaticMeshComponent* Ascender_End_Cap; // 0xfd8(0x08)
	struct UAudioComponent* PoleMotorSFX; // 0xfe0(0x08)
	struct UNiagaraComponent* HandleVFX; // 0xfe8(0x08)
	struct UNiagaraComponent* PoleMotorVFX; // 0xff0(0x08)
	struct UAudioComponent* HandleAscendingSFX; // 0xff8(0x08)
	struct UAudioComponent* HandleDescendingSFX; // 0x1000(0x08)
	struct USphereComponent* HandleInteractVolume; // 0x1008(0x08)
	struct UStaticMeshComponent* Handle; // 0x1010(0x08)
	struct UStaticMeshComponent* Top; // 0x1018(0x08)
	struct FScalableFloat Hotfix; // 0x1020(0x28)
	struct USoundBase* StartHandleSound; // 0x1048(0x08)
	struct USoundBase* StopHandleSound; // 0x1050(0x08)
	struct USoundBase* StopPoleMotorSoundSkid; // 0x1058(0x08)
	struct UMaterialInterface* SplineMeshMaterialOverride; // 0x1060(0x08)
	struct UNiagaraSystem* AscendingHandleVFX; // 0x1068(0x08)
	struct UNiagaraSystem* DescendingHandleVFX; // 0x1070(0x08)
	struct UMaterialInterface* SplineThickenMeshMaterialOverride; // 0x1078(0x08)
	double MaxWobbleAnimationLength; // 0x1080(0x08)
	double LastWobbleActivationTime; // 0x1088(0x08)
	double TilingDivisor; // 0x1090(0x08)
	struct FVector HandleAnimOffset; // 0x1098(0x18)
	struct FVector SlideAnimOffset; // 0x10b0(0x18)
	struct USoundBase* PlayerGrabBeginDecentSound; // 0x10c8(0x08)
	struct UAudioComponent* HandleStart; // 0x10d0(0x08)
	struct FVector EndCapRelativeScale; // 0x10d8(0x18)
	struct UGameplayEffect* StructureDamageGE; // 0x10f0(0x08)
	struct FTimerHandle AudioVisualizerHandle; // 0x10f8(0x08)
	struct TArray<struct AFortPlayerPawn*> PlayersOnAscender; // 0x1100(0x10)
	struct USoundBase* TravelSound; // 0x1110(0x08)
	bool ShouldPlayWhoosh; // 0x1118(0x01)
	char pad_1119[0x7]; // 0x1119(0x07)
	struct USoundBase* AscendWhooshSound; // 0x1120(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x1128(0x08)
	struct FTimerHandle WhooshHandle; // 0x1130(0x08)
	struct FGameplayTag LinkToDestroyedGC; // 0x1138(0x04)
	char pad_113C[0x4]; // 0x113c(0x04)
	struct FScalableFloat DesctructibleHotfix; // 0x1140(0x28)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool CanBeginZiplining(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void LocalOnFailedInteract(struct AFortPlayerPawn* InteractingPawn); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetBoundsComponents(struct AActor* SelfActor, struct TArray<struct USceneComponent*>& OutComponents); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void ApplyStructureDamage(struct ABuildingSMActor* BuildingActor, struct AActor* DamageSource); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void AttachCapToEndOfSplineMesh(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool AttemptOverrideZiplineSocketOffset(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent, struct FVector& BaseSocketOffset, struct FVector& OutSocketOffset); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void CalculateLaunchVelocity(struct AActor* PlayerPawn, struct FVector& LaunchVelocity); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetCableTilingBySplineLength(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateCableWobble(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateCableWobble(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HotfixEnabled(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UPrimitiveComponent* GetTopComponent(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct UPrimitiveComponent* GetHandleComponent(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct UPrimitiveComponent* GetInteractComponentOverride(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool PawnIsInHandleRange(struct AFortPawn* Pawn); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	int32_t GetLastSplinePointIndex(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_93837FC44A18F6AE57D3478CC43A98AB(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_HandlePlayerStartedUsingHandle(struct AFortPlayerPawn* Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandlePlayerStoppedUsingHandle(struct AFortPlayerPawn* Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStartedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStartedLoweringHandle(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStoppedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleStoppedLoweringHandle(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnZipliningStarted(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlayerDescendingStarted(struct AFortPlayerPawn* Sliding Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleUpdatedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnZipliningStopped(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShouldPlayWhooshTimer(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_Athena_Zipline_Ascender_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BndEvt__B_Athena_Zipline_Ascender_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnAscenderSetupComplete_Event(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32_t EntryPoint); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

