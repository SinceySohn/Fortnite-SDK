// BlueprintGeneratedClass BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C
// Size: 0x370 (Inherited: 0x288)
struct ABP_Radish_FrontEndManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	bool PlayerInputAllowed; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName FrontendInputReason; // 0x29c(0x04)
	bool bHideUI; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct ALevelSequenceActor* TransitionSequence; // 0x2a8(0x08)
	struct FGameplayTagContainer HUDElement Tags; // 0x2b0(0x20)
	bool bLeavingMapCalled; // 0x2d0(0x01)
	bool bShouldHideUI; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TArray<struct AFortTeamMemberPedestal*> Member Pedestals; // 0x2d8(0x10)
	struct TArray<struct ATeamMemberPedestal_C*> PedestalLobby; // 0x2e8(0x10)
	bool bPedestalRefsInitialized; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TArray<struct UAnimMontage*> AnimArrayCMM; // 0x300(0x10)
	struct TArray<struct UAnimMontage*> AnimArrayCLM; // 0x310(0x10)
	struct TArray<struct UAnimMontage*> AnimArrayCMF; // 0x320(0x10)
	struct TArray<struct UAnimMontage*> AnimArrayCLF; // 0x330(0x10)
	bool bPlayPawnAnimationsOnTransition; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	double PawnAnimDelay; // 0x348(0x08)
	double UiHideDelay; // 0x350(0x08)
	bool bAllowManagerToAffectInput; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float CachedPreServerTransitionDelay; // 0x35c(0x04)
	double TransitionErrorTolerance; // 0x360(0x08)
	struct UFortUIStateWidget_ForcedPlaylist* ForcedPlaylistWidgetClassToCook; // 0x368(0x08)

	void LogTransitionInfo(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.LogTransitionInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSequenceDuration(double& Duration); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.GetSequenceDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void StopAllPawnAnimations(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.StopAllPawnAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetTransitionAnimation(struct AFortPlayerPawn* FortPlayerPawn, int32_t Index, struct UAnimMontage*& AnimMontage); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.GetTransitionAnimation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToOnMatchingConnected(bool bUnbind); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.BindToOnMatchingConnected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToMatchMakingComplete(bool bUnbind); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.BindToMatchMakingComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInputAllowed(bool bAllowInput); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.SetInputAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearFrontEndBindings(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ClearFrontEndBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetLocalInputAllowed(bool Allowed, struct FName Reason); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.SetLocalInputAllowed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_52E41E9E444664881D34F1BCBE6759E8(struct FName NotifyName); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnNotifyEnd_52E41E9E444664881D34F1BCBE6759E8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_52E41E9E444664881D34F1BCBE6759E8(struct FName NotifyName); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnNotifyBegin_52E41E9E444664881D34F1BCBE6759E8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_52E41E9E444664881D34F1BCBE6759E8(struct FName NotifyName); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnInterrupted_52E41E9E444664881D34F1BCBE6759E8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_52E41E9E444664881D34F1BCBE6759E8(struct FName NotifyName); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnBlendOut_52E41E9E444664881D34F1BCBE6759E8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_52E41E9E444664881D34F1BCBE6759E8(struct FName NotifyName); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnCompleted_52E41E9E444664881D34F1BCBE6759E8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMatchingConnected(float DelayLength); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnMatchingConnected // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMatchmakingCompleted(bool Success); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnMatchmakingCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLeavingMap(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.OnLeavingMap // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartTransition(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.StartTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideUserInterface(bool Hide, double DelayAfterTransitionStarts); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.HideUserInterface // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPedestalReferences(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.SetPedestalReferences // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayPawnTransitionAnims(bool bShouldPlay, double DelayAfterTransitionStarts); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.PlayPawnTransitionAnims // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopPawnAnimations(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.StopPawnAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowFrontendUI(); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ShowFrontendUI // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Radish_FrontEndManager(int32_t EntryPoint); // Function BP_Radish_FrontEndManager.BP_Radish_FrontEndManager_C.ExecuteUbergraph_BP_Radish_FrontEndManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

