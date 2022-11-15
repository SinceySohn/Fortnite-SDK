// WidgetBlueprintGeneratedClass BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C
// Size: 0x14f2 (Inherited: 0x14d0)
struct UBacchusItemShopCreatorButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover; // 0x14d8(0x08)
	struct UImage* Backing; // 0x14e0(0x08)
	struct UImage* IMG_Arrow; // 0x14e8(0x08)
	bool bFlipArrow; // 0x14f0(0x01)
	bool bIsTop; // 0x14f1(0x01)

	void BP_OnHovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BacchusItemShopCreatorButton(int32_t EntryPoint); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.ExecuteUbergraph_BacchusItemShopCreatorButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

