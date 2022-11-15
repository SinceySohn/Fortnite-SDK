// WidgetBlueprintGeneratedClass BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C
// Size: 0x1448 (Inherited: 0x13f0)
struct UBP_BuyResourcesBundleCheckBox_C : UFortBattlePassCheckBoxButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13f0(0x08)
	struct UWidgetAnimation* Hover; // 0x13f8(0x08)
	struct UWidgetAnimation* Check; // 0x1400(0x08)
	struct UWidgetAnimation* burst; // 0x1408(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1410(0x08)
	struct UImage* Image_burst; // 0x1418(0x08)
	struct UImage* Image_Check; // 0x1420(0x08)
	struct UImage* Image_Checkbox; // 0x1428(0x08)
	struct UCommonRichTextBlock* Text_Default; // 0x1430(0x08)
	struct UCommonRichTextBlock* Text_OneTime; // 0x1438(0x08)
	struct UWidgetSwitcher* ; // 0x1440(0x08)

	void OnStateChanged(bool bNewIsChecked); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32_t EntryPoint); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.ExecuteUbergraph_BP_BuyResourcesBundleCheckBox // (Final|UbergraphFunction) // @ game+0xdef49c
};

