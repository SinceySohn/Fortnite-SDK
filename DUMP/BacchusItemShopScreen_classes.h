// WidgetBlueprintGeneratedClass BacchusItemShopScreen.BacchusItemShopScreen_C
// Size: 0x6f8 (Inherited: 0x6b0)
struct UBacchusItemShopScreen_C : UAthenaItemShopScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct UCommonBorder* NoOffersBox; // 0x6b8(0x08)
	struct UImage* ProgressSpinner; // 0x6c0(0x08)
	struct USafeZone* ; // 0x6c8(0x08)
	struct USafeZone* ; // 0x6d0(0x08)
	struct USafeZone* ; // 0x6d8(0x08)
	struct USafeZone* ; // 0x6e0(0x08)
	struct UWidgetSwitcher* Switcher_Sections; // 0x6e8(0x08)
	struct UVerticalBox* VerticalBox_Sections; // 0x6f0(0x08)

	void Construct(); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSectionsEstablished(bool bEmpty); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.OnSectionsEstablished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEstablishingSections(); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.OnEstablishingSections // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BacchusItemShopScreen(int32_t EntryPoint); // Function BacchusItemShopScreen.BacchusItemShopScreen_C.ExecuteUbergraph_BacchusItemShopScreen // (Final|UbergraphFunction) // @ game+0xdef49c
};

