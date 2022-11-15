// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C
// Size: 0x1480 (Inherited: 0x1430)
struct UTeamMemberPedestal_Nameplate_AddFriendButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnUnhovered; // 0x1438(0x08)
	struct UWidgetAnimation* Reset; // 0x1440(0x08)
	struct UWidgetAnimation* Disabled; // 0x1448(0x08)
	struct UWidgetAnimation* PlayShine; // 0x1450(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1458(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1460(0x08)
	struct UImage* Image_ButtonTop; // 0x1468(0x08)
	struct USizeBox* SB_InputAction; // 0x1470(0x08)
	struct USizeBox* ; // 0x1478(0x08)

	void UpdateVisuals(bool IsUsingTouch); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetButtonText(struct FText InText); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetInputActionVisibility(enum class ESlateVisibility InVisibility); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetInputActionVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

