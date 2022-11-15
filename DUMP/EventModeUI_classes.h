// Class EventModeUI.FocusButton
// Size: 0x3e8 (Inherited: 0x3d8)
struct UFocusButton : UBacchusActionButton {
	struct UPaperSprite* StartFocusingSprite; // 0x3d8(0x08)
	struct UPaperSprite* StopFocusingSprite; // 0x3e0(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FocusButton.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x690d040
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x690cf44
};

// Class EventModeUI.FortEventModeEmotesWidget
// Size: 0x380 (Inherited: 0x2d0)
struct UFortEventModeEmotesWidget : UFortHUDElementWidget {
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote1; // 0x2d0(0x28)
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote2; // 0x2f8(0x28)
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote3; // 0x320(0x28)
	struct TArray<struct TSoftObjectPtr<UFortMontageItemDefinitionBase>> RandomEmotes; // 0x348(0x10)
	char pad_358[0x8]; // 0x358(0x08)
	struct URichTextBlock* Text_Emote1; // 0x360(0x08)
	struct URichTextBlock* Text_Emote2; // 0x368(0x08)
	struct URichTextBlock* Text_Emote3; // 0x370(0x08)
	struct URichTextBlock* Text_EmoteRandom; // 0x378(0x08)

	void OnFocusStateChanged(bool bIsFocusing); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFocusAvailableChanged(bool bIsFocusAvailable); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class EventModeUI.FortMobileActionButtonBehavior_Focus
// Size: 0x118 (Inherited: 0x110)
struct UFortMobileActionButtonBehavior_Focus : UFortMobileActionButtonBehavior {
	struct UPaperSprite* StopFocusingSprite; // 0x110(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x690d0c0
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x690cfc0
};

