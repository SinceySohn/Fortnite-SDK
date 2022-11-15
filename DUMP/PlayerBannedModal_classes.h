// WidgetBlueprintGeneratedClass PlayerBannedModal.PlayerBannedModal_C
// Size: 0x60a (Inherited: 0x518)
struct UPlayerBannedModal_C : UFortPlayerBanned {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UTextBlock* BanMessage; // 0x520(0x08)
	struct UIconTextButton_C* CloseButton; // 0x528(0x08)
	struct UCommonTextBlock* disclaimer; // 0x530(0x08)
	struct UImage* Image_Severe; // 0x538(0x08)
	struct ULightbox_C* Lightbox; // 0x540(0x08)
	struct UTextBlock* TimeRemaining; // 0x548(0x08)
	struct UCommonTextBlock* Title; // 0x550(0x08)
	struct UImage* ; // 0x558(0x08)
	struct UImage* ; // 0x560(0x08)
	struct UImage* ; // 0x568(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SeverityImage; // 0x570(0x08)
	bool AckSucceeded; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct FText BanInformation; // 0x580(0x18)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x598(0x10)
	int32_t TryCount; // 0x5a8(0x04)
	bool bIsWarning; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)
	struct FMcpBanInfo McpBanInfo; // 0x5b0(0x40)
	struct FText BanType; // 0x5f0(0x18)
	bool bIsCompetitiveBan; // 0x608(0x01)
	bool bIsTeamingWithCheaterBan; // 0x609(0x01)

	void HandleCloseAttempted(); // Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveModal(); // Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BanEnumToText(enum class EPlayerBanReasons Index, struct FString ExploitProgramName, enum class EPlayerCompetitiveBanReasons Competitive Ban Reason, bool bIsCompetitiveBan); // Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBanAck(bool Success); // Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTimeRemaining(struct FText Time); // Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisableButton(bool DisableButton); // Function PlayerBannedModal.PlayerBannedModal_C.DisableButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(struct FText Title, struct FText Content); // Function PlayerBannedModal.PlayerBannedModal_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function PlayerBannedModal.PlayerBannedModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerBannedModal(int32_t EntryPoint); // Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnCloseSucceeded__DelegateSignature(); // Function PlayerBannedModal.PlayerBannedModal_C.OnCloseSucceeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

