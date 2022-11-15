// WidgetBlueprintGeneratedClass LockerArchivingTooltip.LockerArchivingTooltip_C
// Size: 0x418 (Inherited: 0x268)
struct ULockerArchivingTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x270(0x08)
	struct UWidgetAnimation* burstLoop; // 0x278(0x08)
	struct UWidgetAnimation* Show; // 0x280(0x08)
	struct UIconTextButton_C* Dismiss_Button; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UImage* Image_Arrow; // 0x298(0x08)
	struct USizeBox* ; // 0x2a0(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2a8(0x08)
	struct UVerticalBox* ; // 0x2b0(0x08)
	struct FText In Text; // 0x2b8(0x18)
	bool In Auto Wrap Text; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)
	struct FSlateBrush In Brush; // 0x2e0(0xc0)
	bool InShowArrow; // 0x3a0(0x01)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x3a1(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x3a2(0x01)
	char pad_3A3[0x5]; // 0x3a3(0x05)
	struct FWidgetTransform In Transform; // 0x3a8(0x38)
	bool Show Icon; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	double InWidthOverride; // 0x3e8(0x08)
	struct Fmargin Content Padding; // 0x3f0(0x10)
	bool ShouldShowToolTip; // 0x400(0x01)
	bool bEnabled; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FMulticastInlineDelegate OnDismissed; // 0x408(0x10)

	void SetText(struct FText& Text); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTooltipEnabled(bool bInEnabled); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetTooltipEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShowTooltip(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.ShowTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideTooltip(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.HideTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SetTooltipStatus(bool bShouldShowTooltip); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetTooltipStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LockerArchivingTooltip(int32_t EntryPoint); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.ExecuteUbergraph_LockerArchivingTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnDismissed__DelegateSignature(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.OnDismissed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

