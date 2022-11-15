// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
// Size: 0x4c0 (Inherited: 0x420)
struct UHorizontalTabList_C : UFortTabListWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UImage* ImageGamepadKeyPrompt; // 0x428(0x08)
	struct UImage* ImageHorizRule; // 0x430(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x438(0x08)
	struct USizeBox* NextTabActionWrapper; // 0x440(0x08)
	struct UOverlay* Overlay_Container; // 0x448(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x450(0x08)
	struct USizeBox* PreviousTabActionWrapper; // 0x458(0x08)
	struct UHorizontalBox* TabButtonBox; // 0x460(0x08)
	struct Fmargin TabButtonPadding; // 0x468(0x10)
	struct UCommonButtonStyle* ButtonStyle; // 0x478(0x08)
	bool UseButtonStyle; // 0x480(0x01)
	bool ShowGamePadInputPrompt; // 0x481(0x01)
	bool ShowRail; // 0x482(0x01)
	char pad_483[0x1]; // 0x483(0x01)
	int32_t MinTabWidth; // 0x484(0x04)
	bool ForceTabLabelsCollapsed; // 0x488(0x01)
	bool ForceTabIconsCollapsed; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct FMulticastInlineDelegate RefreshGamepad; // 0x490(0x10)
	struct UCommonButtonBase* DebugButtonTypeDisplay; // 0x4a0(0x08)
	int32_t DebugTabCount; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	double PreviousTabActionPaddingRight; // 0x4b0(0x08)
	double NextTabActionPaddingLeft; // 0x4b8(0x08)

	void DebugCreateTabsForDesigner(); // Function HorizontalTabList.HorizontalTabList_C.DebugCreateTabsForDesigner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTabStyles(struct UCommonButtonBase* ButtonWidget); // Function HorizontalTabList.HorizontalTabList_C.UpdateTabStyles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetVerticalAlignment(enum class EVerticalAlignment FillVertically); // Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateGamepadKeyVisibility(); // Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function HorizontalTabList.HorizontalTabList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Previous Visibility(); // Function HorizontalTabList.HorizontalTabList_C.Previous Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function HorizontalTabList.HorizontalTabList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void (struct FName TabId); // Function HorizontalTabList.HorizontalTabList_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (enum class ESlateVisibility InVisibility); // Function HorizontalTabList.HorizontalTabList_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabCreation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoval // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_HorizontalTabList(int32_t EntryPoint); // Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList // (Final|UbergraphFunction) // @ game+0xdef49c
	void RefreshGamepad__DelegateSignature(); // Function HorizontalTabList.HorizontalTabList_C.RefreshGamepad__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

