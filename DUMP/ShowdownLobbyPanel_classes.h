// WidgetBlueprintGeneratedClass ShowdownLobbyPanel.ShowdownLobbyPanel_C
// Size: 0x8ed (Inherited: 0x768)
struct UShowdownLobbyPanel_C : UFortTournamentLobbyPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* EventButtonHover; // 0x770(0x08)
	struct UWidgetAnimation* Intro; // 0x778(0x08)
	struct UBorder* BorderTimeRemaining; // 0x780(0x08)
	struct UCommonWidgetSwitcherLegacy* CentralContentSwitcher; // 0x788(0x08)
	struct UCommonBorder* CommonBorderPinContainer; // 0x790(0x08)
	struct UCommonTextBlock* CommonTextBlock_EarnAPin; // 0x798(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Score; // 0x7a0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TournamentWarnings; // 0x7a8(0x08)
	struct UScaleBox* Content_ScheduledTime; // 0x7b0(0x08)
	struct UScaleBox* Content_TimeRemaining; // 0x7b8(0x08)
	struct UVerticalBox* EarnPinContent; // 0x7c0(0x08)
	struct UOverlay* EarnPinMessage; // 0x7c8(0x08)
	struct UCommonTextBlock* EarnPinScoreText; // 0x7d0(0x08)
	struct UCommonTextBlock* HighestScoreTeammatesText; // 0x7d8(0x08)
	struct UCommonTextBlock* HighestScoreText; // 0x7e0(0x08)
	struct UHorizontalBox* HorizontalBox_SpecialScore; // 0x7e8(0x08)
	struct UImage* Image; // 0x7f0(0x08)
	struct UImage* ; // 0x7f8(0x08)
	struct UImage* Image_DetailsButtonBG; // 0x800(0x08)
	struct UImage* Image_ErrorBG; // 0x808(0x08)
	struct UImage* Image_PanelBorder; // 0x810(0x08)
	struct UCommonTextBlock* MFA_WarningText; // 0x818(0x08)
	struct UOverlay* NoMessage; // 0x820(0x08)
	struct UScaleBox* ScaleBox_DetailsText; // 0x828(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x830(0x08)
	struct UShowdownPin_C* ShowdownPin_SpecialScore; // 0x838(0x08)
	struct USizeBox* SizeBox_HighestScore; // 0x840(0x08)
	struct USizeBox* SizeBoxTournamentTitle; // 0x848(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_ScoreInfo; // 0x850(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_TimeInfo; // 0x858(0x08)
	struct UCommonTextBlock* Text_CrossplayWarning; // 0x860(0x08)
	struct UCommonTextBlock* Text_DetailsButton; // 0x868(0x08)
	struct UCommonTextBlock* Text_MatchCapWarning; // 0x870(0x08)
	struct UCommonTextBlock* Text_Remaining; // 0x878(0x08)
	struct UCommonTextBlock* Text_ScheduledMMInfo; // 0x880(0x08)
	struct UFortLazyImage* TournamentLogo; // 0x888(0x08)
	struct UCommonTextBlock* TournamentTitle; // 0x890(0x08)
	struct UCommonTextBlock* TournamentTitle2; // 0x898(0x08)
	struct UVerticalBox* VerticalBox_PanelContent; // 0x8a0(0x08)
	struct UOverlay* WarningMessage; // 0x8a8(0x08)
	struct FSlateColor PrimaryColor; // 0x8b0(0x14)
	struct FSlateColor ShadowColor; // 0x8c4(0x14)
	struct FSlateColor HighlightColor; // 0x8d8(0x14)
	bool DEVhasBranding; // 0x8ec(0x01)

	void InputTypeChanged(bool isGamepad); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.InputTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCrossplayChanged(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.HandleCrossplayChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColors(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.UpdateColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refresh(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BrandingToggle(bool hasBranding); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BrandingToggle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventSwitchUI(enum class ECommonInputType bNewInputType); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventSwitchUI // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownLobbyPanel(int32_t EntryPoint); // Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.ExecuteUbergraph_ShowdownLobbyPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

