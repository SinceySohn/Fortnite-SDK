// WidgetBlueprintGeneratedClass BP_TutorialTooltip.BP_TutorialTooltip_C
// Size: 0x400 (Inherited: 0x2a0)
struct UBP_TutorialTooltip_C : UFortBattlePassTutorialTooltip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2a8(0x08)
	struct UWidgetAnimation* Show; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x2b8(0x08)
	struct UImage* Icon; // 0x2c0(0x08)
	struct UImage* Image_Arrow; // 0x2c8(0x08)
	struct FText In Text; // 0x2d0(0x18)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FSlateBrush In Brush; // 0x2f0(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x3b0(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FWidgetTransform In Transform; // 0x3b8(0x38)
	bool Show Icon; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	double Right; // 0x3f8(0x08)

	void PreConstruct(bool IsDesignTime); // Function BP_TutorialTooltip.BP_TutorialTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShowTooltip(); // Function BP_TutorialTooltip.BP_TutorialTooltip_C.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HideTooltip(); // Function BP_TutorialTooltip.BP_TutorialTooltip_C.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_TutorialTooltip(int32_t EntryPoint); // Function BP_TutorialTooltip.BP_TutorialTooltip_C.ExecuteUbergraph_BP_TutorialTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

