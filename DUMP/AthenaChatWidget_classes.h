// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// Size: 0x418 (Inherited: 0x3c8)
struct UAthenaChatWidget_C : UFortActivatableChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct FDataTableRowHandle CloseUserListAction; // 0x3d0(0x10)
	struct FDataTableRowHandle OpenUserListAction; // 0x3e0(0x10)
	struct FDataTableRowHandle CurrentUserListAction; // 0x3f0(0x10)
	bool bEnteringChat; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate OnEnteredChat; // 0x408(0x10)

	void FocusChat(bool bFocus); // Function AthenaChatWidget.AthenaChatWidget_C.FocusChat // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaChatWidget(int32_t EntryPoint); // Function AthenaChatWidget.AthenaChatWidget_C.ExecuteUbergraph_AthenaChatWidget // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnEnteredChat__DelegateSignature(bool EnteredChat); // Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

