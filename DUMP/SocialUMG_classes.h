// Class SocialUMG.DesignerPreviewChatChannel
// Size: 0x150 (Inherited: 0xe8)
struct UDesignerPreviewChatChannel : USocialChatChannel {
	char pad_E8[0x68]; // 0xe8(0x68)
};

// Class SocialUMG.SocialChatChannelTab
// Size: 0x1440 (Inherited: 0x1430)
struct USocialChatChannelTab : UCommonButtonLegacy {
	struct USocialChatChannel* ChatChannel; // 0x1430(0x08)
	struct UCommonTextBlock* CommonText_ChannelName; // 0x1438(0x08)
};

// Class SocialUMG.SocialChatContainer
// Size: 0x2c0 (Inherited: 0x268)
struct USocialChatContainer : UUserWidget {
	struct USocialChatManager* ChatManager; // 0x268(0x08)
	struct TArray<struct USocialChatChannel*> JoinedChannels; // 0x270(0x10)
	struct USocialChatChannel* ActiveChannel; // 0x280(0x08)
	struct UCommonButtonGroupLegacy* TabButtonGroup; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)
	struct USocialChatMessageList* ChatList_Messages; // 0x298(0x08)
	struct USocialChatEditableText* ChatEditableText_MessageEntry; // 0x2a0(0x08)
	struct UCommonButtonLegacy* Button_SendMessage; // 0x2a8(0x08)
	struct UDynamicEntryBox* EntryBox_JoinedChannels; // 0x2b0(0x08)
	struct UScrollBox* ScrollBox_Channels; // 0x2b8(0x08)

	void SendCurrentMessage(); // Function SocialUMG.SocialChatContainer.SendCurrentMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x68ccc10
	void OnChatOpenChanged(bool bShouldBeOpen); // Function SocialUMG.SocialChatContainer.OnChatOpenChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleRightTabPressed(); // Function SocialUMG.SocialChatContainer.HandleRightTabPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x68ccbd8
	void HandleLeftTabPressed(); // Function SocialUMG.SocialChatContainer.HandleLeftTabPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x68ccabc
	void FocusEditableText(); // Function SocialUMG.SocialChatContainer.FocusEditableText // (Final|Native|Public|BlueprintCallable) // @ game+0x68cca0c
	void DynamicHandleMessageTextCommitted(struct FText& MessageText, enum class ETextCommit CommitMethod); // Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted // (Final|Native|Private|HasOutParms) // @ game+0x68cc938
};

// Class SocialUMG.SocialChatMessageEntry
// Size: 0x3c8 (Inherited: 0x268)
struct USocialChatMessageEntry : UUserWidget {
	char pad_268[0x18]; // 0x268(0x18)
	struct FSocialChatMessageEntryStyle DefaultStyle; // 0x280(0x138)
	struct UCommonRichTextBlock* RichText_Message; // 0x3b8(0x08)
	struct UButton* Button_MessageButton; // 0x3c0(0x08)

	void OnMessageSet(); // Function SocialUMG.SocialChatMessageEntry.OnMessageSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool CanInteract(); // Function SocialUMG.SocialChatMessageEntry.CanInteract // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x248ecd4
};

// Class SocialUMG.SocialChatMessageList
// Size: 0x368 (Inherited: 0x260)
struct USocialChatMessageList : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	bool bIsFocusable; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct USocialChatChannel* ActiveChannel; // 0x340(0x08)
	char pad_348[0x20]; // 0x348(0x20)
};

// Class SocialUMG.SocialGroupListEntry
// Size: 0x1460 (Inherited: 0x1430)
struct USocialGroupListEntry : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct USocialActionMenu* ActionMenuClass; // 0x1438(0x08)
	struct USocialGroupChannel* SocialGroup; // 0x1440(0x08)
	struct UTextBlock* Text_GroupName; // 0x1448(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1450(0x08)
	char pad_1458[0x8]; // 0x1458(0x08)

	struct UUserWidget* HandleGetMenuContent(); // Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent // (Final|Native|Protected) // @ game+0x68cca74
};

// Class SocialUMG.SocialGroupTreeView
// Size: 0xc00 (Inherited: 0xbe0)
struct USocialGroupTreeView : UTreeView {
	struct USocialGroupListEntry* GroupEntryWidgetClass; // 0xbd8(0x08)
	struct USocialListUserEntryBase* UserEntryWidgetClass; // 0xbe0(0x08)
	struct USocialInteractionMenu* ActionMenuClass; // 0xbe8(0x08)
	struct USocialInteractionMenu* ActionMenu; // 0xbf0(0x08)
};

// Class SocialUMG.SocialInteractionButton
// Size: 0x14e0 (Inherited: 0x1430)
struct USocialInteractionButton : UCommonButtonLegacy {
	struct FLinearColor DefaultIndicatorColor; // 0x1430(0x10)
	struct FLinearColor AlertingIndicatorColor; // 0x1440(0x10)
	char pad_1450[0x80]; // 0x1450(0x80)
	struct UCommonTextBlock* Text_InteractionName; // 0x14d0(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x14d8(0x08)

	void OnInteractionSet(); // Function SocialUMG.SocialInteractionButton.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsPlatformOnlyFriend(); // Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68ccbec
	struct FName GetInteractionName(); // Function SocialUMG.SocialInteractionButton.GetInteractionName // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cca40
};

