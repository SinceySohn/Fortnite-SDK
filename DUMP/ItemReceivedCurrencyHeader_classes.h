// WidgetBlueprintGeneratedClass ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
// Size: 0x311 (Inherited: 0x2b1)
struct UItemReceivedCurrencyHeader_C : UItemReceivedHeaderSubWidgetBase_C {
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonTextBlock* BattlepassTier; // 0x2c0(0x08)
	struct UCommonTextBlock* BattlepassUpgraded; // 0x2c8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Icon; // 0x2d0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Title; // 0x2d8(0x08)
	struct UCurrencyListView_C* ; // 0x2e0(0x08)
	struct UImage* ImageBattlePassIconGold; // 0x2e8(0x08)
	struct UImage* ImageBattlePassIconSilver; // 0x2f0(0x08)
	struct UItemReceivedAccountWidget_C* ItemReceivedAccountWidget; // 0x2f8(0x08)
	struct FMulticastInlineDelegate ActivateWidgetFromPresentationScreen; // 0x300(0x10)
	bool AlreadyActivated; // 0x310(0x01)

	void ActiveFromPresentation(struct FCurrencyDataWithGiftBox CurrencyDataArray); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemReceivedCurrencyHeader(int32_t EntryPoint); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void ActivateWidgetFromPresentationScreen__DelegateSignature(struct UFortGiftBoxItem* GiftBox, struct TArray<struct FCurrencyData>& CurrencyArray); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

