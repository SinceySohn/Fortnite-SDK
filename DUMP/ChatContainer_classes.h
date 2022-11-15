// WidgetBlueprintGeneratedClass ChatContainer.ChatContainer_C
// Size: 0x398 (Inherited: 0x308)
struct UChatContainer_C : UFortChatContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* SizeAnimation; // 0x310(0x08)
	struct UWidgetAnimation* FadeAnimation; // 0x318(0x08)
	struct UCommonBorder* ChatBorder; // 0x320(0x08)
	struct UCommonBorder* CommonBorderBackground; // 0x328(0x08)
	struct UIconTextButton_C* ConsoleChatShortcut; // 0x330(0x08)
	struct UWidgetSwitcher* CursorModeSwitcher; // 0x338(0x08)
	struct UHorizontalBox* HBox_Messages; // 0x340(0x08)
	struct USizeBox* HBox_Tabs; // 0x348(0x08)
	struct UHorizontalBox* HudContentHBox; // 0x350(0x08)
	struct UKeybindWidget_C* KeybindWidget; // 0x358(0x08)
	struct USizeBox* SizeBox_ChatSize; // 0x360(0x08)
	struct USizeBox* SizeBox_ConsoleButtonSpaceProvider; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher_SendButton; // 0x370(0x08)
	struct UCommonTextBlock* Text_Disabled; // 0x378(0x08)
	enum class EUMGSequencePlayMode ; // 0x380(0x01)
	bool CurrentlyUsingGamepad; // 0x381(0x01)
	bool AnimationClosing; // 0x382(0x01)
	char pad_383[0x5]; // 0x383(0x05)
	struct USoundBase* WindowCloseSound; // 0x388(0x08)
	struct USoundBase* WindowOpenSound; // 0x390(0x08)

	void FocusChat(); // Function ChatContainer.ChatContainer_C.FocusChat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetChatBoxStyle(); // Function ChatContainer.ChatContainer_C.SetChatBoxStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatContainer.ChatContainer_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleChatOpenChanged(bool bChatShouldBeOpen); // Function ChatContainer.ChatContainer_C.HandleChatOpenChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSizeAnimationComplete(); // Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCursorModeChanged(bool bEnabled, struct FName ActionName, struct UUserWidget* Widget); // Function ChatContainer.ChatContainer_C.HandleCursorModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSendButtonDisplayChanged(bool bShowSendButton); // Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ChatContainer.ChatContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ChatContainer.ChatContainer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnChatOpenChanged(bool bShouldBeOpen); // Function ChatContainer.ChatContainer_C.OnChatOpenChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function ChatContainer.ChatContainer_C.BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ChatContainer.ChatContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChatContainer(int32_t EntryPoint); // Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

