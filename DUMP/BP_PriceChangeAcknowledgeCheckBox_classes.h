// WidgetBlueprintGeneratedClass BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C
// Size: 0x1418 (Inherited: 0x13e0)
struct UBP_PriceChangeAcknowledgeCheckBox_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* Hover; // 0x13e8(0x08)
	struct UWidgetAnimation* Check; // 0x13f0(0x08)
	struct UWidgetAnimation* burst; // 0x13f8(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1400(0x08)
	struct UImage* Image_Check; // 0x1408(0x08)
	struct UImage* Image_Checkbox; // 0x1410(0x08)

	void BP_OnHovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox(int32_t EntryPoint); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox // (Final|UbergraphFunction) // @ game+0xdef49c
};