// Class SocialUMG.SocialActionMenu
// Size: 0x3e8 (Inherited: 0x3a8)
struct USocialActionMenu : UCommonActivatableWidget {
	char pad_3A8[0x40]; // 0x3a8(0x40)

	void OnOpened(); // Function SocialUMG.SocialActionMenu.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleMenuAnchorOpenChanged(bool bIsOpen); // Function SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged // (Final|Native|Protected) // @ game+0x68ccad0
};

// Class SocialUMG.SocialInteractionMenu
// Size: 0x450 (Inherited: 0x3e8)
struct USocialInteractionMenu : USocialActionMenu {
	char pad_3E8[0x30]; // 0x3e8(0x30)
	struct UDynamicEntryBox* EntryBox_PositiveInteractions; // 0x418(0x08)
	struct UDynamicEntryBox* EntryBox_NegativeInteractions; // 0x420(0x08)
	struct USpacer* Spacer_InteractionSeparator; // 0x428(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Confirmation; // 0x430(0x08)
	struct UTextBlock* Text_ConfirmationLabel; // 0x438(0x08)
	struct UCommonButtonLegacy* Button_Confirm; // 0x440(0x08)
	struct UCommonButtonLegacy* Button_Decline; // 0x448(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* GetFirstEntryToCenter(); // Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68cca20
};

// Class SocialUMG.SocialNameTextBlock
// Size: 0x860 (Inherited: 0x840)
struct USocialNameTextBlock : UCommonRichTextBlock {
	struct USocialUser* SocialUser; // 0x838(0x08)
	float MinDesiredSize; // 0x840(0x04)
	float MaxDesiredSize; // 0x844(0x04)
	bool bShowSecondName; // 0x848(0x01)
	enum class EPlatformIconDisplayRule PlatformIconDisplayRule; // 0x849(0x01)
	bool bWrapToNextLine; // 0x84a(0x01)
	struct FColor SecondNameColor; // 0x84c(0x04)
	int32_t SecondNameFontSize; // 0x850(0x04)
	char pad_85B[0x5]; // 0x85b(0x05)
};

// Class SocialUMG.SocialListEntryBase
// Size: 0x1450 (Inherited: 0x1430)
struct USocialListEntryBase : UCommonButtonLegacy {
	char pad_1430[0x20]; // 0x1430(0x20)
};

// Class SocialUMG.SocialListInteractableEntryBase
// Size: 0x1460 (Inherited: 0x1450)
struct USocialListInteractableEntryBase : USocialListEntryBase {
	struct USocialActionMenu* ActionMenuClass; // 0x1448(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1450(0x08)

	void HandleMenuOpenChanged(bool bIsMenuOpen); // Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged // (Final|Native|Private) // @ game+0x68ccb54
	struct UUserWidget* HandleGetMenuContent(); // Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent // (Final|Native|Protected) // @ game+0x68cca98
};

// Class SocialUMG.SocialListUserEntryBase
// Size: 0x1480 (Inherited: 0x1460)
struct USocialListUserEntryBase : USocialListInteractableEntryBase {
	struct USocialNameTextBlock* Text_SocialName; // 0x1460(0x08)
	struct USocialNameTextBlock* Text_SocialName_Hover; // 0x1468(0x08)
	struct UCommonRichTextBlock* Text_RichPresence; // 0x1470(0x08)
	struct UCommonRichTextBlock* Text_RichPresence_Hover; // 0x1478(0x08)
};

// Class SocialUMG.SocialUserListHeaderEntry
// Size: 0x1460 (Inherited: 0x1450)
struct USocialUserListHeaderEntry : USocialListEntryBase {
	struct UTextBlock* Text_ListName; // 0x1448(0x08)
	struct UTextBlock* Text_NumEntries; // 0x1450(0x08)
};

// Class SocialUMG.SocialUserListViewBase
// Size: 0x360 (Inherited: 0x260)
struct USocialUserListViewBase : UListViewBase {
	char pad_260[0xf8]; // 0x260(0xf8)
	float EntrySpacing; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
};

// Class SocialUMG.SocialUserListView
// Size: 0x400 (Inherited: 0x360)
struct USocialUserListView : USocialUserListViewBase {
	char pad_360[0x48]; // 0x360(0x48)
	struct USocialActionMenu* ActiveActionMenu; // 0x3a8(0x08)
	struct TMap<struct USocialActionMenu*, struct USocialActionMenu*> CachedActionMenuPool; // 0x3b0(0x50)
};

// Class SocialUMG.SocialUserTreeView
// Size: 0x4a0 (Inherited: 0x400)
struct USocialUserTreeView : USocialUserListView {
	char pad_400[0x70]; // 0x400(0x70)
	struct USocialListUserEntryBase* UserEntryWidgetClass; // 0x470(0x08)
	struct USocialListUserEntryBase* InviteEntryWidgetClass; // 0x478(0x08)
	char pad_480[0x20]; // 0x480(0x20)
};

// Class SocialUMG.SocialChatEditableText
// Size: 0x780 (Inherited: 0x148)
struct USocialChatEditableText : UWidget {
	char pad_148[0x28]; // 0x148(0x28)
	struct FEditableTextStyle EditableTextStyle; // 0x170(0x2c0)
	struct FTextBlockStyle AutoCompleteStyle; // 0x430(0x310)
	char pad_740[0x40]; // 0x740(0x40)
};

