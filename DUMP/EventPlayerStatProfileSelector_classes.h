// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C
// Size: 0x570 (Inherited: 0x530)
struct UEventPlayerStatProfileSelector_C : UFortEventPlayerStatProfileSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetAnimation* Intro; // 0x538(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x540(0x08)
	struct UCommonBorder* ; // 0x548(0x08)
	struct UImage* Image_Background; // 0x550(0x08)
	struct USafeZone* ; // 0x558(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x560(0x08)
	struct UCommonTextBlock* Text_WindowTitle; // 0x568(0x08)

	void Set Up Profile Selector Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.Set Up Profile Selector Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventPlayerStatProfileSelector(int32_t EntryPoint); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.ExecuteUbergraph_EventPlayerStatProfileSelector // (Final|UbergraphFunction) // @ game+0xdef49c
};

