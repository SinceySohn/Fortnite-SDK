// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// Size: 0x518 (Inherited: 0x4f8)
struct UWebPurchase_C : UFortWebPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UCircularThrobber* Throbber; // 0x500(0x08)
	struct FDataTableRowHandle BackAction; // 0x508(0x10)

	void HandleBack(bool& bPassThrough); // Function WebPurchase.WebPurchase_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindDelegates(); // Function WebPurchase.WebPurchase_C.BindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function WebPurchase.WebPurchase_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WebPurchase(int32_t EntryPoint); // Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase // (Final|UbergraphFunction) // @ game+0xdef49c
};

