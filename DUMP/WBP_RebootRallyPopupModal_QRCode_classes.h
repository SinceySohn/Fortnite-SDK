// WidgetBlueprintGeneratedClass WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C
// Size: 0x1411 (Inherited: 0x13e0)
struct UWBP_RebootRallyPopupModal_QRCode_C : URebootRallyQRCode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UImage* Image_QRCode; // 0x13e8(0x08)
	struct UCommonTextBlock* Text_QRAction; // 0x13f0(0x08)
	bool bIsInvite; // 0x13f8(0x01)
	char pad_13F9[0x7]; // 0x13f9(0x07)
	struct FString QRCodeURL; // 0x1400(0x10)
	bool bIsSwitch; // 0x1410(0x01)

	void UpdateText(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateQRCode(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateQRCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateURL(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateURL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.InputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetIsInvite(bool bIsInvite); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.SetIsInvite // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode(int32_t EntryPoint); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode // (Final|UbergraphFunction) // @ game+0xdef49c
};

