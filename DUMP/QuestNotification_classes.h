// WidgetBlueprintGeneratedClass QuestNotification.QuestNotification_C
// Size: 0x47a (Inherited: 0x380)
struct UQuestNotification_C : UFortNotificationEntry_Quest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* TurnInNotificationStandin; // 0x388(0x08)
	struct UWidgetAnimation* Outro; // 0x390(0x08)
	struct UWidgetAnimation* Intro; // 0x398(0x08)
	struct UWidgetAnimation* ResetQuestComplete; // 0x3a0(0x08)
	struct UWidgetAnimation* QuestComplete; // 0x3a8(0x08)
	struct UWidgetAnimation* FillProgress; // 0x3b0(0x08)
	struct UBorder* Border_TimerContainer; // 0x3b8(0x08)
	struct UCommonBorder* BorderXPBar; // 0x3c0(0x08)
	struct UImage* Check; // 0x3c8(0x08)
	struct UCommonBorder* CommonBorder_MainContent; // 0x3d0(0x08)
	struct UImage* GreenFill; // 0x3d8(0x08)
	struct UHorizontalBox* HorizontalBoxHotkeyPrompt; // 0x3e0(0x08)
	struct UImage* Image_Glow; // 0x3e8(0x08)
	struct UImage* Image_Spark; // 0x3f0(0x08)
	struct UKeybindWidget_C* KeybindWidget; // 0x3f8(0x08)
	struct UKeybindWidget_C* ; // 0x400(0x08)
	struct UOverlay* Overlay_Completiontext; // 0x408(0x08)
	struct UImage* ProgressFill; // 0x410(0x08)
	struct UImage* ProgressFill_Current; // 0x418(0x08)
	struct USizeBox* SizeBox_main; // 0x420(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_MobileClueText; // 0x428(0x08)
	struct UWidgetSwitcher* Switcher_TimeOrBar; // 0x430(0x08)
	struct UCommonRichTextBlock* Text_AssistBlock; // 0x438(0x08)
	struct UCommonTextBlock* Text_MapPrompt; // 0x440(0x08)
	struct UCommonTextBlock* Text_MobileCollectionPrompt; // 0x448(0x08)
	struct UCommonTextBlock* Text_TimeRemainingUrgent; // 0x450(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Complete; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Urgent; // 0x460(0x08)
	struct UMaterialInstanceDynamic* MID_MissionHeader; // 0x468(0x08)
	double In Width Override; // 0x470(0x08)
	enum class ESlateVisibility Flavor Text Visibility; // 0x478(0x01)
	bool bIsEndOfMatch; // 0x479(0x01)

	void UpdateProgress(); // Function QuestNotification.QuestNotification_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartNotificationIntro(); // Function QuestNotification.QuestNotification_C.StartNotificationIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StartNotificationOutro(); // Function QuestNotification.QuestNotification_C.StartNotificationOutro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function QuestNotification.QuestNotification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function QuestNotification.QuestNotification_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventFillComplete(); // Function QuestNotification.QuestNotification_C.EventFillComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventCompleteAnim(); // Function QuestNotification.QuestNotification_C.EventCompleteAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReset(); // Function QuestNotification.QuestNotification_C.EventReset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAssistData(bool bWasAssisted, struct FString OtherPlayersName); // Function QuestNotification.QuestNotification_C.SetAssistData // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTimerSet(enum class EAthenaChallengeTimerState TimerState); // Function QuestNotification.QuestNotification_C.BP_OnTimerSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventOnStartComplete(); // Function QuestNotification.QuestNotification_C.EventOnStartComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventOnIntroStart(); // Function QuestNotification.QuestNotification_C.EventOnIntroStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnInNotification(); // Function QuestNotification.QuestNotification_C.TurnInNotification // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnableCompleteFlavorText(bool IsEnabled); // Function QuestNotification.QuestNotification_C.OnEnableCompleteFlavorText // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayRushedNotificationIntro(float Rate); // Function QuestNotification.QuestNotification_C.OnPlayRushedNotificationIntro // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateNotificationBackground(bool bUseRarityContainer, bool bIsDailyPunchcardQuest); // Function QuestNotification.QuestNotification_C.OnUpdateNotificationBackground // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function QuestNotification.QuestNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__QuestNotification_Button_MobileClickCatcher_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function QuestNotification.QuestNotification_C.BndEvt__QuestNotification_Button_MobileClickCatcher_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HideBindWidgets(); // Function QuestNotification.QuestNotification_C.HideBindWidgets // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowBindWidgets(); // Function QuestNotification.QuestNotification_C.ShowBindWidgets // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_QuestNotification(int32_t EntryPoint); // Function QuestNotification.QuestNotification_C.ExecuteUbergraph_QuestNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

