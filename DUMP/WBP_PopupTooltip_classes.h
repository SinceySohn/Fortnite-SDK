// WidgetBlueprintGeneratedClass WBP_PopupTooltip.WBP_PopupTooltip_C
// Size: 0x319 (Inherited: 0x268)
struct UWBP_PopupTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* HideAnimation; // 0x270(0x08)
	struct UWidgetAnimation* ShowAnimation; // 0x278(0x08)
	struct UImage* Image_Arrow; // 0x280(0x08)
	struct UCommonRichTextBlock* RichText_SecondaryLine; // 0x288(0x08)
	struct UCommonTextBlock* Text_MainText; // 0x290(0x08)
	struct FText FirstLineText; // 0x298(0x18)
	struct FText SecondLineRichText; // 0x2b0(0x18)
	struct Fmargin ArrowPadding; // 0x2c8(0x10)
	enum class EHorizontalAlignment ArrowHorizontalAlignment; // 0x2d8(0x01)
	enum class EVerticalAlignment ArrowVerticalAlignment; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FWidgetTransform ArrowTransform; // 0x2e0(0x38)
	bool IsShowing; // 0x318(0x01)

	void SetFirstLineText(struct FText FirstLineText); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.SetFirstLineText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HideNotification(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.HideNotification // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowNotification(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.ShowNotification // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_PopupTooltip(int32_t EntryPoint); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.ExecuteUbergraph_WBP_PopupTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

