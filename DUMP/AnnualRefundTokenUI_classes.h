// Class AnnualRefundTokenUI.FortAnnualRefundTicket
// Size: 0x270 (Inherited: 0x268)
struct UFortAnnualRefundTicket : UUserWidget {
	struct UCommonTextBlock* Text_AvailableDate; // 0x268(0x08)

	void OnUpdatePendingState(bool bIsPending); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateAvailableState(bool bIsAvailable); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayLockingAnimation(); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
// Size: 0x548 (Inherited: 0x520)
struct UFortAnnualRefundTokenData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> PurchaseHistoryScreenClass; // 0x520(0x28)
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
// Size: 0x14b0 (Inherited: 0x1480)
struct UFortPurchaseHistoryEntry : UFortHoldableButton {
	struct UFortCosmeticItemCard* ItemCardClass; // 0x1480(0x08)
	float CardWidthOverride; // 0x1488(0x04)
	char pad_148C[0x4]; // 0x148c(0x04)
	struct UCommonTextBlock* Text_Name; // 0x1490(0x08)
	struct TArray<struct FString> LootEntryItemTypesToExclude; // 0x1498(0x10)
	char pad_14A8[0x8]; // 0x14a8(0x08)

	void UpdateItemList(struct TArray<struct UFortCosmeticItemCard*>& ItemCards); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetupItemCard(struct UFortCosmeticItemCard* ItemCard, struct UFortItem* Item); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetPurchaseText(struct FText& PurchaseDateText, struct FText& RefundDateText, bool bHasBeenRefunded, enum class EFortPurchaseHistoryRefundType RefundType); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
// Size: 0x370 (Inherited: 0x260)
struct UFortPurchaseHistoryListView : UListViewBase {
	char pad_260[0x110]; // 0x260(0x110)
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
// Size: 0x610 (Inherited: 0x518)
struct UFortPurchaseHistoryScreen : UFortActivatablePanel {
	struct FDataTableRowHandle BackAction; // 0x518(0x10)
	char pad_528[0x18]; // 0x528(0x18)
	struct TSoftClassPtr<UObject> RefundConfirmationClass; // 0x540(0x28)
	struct TSoftClassPtr<UObject> DirectPurchaseInfoModalClass; // 0x568(0x28)
	struct UCommonAnimatedSwitcher* Switcher_MainContent; // 0x590(0x08)
	struct UFortPurchaseHistoryListView* ListView_Purchases; // 0x598(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x5a0(0x08)
	struct UCommonButtonBase* Button_PostApproval; // 0x5a8(0x08)
	struct UCommonTextBlock* Text_Desc; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_RefundCount; // 0x5b8(0x08)
	struct UCommonTextBlock* Text_ResultHeader; // 0x5c0(0x08)
	struct UCommonTextBlock* Text_ResultTitle; // 0x5c8(0x08)
	struct UCommonTextBlock* Text_ResultDesc; // 0x5d0(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Left; // 0x5d8(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Center; // 0x5e0(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Right; // 0x5e8(0x08)
	struct UWidget* Widget_CancelPurchaseInfo; // 0x5f0(0x08)
	struct UWidget* Widget_ReturnTicketInfo; // 0x5f8(0x08)
	struct UWidget* Widget_TokenlessRefundInfo; // 0x600(0x08)
	struct UWidget* Widget_NonRefundableInfo; // 0x608(0x08)

	void OnPopulateView(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNoPurchasesAvailable(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEndRefundSubmission(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginRefundSubmission(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool BP_IsShowingPurchases(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class AnnualRefundTokenUI.FortRefundConfirmation
// Size: 0x570 (Inherited: 0x518)
struct UFortRefundConfirmation : UFortActivatablePanel {
	char pad_518[0x10]; // 0x518(0x10)
	struct UCommonTextBlock* Text_RefundsRemaining; // 0x528(0x08)
	struct UCommonTextBlock* Text_RefundCount; // 0x530(0x08)
	struct UCommonTextBlock* Text_AreYouSure; // 0x538(0x08)
	struct UCommonButtonBase* Button_Yes; // 0x540(0x08)
	struct UCommonButtonBase* Button_No; // 0x548(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x550(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Left; // 0x558(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Center; // 0x560(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Right; // 0x568(0x08)

	void BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType); // Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_UpdateItemsList(struct TArray<struct UFortItemDefinition*>& SelectedItemDefs, int32_t TotalMtxPaid); // Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
};

