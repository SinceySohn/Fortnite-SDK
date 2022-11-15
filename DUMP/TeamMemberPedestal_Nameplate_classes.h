// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C
// Size: 0x183a (Inherited: 0x1500)
struct UTeamMemberPedestal_Nameplate_C : UFortTeamMemberPedestalNameplate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1500(0x08)
	struct UWidgetAnimation* NotReadyTextColor; // 0x1508(0x08)
	struct UWidgetAnimation* ReadyTextColor; // 0x1510(0x08)
	struct UWidgetAnimation* On Ready Change Text; // 0x1518(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x1520(0x08)
	struct USizeBox* SB_InputAction; // 0x1528(0x08)
	struct UScaleBox* ; // 0x1530(0x08)
	struct UTeamMemberPedestal_ActivatableContainer_C* TeamMemberPedestal_ActivatableContainer; // 0x1538(0x08)
	struct USizeBox* Widget_PlayerLevel; // 0x1540(0x08)
	char pad_1548[0x8]; // 0x1548(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x1550(0x250)
	bool bHovered; // 0x17a0(0x01)
	char pad_17A1[0x3]; // 0x17a1(0x03)
	struct FLinearColor ReadyColor; // 0x17a4(0x10)
	struct FLinearColor NotReadyColor; // 0x17b4(0x10)
	char pad_17C4[0x4]; // 0x17c4(0x04)
	struct USoundBase* UnReadySound; // 0x17c8(0x08)
	struct USoundBase* ReadySound; // 0x17d0(0x08)
	struct FText AddFriendText; // 0x17d8(0x18)
	struct FText AcceptedInviteText; // 0x17f0(0x18)
	struct FText AcceptFriendRequestText; // 0x1808(0x18)
	struct FText SentInviteText; // 0x1820(0x18)
	enum class ESlateVisibility FALSE; // 0x1838(0x01)
	enum class EFrontEndCamera DefaultOldCameraValue; // 0x1839(0x01)

	void Update Add Friend Button Visuals(bool IsUsingTouch); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Update Add Friend Button Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.UpdateInputActionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	enum class ESlateVisibility GetInputActionVisibility(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.GetInputActionVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnReadyStatusChanged(enum class EGameReadiness GameReadiness, bool bIsDownloading); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentSubGameChanged(enum class ESubGame NewSubGame); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnCurrentSubGameChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleInputMethodChanged(enum class ECommonInputType bNewInputType); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.HandleInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInputChanged(enum class ECommonInputType bNewInputType); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32_t EntryPoint); // Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

