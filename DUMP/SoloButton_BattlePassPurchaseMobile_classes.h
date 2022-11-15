// WidgetBlueprintGeneratedClass SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C
// Size: 0x14a1 (Inherited: 0x1430)
struct USoloButton_BattlePassPurchaseMobile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Pressed; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UBorder* Border_Container; // 0x1448(0x08)
	struct UImage* ButtonBacking; // 0x1450(0x08)
	struct UScaleBox* ; // 0x1458(0x08)
	struct USizeBox* SizeBox_Control; // 0x1460(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x1468(0x08)
	struct FText Button Description; // 0x1470(0x18)
	bool FontSizeOveride; // 0x1488(0x01)
	char pad_1489[0x3]; // 0x1489(0x03)
	int32_t FontSize; // 0x148c(0x04)
	struct Fmargin Padding Overide; // 0x1490(0x10)
	bool PaddingOveride; // 0x14a0(0x01)

	void SetText(struct FText Text); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSize(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile(int32_t EntryPoint); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile // (Final|UbergraphFunction) // @ game+0xdef49c
};

