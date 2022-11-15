// WidgetBlueprintGeneratedClass SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C
// Size: 0x1582 (Inherited: 0x1490)
struct USidebarVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x1498(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x14a0(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0x14a8(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x14b0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x14b8(0x08)
	struct UHorizontalBox* HBox_Join; // 0x14c0(0x08)
	struct UImage* Image_VoiceChatWarning; // 0x14c8(0x08)
	struct UCommonRichTextBlock* JoinText; // 0x14d0(0x08)
	struct UFortMobileImage* NotTransmitting; // 0x14d8(0x08)
	struct UCommonRichTextBlock* OffText; // 0x14e0(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0x14e8(0x08)
	struct UCommonRichTextBlock* OnText; // 0x14f0(0x08)
	struct UOverlay* ; // 0x14f8(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1500(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0x1508(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_ChannelInfo; // 0x1510(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_ChannelTitle; // 0x1518(0x08)
	struct UFortMobileImage* Transmitting; // 0x1520(0x08)
	struct FLinearColor VoiceStatusActiveColor; // 0x1528(0x10)
	struct FLinearColor VoiceStatusInactiveColor; // 0x1538(0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1548(0x10)
	struct FSlateColor OnOffTextColor; // 0x1558(0x14)
	struct FSlateColor OnOffTextColor_Hover; // 0x156c(0x14)
	bool IsRestricted; // 0x1580(0x01)
	bool IsHoveredColor; // 0x1581(0x01)

	void SetIsAvaliableAndNotActiveVisuals(bool IsAvaliableAndNotActive); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsAvaliableAndNotActiveVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetIsListeningVisuals(bool IsListening); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsListeningVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetIsActiveOrAvailableVisuals(bool IsActiveOrAvailable); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsActiveOrAvailableVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetActiveAndListeningVisuals(bool IsActiveAndListening, bool IsRestricted); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetActiveAndListeningVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetRestrictedVisuals(bool IsRestricted); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetRestrictedVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (struct UObject* ListItemObject); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarVoiceChannelHeaderButton(int32_t EntryPoint); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.ExecuteUbergraph_SidebarVoiceChannelHeaderButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

