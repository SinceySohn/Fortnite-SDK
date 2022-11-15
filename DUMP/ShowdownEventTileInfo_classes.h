// WidgetBlueprintGeneratedClass ShowdownEventTileInfo.ShowdownEventTileInfo_C
// Size: 0x818 (Inherited: 0x718)
struct UShowdownEventTileInfo_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UWidgetAnimation* FocusPin; // 0x720(0x08)
	struct UWidgetAnimation* HideSocketShadow_Past; // 0x728(0x08)
	struct UWidgetAnimation* HideSocketShadow; // 0x730(0x08)
	struct UWidgetAnimation* Focus; // 0x738(0x08)
	struct UWidgetAnimation* Focus_Ended; // 0x740(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x748(0x08)
	struct UCommonBorder* CommonBorder_Date; // 0x750(0x08)
	struct UCommonBorder* CommonBorder_Score; // 0x758(0x08)
	struct UCommonTextBlock* CommonTextBlock_pts; // 0x760(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventPinState; // 0x768(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormat; // 0x770(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormatTitle; // 0x778(0x08)
	struct UVerticalBox* Content_Score; // 0x780(0x08)
	struct UCommonTextBlock* DateText; // 0x788(0x08)
	struct UImage* Image_Lock; // 0x790(0x08)
	struct UImage* Image_Socket; // 0x798(0x08)
	struct UScaleBox* ScaleBoxPin; // 0x7a0(0x08)
	struct UCommonTextBlock* ScoreValue; // 0x7a8(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x7b0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_EventWindowUnlockState; // 0x7b8(0x08)
	struct UCommonTextBlock* TimeDescriptionText; // 0x7c0(0x08)
	struct UCommonTextBlock* TimeDescriptionTextRelative; // 0x7c8(0x08)
	struct FMulticastInlineDelegate SetEventState; // 0x7d0(0x10)
	bool isEnded; // 0x7e0(0x01)
	bool isPin; // 0x7e1(0x01)
	char pad_7E2[0x6]; // 0x7e2(0x06)
	struct FMulticastInlineDelegate SetDisplayInfo; // 0x7e8(0x10)
	struct UMaterialInstanceDynamic* TextFontMaterial; // 0x7f8(0x08)
	struct UMaterialInstanceDynamic* PointFontMaterial; // 0x800(0x08)
	struct FMulticastInlineDelegate MultiRoundSession; // 0x808(0x10)

	void RefreshDataBP(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventAnimFocus(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventStyleSocket(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventAnimHover(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownEventTileInfo(int32_t EntryPoint); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void MultiRoundSession__DelegateSignature(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.MultiRoundSession__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetDisplayInfo__DelegateSignature(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetEventState__DelegateSignature(enum class EFortShowdownEventState EventState); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

