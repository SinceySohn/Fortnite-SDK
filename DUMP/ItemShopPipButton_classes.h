// WidgetBlueprintGeneratedClass ItemShopPipButton.ItemShopPipButton_C
// Size: 0x14f8 (Inherited: 0x14d0)
struct UItemShopPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover; // 0x14d8(0x08)
	struct UWidgetAnimation* Selected; // 0x14e0(0x08)
	struct UImage* BacchusMobileShadow; // 0x14e8(0x08)
	struct UImage* PIP; // 0x14f0(0x08)

	void PreConstruct(bool IsDesignTime); // Function ItemShopPipButton.ItemShopPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ItemShopPipButton.ItemShopPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemShopPipButton(int32_t EntryPoint); // Function ItemShopPipButton.ItemShopPipButton_C.ExecuteUbergraph_ItemShopPipButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

