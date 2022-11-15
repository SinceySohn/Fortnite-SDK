// WidgetBlueprintGeneratedClass BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C
// Size: 0x148a (Inherited: 0x1440)
struct UBacchusItemShopNavigationButton_C : UAthenaItemShopNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x1448(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x1450(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x1458(0x08)
	struct UWidgetAnimation* InitialState; // 0x1460(0x08)
	struct UImage* Backing; // 0x1468(0x08)
	struct UBorder* BorderButton; // 0x1470(0x08)
	struct UBorder* GridBoundBorder; // 0x1478(0x08)
	struct UImage* IMG_Arrow; // 0x1480(0x08)
	bool bFlipArrow; // 0x1488(0x01)
	bool bIsTop; // 0x1489(0x01)

	void PreConstruct(bool IsDesignTime); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BacchusItemShopNavigationButton(int32_t EntryPoint); // Function BacchusItemShopNavigationButton.BacchusItemShopNavigationButton_C.ExecuteUbergraph_BacchusItemShopNavigationButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

