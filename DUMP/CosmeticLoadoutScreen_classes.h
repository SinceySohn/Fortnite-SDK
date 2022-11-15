// WidgetBlueprintGeneratedClass CosmeticLoadoutScreen.CosmeticLoadoutScreen_C
// Size: 0x6f8 (Inherited: 0x630)
struct UCosmeticLoadoutScreen_C : UFortCosmeticLoadoutScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UWidgetAnimation* Intro; // 0x638(0x08)
	struct UVerticalBox* LeftSideButtons; // 0x640(0x08)
	struct UCommonTextBlock* NewPresetDisclaimerText; // 0x648(0x08)
	struct UImage* Panel; // 0x650(0x08)
	struct UCommonTextBlock* PresetHeader; // 0x658(0x08)
	struct UCommonTextBlock* RandomDisclaimertext; // 0x660(0x08)
	struct USafeZone* SafeZone_BackButton; // 0x668(0x08)
	struct USafeZone* SafeZone_CloseButton; // 0x670(0x08)
	struct UCommonTextBlock* SaveSubHeader; // 0x678(0x08)
	struct USoloButton_C* xButton_DeleteLoadout; // 0x680(0x08)
	struct USoloButton_C* xButton_RenameLoadout; // 0x688(0x08)
	struct USimpleFeatured_YellowButton_C* xSimpleFeatured_YellowButton; // 0x690(0x08)
	struct FText BrowseHeaderText; // 0x698(0x18)
	struct FText SaveHeaderText; // 0x6b0(0x18)
	struct FText ApplyButtonText; // 0x6c8(0x18)
	struct FText SaveButtonText; // 0x6e0(0x18)

	void BP_OnActivated(); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewTile(enum class EFortLoadoutCardType CardType); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnPreviewTile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFlavorForScreenMode(enum class EFortCosmeticLoadoutScreenMode NewMode); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnFlavorForScreenMode // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CosmeticLoadoutScreen(int32_t EntryPoint); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.ExecuteUbergraph_CosmeticLoadoutScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

