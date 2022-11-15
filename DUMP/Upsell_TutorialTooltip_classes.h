// WidgetBlueprintGeneratedClass Upsell_TutorialTooltip.Upsell_TutorialTooltip_C
// Size: 0x406 (Inherited: 0x290)
struct UUpsell_TutorialTooltip_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x298(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2a0(0x08)
	struct UWidgetAnimation* Show; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x2b0(0x08)
	struct UImage* Icon; // 0x2b8(0x08)
	struct UImage* Image_Arrow; // 0x2c0(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2c8(0x08)
	struct FText In Text; // 0x2d0(0x18)
	bool In Auto Wrap Text; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FSlateBrush In Brush; // 0x2f0(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x3b0(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FWidgetTransform In Transform; // 0x3b8(0x38)
	bool Show Icon; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct Fmargin Content Padding; // 0x3f4(0x10)
	bool ShouldShowToolTip; // 0x404(0x01)
	bool bEnabled; // 0x405(0x01)

	void SetText(struct FText Text); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTooltipEnabled(bool bInEnabled); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.SetTooltipEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShowTooltip(); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.ShowTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideTooltip(); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.HideTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Upsell_TutorialTooltip(int32_t EntryPoint); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.ExecuteUbergraph_Upsell_TutorialTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

