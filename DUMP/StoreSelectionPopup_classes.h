// WidgetBlueprintGeneratedClass StoreSelectionPopup.StoreSelectionPopup_C
// Size: 0x538 (Inherited: 0x518)
struct UStoreSelectionPopup_C : UFortMtxStoreSelectionPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UWidgetAnimation* Intro; // 0x520(0x08)
	struct UImage* SpeedLines; // 0x528(0x08)
	struct UCommonTextBlock* StorePrompt_Header; // 0x530(0x08)

	void BP_OnActivated(); // Function StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_StoreSelectionPopup(int32_t EntryPoint); // Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup // (Final|UbergraphFunction) // @ game+0xdef49c
};

