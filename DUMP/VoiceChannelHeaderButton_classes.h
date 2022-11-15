// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// Size: 0x1538 (Inherited: 0x1490)
struct UVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x1498(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0x14a0(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x14a8(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x14b0(0x08)
	struct UHorizontalBox* HBox_Join; // 0x14b8(0x08)
	struct UImage* Image_VoiceChatWarning; // 0x14c0(0x08)
	struct UCommonRichTextBlock* JoinText; // 0x14c8(0x08)
	struct UImage* NotTransmitting; // 0x14d0(0x08)
	struct UCommonRichTextBlock* OffText; // 0x14d8(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0x14e0(0x08)
	struct UCommonRichTextBlock* OnText; // 0x14e8(0x08)
	struct UOverlay* ; // 0x14f0(0x08)
	struct UImage* SelectionBackplate; // 0x14f8(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1500(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0x1508(0x08)
	struct UImage* Transmitting; // 0x1510(0x08)
	struct FLinearColor VoiceStatusActiveColor; // 0x1518(0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1528(0x10)

	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (struct UObject* ListItemObject); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32_t EntryPoint); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

