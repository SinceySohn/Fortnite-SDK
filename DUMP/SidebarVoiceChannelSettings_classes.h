// WidgetBlueprintGeneratedClass SidebarVoiceChannelSettings.SidebarVoiceChannelSettings_C
// Size: 0x3a8 (Inherited: 0x330)
struct USidebarVoiceChannelSettings_C : UFortVoiceSettingsDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* GearHover; // 0x338(0x08)
	struct UCommonActionWidget* ActionWidget_InputDisplay; // 0x340(0x08)
	struct UImage* AlertIcon; // 0x348(0x08)
	struct UIconTextButton_C* Button_NextInputDevice; // 0x350(0x08)
	struct UIconTextButton_C* Button_NextOutputDevice; // 0x358(0x08)
	struct UIconTextButton_C* Button_TogglePTT; // 0x360(0x08)
	struct UImage* GearIcon; // 0x368(0x08)
	struct UCommonRichTextBlock* InputDevice; // 0x370(0x08)
	struct UCommonRichTextBlock* OutputDevice; // 0x378(0x08)
	struct UKeybindWidget_C* PTTKeybindWidget; // 0x380(0x08)
	struct UCommonRichTextBlock* PushToTalk; // 0x388(0x08)
	struct UCommonTextBlock* Text_LowPowerMode; // 0x390(0x08)
	struct UImage* VoiceDisabledIcon; // 0x398(0x08)
	struct UCommonRichTextBlock* VoiceDisabledText; // 0x3a0(0x08)

	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarVoiceChannelSettings.SidebarVoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarVoiceChannelSettings.SidebarVoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarVoiceChannelSettings.SidebarVoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarVoiceChannelSettings(int32_t EntryPoint); // Function SidebarVoiceChannelSettings.SidebarVoiceChannelSettings_C.ExecuteUbergraph_SidebarVoiceChannelSettings // (Final|UbergraphFunction) // @ game+0xdef49c
};

