// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// Size: 0x4958 (Inherited: 0x4890)
struct AAthena_PlayerController_C : AFortPlayerControllerAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4890(0x08)
	struct UUnderwaterAudioComponent_C* UnderwaterAudioComponent; // 0x4898(0x08)
	struct USceneComponent* ListenerOverride; // 0x48a0(0x08)
	struct UAudioComponent* VictoryRoyaleAudio; // 0x48a8(0x08)
	struct UAudioComponent* VictoryRoyaleMusic1; // 0x48b0(0x08)
	struct USoundBase* CurrentMusic; // 0x48b8(0x08)
	struct FGameplayTagContainer BladeWielderTag; // 0x48c0(0x20)
	enum class EFortItemType InteractingItemType; // 0x48e0(0x01)
	char pad_48E1[0x7]; // 0x48e1(0x07)
	struct FGameplayTagContainer InteractionTags; // 0x48e8(0x20)
	struct FMulticastInlineDelegate PawnPossessedDispatcher; // 0x4908(0x10)
	struct FTimerHandle PermissionsRecheckTimerHandle; // 0x4918(0x08)
	struct USoundMix* CamUnderwaterSoundMix; // 0x4920(0x08)
	struct USoundBase* CamUnderwaterLoopSound; // 0x4928(0x08)
	struct UAudioComponent* CamUnderwaterAudio; // 0x4930(0x08)
	struct USoundBase* CamUnderwaterStartSound; // 0x4938(0x08)
	struct USoundBase* CamUnderwaterStopSound; // 0x4940(0x08)
	struct UAudioComponent* VictoryRoyaleMusic2; // 0x4948(0x08)
	double LobbyMusicOnVictoryDelayTime_Default; // 0x4950(0x08)

	void FadeAudioComponents(struct UAudioComponent* NewMusicComponent, struct UAudioComponent* PreviousMusicComponent, struct USoundBase* Music, double StartTime); // Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Is Creative Mode(); // Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupPermissionRecheckTimer(); // Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(struct UObject* Loaded); // Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMusicPackLoaded(struct UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GrantItem(struct TSoftObjectPtr<UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.GrantItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevokeItem(struct TSoftObjectPtr<UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLocalInteraction(struct AActor* ReceivingActor); // Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void RemoveItem(); // Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Victory Royale Music(); // Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReactToPawnPossession(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReplicateRotationScaleReset(); // Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnLeaveVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEnterVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Handle Victory Royale Audio(bool Audio Only); // Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayWinEffects(struct APawn* FinisherPawn, struct UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly); // Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayVictoryStinger(struct USoundCue* VictoryStingerCue); // Function Athena_PlayerController.Athena_PlayerController_C.PlayVictoryStinger // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_PlayerController(int32_t EntryPoint); // Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void PawnPossessedDispatcher__DelegateSignature(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

