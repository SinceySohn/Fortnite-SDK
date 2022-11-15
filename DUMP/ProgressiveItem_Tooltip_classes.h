// WidgetBlueprintGeneratedClass ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C
// Size: 0x3d6 (Inherited: 0x268)
struct UProgressiveItem_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x270(0x08)
	struct UWidgetAnimation* burstLoop; // 0x278(0x08)
	struct UWidgetAnimation* Show; // 0x280(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UImage* Image_Arrow; // 0x298(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2a0(0x08)
	struct FText Tooltip Text; // 0x2a8(0x18)
	struct FSlateBrush In Brush; // 0x2c0(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x380(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct FWidgetTransform In Transform; // 0x388(0x38)
	bool Show Icon; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct Fmargin Content Padding; // 0x3c4(0x10)
	bool ShouldShowToolTip; // 0x3d4(0x01)
	bool In Auto Wrap Text; // 0x3d5(0x01)

	void Update Text(struct FText& InText); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Update Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Finished_BFEB1DDE42F9DC9A32C103B86238359F(); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Finished_BFEB1DDE42F9DC9A32C103B86238359F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ToggleTooltip(bool Visible); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.ToggleTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveItem_Tooltip(int32_t EntryPoint); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.ExecuteUbergraph_ProgressiveItem_Tooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

