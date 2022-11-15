// WidgetBlueprintGeneratedClass VoiceChannelChangePopup.VoiceChannelChangePopup_C
// Size: 0x41d (Inherited: 0x3b0)
struct UVoiceChannelChangePopup_C : UFortVoiceChannelChangePopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* AmbientIconPulse; // 0x3b8(0x08)
	struct UHorizontalBox* GamepadKeybindWrapper; // 0x3c0(0x08)
	struct UImage* Image_Mic; // 0x3c8(0x08)
	struct UHorizontalBox* KBKeybindWrapper; // 0x3d0(0x08)
	struct UImage* MicPulse; // 0x3d8(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_KeybindWidgets; // 0x3e0(0x08)
	struct UCommonRichTextBlock* Text_Hold; // 0x3e8(0x08)
	struct FName M_Param_ColorA; // 0x3f0(0x04)
	struct FName M_Param_ColorB; // 0x3f4(0x04)
	struct FName M_Param_Progress; // 0x3f8(0x04)
	struct FLinearColor ColorB; // 0x3fc(0x10)
	struct FLinearColor ColorA; // 0x40c(0x10)
	bool CollapseOnAnimationFinish; // 0x41c(0x01)

	void Construct(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Popup Animation Finished(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayOpenAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayCloseAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_VoiceChannelChangePopup(int32_t EntryPoint); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup // (Final|UbergraphFunction) // @ game+0xdef49c
};

