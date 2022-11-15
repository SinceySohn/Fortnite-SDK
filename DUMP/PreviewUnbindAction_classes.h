// WidgetBlueprintGeneratedClass PreviewUnbindAction.PreviewUnbindAction_C
// Size: 0x2a8 (Inherited: 0x280)
struct UPreviewUnbindAction_C : UFortSettingsPreviewActionUnbind {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCommonBorder* BorderFrame; // 0x288(0x08)
	struct UCommonBorder* ; // 0x290(0x08)
	struct USizeBox* PrimaryKeybindTextSizeBox; // 0x298(0x08)
	struct USizeBox* SecondaryKeybindTextSizeBox; // 0x2a0(0x08)

	void BP_OnEntryReleased(); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PreviewUnbindAction(int32_t EntryPoint); // Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction // (Final|UbergraphFunction) // @ game+0xdef49c
};

