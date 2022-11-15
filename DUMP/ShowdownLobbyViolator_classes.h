// WidgetBlueprintGeneratedClass ShowdownLobbyViolator.ShowdownLobbyViolator_C
// Size: 0x771 (Inherited: 0x718)
struct UShowdownLobbyViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UWidgetAnimation* Intro; // 0x720(0x08)
	struct UCommonBorder* CommonBorder_DetailsBG; // 0x728(0x08)
	struct UCommonBorder* CommonBorder_HighlightBorder; // 0x730(0x08)
	struct UCommonBorder* CommonBorder_TopContainer; // 0x738(0x08)
	struct UCommonTextBlock* CommonTextBlock_TimeRemainingDesc; // 0x740(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Status; // 0x748(0x08)
	struct UImage* Image_BGFillColor; // 0x750(0x08)
	struct UImage* Image_InnerTriangle; // 0x758(0x08)
	struct UImage* Image_OuterTriangle; // 0x760(0x08)
	struct UCommonTextBlock* Text_ShowdownTitle; // 0x768(0x08)
	bool runOnce; // 0x770(0x01)

	void RefreshDataBP(); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownLobbyViolator(int32_t EntryPoint); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.ExecuteUbergraph_ShowdownLobbyViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

