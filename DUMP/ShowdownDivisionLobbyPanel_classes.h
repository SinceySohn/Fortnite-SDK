// WidgetBlueprintGeneratedClass ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C
// Size: 0x89c (Inherited: 0x750)
struct UShowdownDivisionLobbyPanel_C : UFortDivisionLobbyPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x08)
	struct UWidgetAnimation* EventButtonHover; // 0x758(0x08)
	struct UWidgetAnimation* Intro; // 0x760(0x08)
	struct UProgressBar* Bar_DivisionProgress; // 0x768(0x08)
	struct UBorder* BorderTimeRemaining; // 0x770(0x08)
	struct UCommonWidgetSwitcherLegacy* CentralContentSwitcher; // 0x778(0x08)
	struct UCommonTextBlock* ; // 0x780(0x08)
	struct UCommonTextBlock* CommonTextBlock_EarnAPin; // 0x788(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TournamentWarnings; // 0x790(0x08)
	struct UVerticalBox* EarnPinContent; // 0x798(0x08)
	struct UOverlay* EarnPinMessage; // 0x7a0(0x08)
	struct UHorizontalBox* HorizontalBox_DivisionProgress; // 0x7a8(0x08)
	struct UHorizontalBox* HorizontalBoxJustHYpe; // 0x7b0(0x08)
	struct UImage* HypeIcon; // 0x7b8(0x08)
	struct UImage* ; // 0x7c0(0x08)
	struct UImage* ; // 0x7c8(0x08)
	struct UImage* Image_DetailsButtonBG; // 0x7d0(0x08)
	struct UImage* Image_ErrorBG; // 0x7d8(0x08)
	struct UImage* Image_PanelBG; // 0x7e0(0x08)
	struct UImage* Image_PanelBorder; // 0x7e8(0x08)
	struct UCommonTextBlock* MFA_WarningText; // 0x7f0(0x08)
	struct UOverlay* NoMessage; // 0x7f8(0x08)
	struct URichTextBlock* RichTextBlock_TournamentTitle; // 0x800(0x08)
	struct UScaleBox* ScaleBox_DetailsText; // 0x808(0x08)
	struct UCommonTextBlock* Text_CrossplayWarning; // 0x810(0x08)
	struct UCommonTextBlock* Text_CurrentHype; // 0x818(0x08)
	struct UCommonTextBlock* Text_DetailsButton; // 0x820(0x08)
	struct UCommonTextBlock* Text_DivsionProgress; // 0x828(0x08)
	struct UCommonTextBlock* Text_DivsionRank; // 0x830(0x08)
	struct UCommonTextBlock* Text_MatchCapWarning; // 0x838(0x08)
	struct UCommonTextBlock* Text_Remaining; // 0x840(0x08)
	struct UCommonBorder* TournamentTitleInfo; // 0x848(0x08)
	struct UOverlay* WarningMessage; // 0x850(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Progress; // 0x858(0x08)
	struct FSlateColor PrimaryColor; // 0x860(0x14)
	struct FSlateColor ShadowColor; // 0x874(0x14)
	struct FSlateColor HighlightColor; // 0x888(0x14)

	void RefreshDivisionData(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.RefreshDivisionData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InputTypeChanged(bool isGamepad); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.InputTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCrossplayChanged(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.HandleCrossplayChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColors(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.UpdateColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refresh(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventSwitchUI(enum class ECommonInputType bNewInputType); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.EventSwitchUI // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownDivisionLobbyPanel(int32_t EntryPoint); // Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.ExecuteUbergraph_ShowdownDivisionLobbyPanel // (Final|UbergraphFunction) // @ game+0xdef49c
};

