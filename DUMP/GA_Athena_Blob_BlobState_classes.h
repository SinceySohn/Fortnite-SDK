// BlueprintGeneratedClass GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C
// Size: 0xe79 (Inherited: 0xb40)
struct UGA_Athena_Blob_BlobState_C : UBlobGameplayAbility_Keybind {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb40(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xb48(0x08)
	bool RemoveGrantedByEffectOnAbilityEnd; // 0xb50(0x01)
	char pad_B51[0x7]; // 0xb51(0x07)
	struct ABuildingGameplayActor* BGAToSpawn; // 0xb58(0x08)
	struct UFortWorldItemDefinition* GrantedItemInBlobState; // 0xb60(0x08)
	struct FGuid GrantedGUIDInBlobState; // 0xb68(0x10)
	bool HidePawnWhileActive; // 0xb78(0x01)
	char pad_B79[0x3]; // 0xb79(0x03)
	struct FGameplayTag Tag_PawnHidden; // 0xb7c(0x04)
	bool ForceCancelBuildingTool; // 0xb80(0x01)
	bool ForceRemoveBalloons; // 0xb81(0x01)
	char pad_B82[0x2]; // 0xb82(0x02)
	struct FGameplayTag EventTag_RemoveBalloons; // 0xb84(0x04)
	bool ForceDropHeldObjects; // 0xb88(0x01)
	bool ForceUnCrouch; // 0xb89(0x01)
	char pad_B8A[0x6]; // 0xb8a(0x06)
	struct ABuildingGameplayActor* SpawnedBGA; // 0xb90(0x08)
	struct UFortCameraMode* CameraMode_BlobState; // 0xb98(0x08)
	struct USoundMix* SoundMixModifier; // 0xba0(0x08)
	struct FGameplayTag Tag_ElementalInteractionsToDisable; // 0xba8(0x04)
	char pad_BAC[0x4]; // 0xbac(0x04)
	double PrevAITargetingZOffset; // 0xbb0(0x08)
	double AITargetingZOffset; // 0xbb8(0x08)
	struct FGameplayTag EventTag_BlobStateBegin; // 0xbc0(0x04)
	struct FGameplayTag EventTag_BlobStateEnd; // 0xbc4(0x04)
	struct FGameplayTag EventTag_BlobStateFailedToActivate; // 0xbc8(0x04)
	struct FGameplayTag GC_InBlobState; // 0xbcc(0x04)
	struct FScalableFloat Row_PawnCapsule_NewRadiusMultiplier; // 0xbd0(0x28)
	struct FScalableFloat Row_PawnCapsule_NewHalfHeightMultiplier; // 0xbf8(0x28)
	bool ForceExitBlobWhenSkydiving; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	struct FGameplayTag EventTag_RemoveBlobState; // 0xc24(0x04)
	struct FGameplayTag EventTag_RemovePossessedProp; // 0xc28(0x04)
	struct FGameplayTag Tag_RemoveBlobState; // 0xc2c(0x04)
	struct FGameplayTag EventTag_Died; // 0xc30(0x04)
	struct FGameplayTag EventTag_HidingProp_Interact; // 0xc34(0x04)
	struct FGameplayTag EventTag_HidingProp_LandedOn; // 0xc38(0x04)
	struct FGameplayTag Tag_DBNO; // 0xc3c(0x04)
	struct FGameplayTag Tag_Underwater; // 0xc40(0x04)
	bool ForceExitBlobWhenDied; // 0xc44(0x01)
	bool ForceExitBlobWhenDBNO; // 0xc45(0x01)
	bool ForceExitBlobWhenUnderwater; // 0xc46(0x01)
	char pad_C47[0x1]; // 0xc47(0x01)
	struct USkeletalMeshComponent* CachedPlayerSkeletalMeshComponent; // 0xc48(0x08)
	bool HolsterWeaponWhileActive; // 0xc50(0x01)
	char pad_C51[0x3]; // 0xc51(0x03)
	struct FName Holster Id; // 0xc54(0x04)
	float DefaultMeshHeightAdjust; // 0xc58(0x04)
	char pad_C5C[0x4]; // 0xc5c(0x04)
	double ClampedCapsuleHalfHeightMultiplier; // 0xc60(0x08)
	double MeshHeightAdjust; // 0xc68(0x08)
	struct FScalableFloat Row_AdditionalMeshHeightAdjust; // 0xc70(0x28)
	bool ForceExitBlobInVehicle; // 0xc98(0x01)
	char pad_C99[0x3]; // 0xc99(0x03)
	struct FGameplayTag Tag_InVehicle; // 0xc9c(0x04)
	struct FGameplayTag Tag_InValet; // 0xca0(0x04)
	bool ForceExitBlobInTurret; // 0xca4(0x01)
	char pad_CA5[0x3]; // 0xca5(0x03)
	struct FGameplayTag Tag_InTurret; // 0xca8(0x04)
	bool ForceExitBlobInHidingProp; // 0xcac(0x01)
	bool SkipPlacementCheck; // 0xcad(0x01)
	char pad_CAE[0x2]; // 0xcae(0x02)
	struct FGameplayTagContainer Tags_PreventEnterBlobMode; // 0xcb0(0x20)
	struct FGameplayTagContainer Tags_RequiredToEnterBlobMode; // 0xcd0(0x20)
	struct FGameplayTagContainer Tags_OnFailedToActivateRemoveActiveEffectWithGrantedTags; // 0xcf0(0x20)
	struct FGameplayTag ResumeCrouchTag; // 0xd10(0x04)
	char pad_D14[0x4]; // 0xd14(0x04)
	struct FGameplayTagContainer QuestTag_BlobState_Entered; // 0xd18(0x20)
	struct FGameplayTagContainer QuestTag_BlobState_Exited; // 0xd38(0x20)
	struct FFortGameplayAbilityMontageInfo OverrideSearchMontageInfo; // 0xd58(0x58)
	struct FFortGameplayAbilityMontageInfo CachedOverrideSearchMontageInfo; // 0xdb0(0x58)
	struct FGameplayAbilityActorInfo ActorInfo_FailedActivate; // 0xe08(0x48)
	bool ShouldApplyMeshSetting; // 0xe50(0x01)
	char pad_E51[0x7]; // 0xe51(0x07)
	struct UAnimInstance* Blob Anim Instance; // 0xe58(0x08)
	struct USkeletalMesh* Blob Skeletal Mesh; // 0xe60(0x08)
	struct TArray<struct UMaterialInterface*> Blob Mesh Materials; // 0xe68(0x10)
	bool ForceRemovePossessedProp; // 0xe78(0x01)

	void GetValidController(bool& IsValid, struct AFortPlayerController*& PlayerController, struct AAIController*& AIController, bool& isPlayer); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.GetValidController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CanActivateAbility_PostActivate(bool& CanActivate); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.CanActivateAbility_PostActivate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetPlayerPawnInventoryOwnerInterface(struct TScriptInterface<IFortInventoryOwnerInterface>& InventoryOwnerInterface, bool& IsValid); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.GetPlayerPawnInventoryOwnerInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FTransform GetCustomAbilitySourceTransform(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.GetCustomAbilitySourceTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void EventReceived_10215124446B1B436F5656915A42F889(struct FGameplayEventData Payload); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.EventReceived_10215124446B1B436F5656915A42F889 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_5253F5E44BC061DF37F6F88C3DE8A42B(struct FGameplayEventData Payload); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.EventReceived_5253F5E44BC061DF37F6F88C3DE8A42B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_A506632D4F91BC0831CCE7ADA1D8E20A(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_A506632D4F91BC0831CCE7ADA1D8E20A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_A27540974AFED767A17A94B3B0F1662F(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_A27540974AFED767A17A94B3B0F1662F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_97F692924AD8A9E894417D87681C3884(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_97F692924AD8A9E894417D87681C3884 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_4D172AC048F5815F827DFFB26542A5CA(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_4D172AC048F5815F827DFFB26542A5CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_0D7B11024E1B0DA87F163F97C186A4F3(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_0D7B11024E1B0DA87F163F97C186A4F3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_549A4CBD4B7EE0FCC97B7D9516E4DA28(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.Added_549A4CBD4B7EE0FCC97B7D9516E4DA28 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_123B99F542DA0F10435AFA9274627A9C(struct FGameplayEventData Payload); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.EventReceived_123B99F542DA0F10435AFA9274627A9C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_CADC588B4A991790D2E255AF0D2F9DCE(struct FGameplayEventData Payload); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.EventReceived_CADC588B4A991790D2E255AF0D2F9DCE // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnAndAttachBGA(ServerOnly)(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SpawnAndAttachBGA(ServerOnly) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KillAndHideBGA(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.KillAndHideBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BGADied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.BGADied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetPawnScale(bool SetToNewScale); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetPawnScale // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCameraModeEnabled(bool Enabled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetCameraModeEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSoundMixModifierEnabled(bool Enabled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetSoundMixModifierEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetElementalAttachmentDisabled(bool Disabled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetElementalAttachmentDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAIZtargetingModifierEnabled(bool Enabled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetAIZtargetingModifierEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BGASpawnedAndAttached(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.BGASpawnedAndAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleRemovalConditions(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.HandleRemovalConditions // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginSkydiving(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.OnBeginSkydiving // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPawnHidden(bool NewHidden); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetPawnHidden // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GivePawnInventoryItem(bool GiveItem); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.GivePawnInventoryItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWeaponHolstered(bool SetHolstered); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetWeaponHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropHeldObject(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.DropHeldObject // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInteractMontageInfoOverrideEnabled(bool Enabled); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetInteractMontageInfoOverrideEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CannotActivatePostActivate(); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.CannotActivatePostActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBlobMeshSetting(bool bUseBlobMeshSetting); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.SetBlobMeshSetting // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Blob_BlobState(int32_t EntryPoint); // Function GA_Athena_Blob_BlobState.GA_Athena_Blob_BlobState_C.ExecuteUbergraph_GA_Athena_Blob_BlobState // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

