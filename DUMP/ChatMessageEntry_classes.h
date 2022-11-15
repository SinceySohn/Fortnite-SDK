// WidgetBlueprintGeneratedClass ChatMessageEntry.ChatMessageEntry_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct UChatMessageEntry_C : UFortChatMessageEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCommonBorder* MessageBackground; // 0x3d0(0x08)
	struct UBorder* MessageWrapper; // 0x3d8(0x08)
	struct UCommonBorderStyle* ; // 0x3e0(0x08)
	struct UCommonBorderStyle* SelfStyle; // 0x3e8(0x08)
	struct UCommonBorderStyle* OtherUserStyle; // 0x3f0(0x08)

	void HandleSelectionStatusChanged(bool bIsSelected); // Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnFocusedChanged(bool bIsFocused); // Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (); // Function ChatMessageEntry.ChatMessageEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChatMessageEntry(int32_t EntryPoint); // Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

