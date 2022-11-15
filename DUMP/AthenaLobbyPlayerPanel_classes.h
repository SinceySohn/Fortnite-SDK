// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// Size: 0x890 (Inherited: 0x5b0)
struct UAthenaLobbyPlayerPanel_C : UAthenaLobbyPlayerPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UHorizontalBox* BattlePassRow; // 0x5b8(0x08)
	struct UBorder* ; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x5d0(0x250)
	struct FMulticastInlineDelegate OnGadgetsClicked; // 0x820(0x10)
	struct FText AddFriendText; // 0x830(0x18)
	struct FText AcceptInviteText; // 0x848(0x18)
	struct FText SentInviteText; // 0x860(0x18)
	struct FText AcceptedInviteText; // 0x878(0x18)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHasBattlePassUpdated(bool bHasBattlePass); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnHasBattlePassUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIsMutedUpdated(bool bIsMuted); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnIsMutedUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32_t EntryPoint); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnGadgetsClicked__DelegateSignature(); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

