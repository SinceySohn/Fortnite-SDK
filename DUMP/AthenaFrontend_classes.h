// WidgetBlueprintGeneratedClass AthenaFrontend.AthenaFrontend_C
// Size: 0x9b0 (Inherited: 0x908)
struct UAthenaFrontend_C : UAthenaUIStateWidget_Frontend {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x908(0x08)
	struct UAthenaFPS_C* AthenaFPS; // 0x910(0x08)
	struct UAthenaTemperature_C* AthenaTemperature; // 0x918(0x08)
	struct UBuildWatermark_C* BuildWatermark; // 0x920(0x08)
	struct UButton* Button_PTT; // 0x928(0x08)
	struct UCommonTextBlock* CommonTextBlock_FrontendFlowDebug; // 0x930(0x08)
	struct UContentOnDemand_C* ContentOnDemand; // 0x938(0x08)
	struct UFortVoiceChannelSpeakerContainer_C* FortVoiceChannelSpeakerContainer; // 0x940(0x08)
	struct UFrontendEventNotifications_C* FrontendEventNotifications; // 0x948(0x08)
	struct UImage* PTT_Image; // 0x950(0x08)
	struct USafeZone* ; // 0x958(0x08)
	struct USafeZone* SafeZone_Bottom; // 0x960(0x08)
	struct USizeBox* SizeBoxPTT; // 0x968(0x08)
	bool StartedPlayingVideo; // 0x970(0x01)
	char pad_971[0x3]; // 0x971(0x03)
	int32_t TransitionIndex; // 0x974(0x04)
	struct TArray<struct FS12_CineTransitionData> TransitionAudioData; // 0x978(0x10)
	struct UMediaPlayer* MovieMediaPlayer; // 0x988(0x08)
	struct USoundBase* TransitionSound01; // 0x990(0x08)
	struct USoundBase* TransitionSound02; // 0x998(0x08)
	struct TArray<struct FTimerHandle> AudioTimerHandles; // 0x9a0(0x10)

	void OnTrailerMediaEnded(); // Function AthenaFrontend.AthenaFrontend_C.OnTrailerMediaEnded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTrailerMediaOpened(struct FString OpenedURL); // Function AthenaFrontend.AthenaFrontend_C.OnTrailerMediaOpened // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTrailerTransitionAudioCheck(); // Function AthenaFrontend.AthenaFrontend_C.OnTrailerTransitionAudioCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayTrailer(); // Function AthenaFrontend.AthenaFrontend_C.PlayTrailer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitChatVisibilityButton(); // Function AthenaFrontend.AthenaFrontend_C.InitChatVisibilityButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatePttVisibility(enum class EPTTState PTTState); // Function AthenaFrontend.AthenaFrontend_C.UpdatePttVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetOverlayTitleBarVisibility(bool Visible); // Function AthenaFrontend.AthenaFrontend_C.SetOverlayTitleBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetChatWidgetVisibility(bool Visible); // Function AthenaFrontend.AthenaFrontend_C.SetChatWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(struct UCommonButtonLegacy* Button, bool Selected); // Function AthenaFrontend.AthenaFrontend_C.BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void On Can PTT(); // Function AthenaFrontend.AthenaFrontend_C.On Can PTT // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaFrontend.AthenaFrontend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function AthenaFrontend.AthenaFrontend_C.BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnSetFrontendVisibilityMode(enum class EFrontendVisibilityMode InFrontendVisibilityMode); // Function AthenaFrontend.AthenaFrontend_C.OnSetFrontendVisibilityMode // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StartTrailerTransitionAudioCheck(struct UMediaPlayer* MediaPlayer); // Function AthenaFrontend.AthenaFrontend_C.StartTrailerTransitionAudioCheck // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StopTrailerTransitionAudioCheck(); // Function AthenaFrontend.AthenaFrontend_C.StopTrailerTransitionAudioCheck // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DisplayDebugFlowText(struct FText& DebugFlowText); // Function AthenaFrontend.AthenaFrontend_C.DisplayDebugFlowText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HideDebugFlowText(); // Function AthenaFrontend.AthenaFrontend_C.HideDebugFlowText // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaFrontend(int32_t EntryPoint); // Function AthenaFrontend.AthenaFrontend_C.ExecuteUbergraph_AthenaFrontend // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

