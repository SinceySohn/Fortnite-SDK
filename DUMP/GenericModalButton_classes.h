// WidgetBlueprintGeneratedClass GenericModalButton.GenericModalButton_C
// Size: 0x14c1 (Inherited: 0x1430)
struct UGenericModalButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover2; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UBorder* Border_Material; // 0x1448(0x08)
	struct UImage* Image; // 0x1450(0x08)
	struct UImage* ; // 0x1458(0x08)
	struct UOverlay* Overlay_Right_Image; // 0x1460(0x08)
	struct UCommonRichTextBlock* Rich_Text; // 0x1468(0x08)
	struct USizeBox* SizeBox_Height; // 0x1470(0x08)
	struct FText Button text; // 0x1478(0x18)
	struct FSlateColor Text Color; // 0x1490(0x14)
	char pad_14A4[0x4]; // 0x14a4(0x04)
	struct UMaterialInterface* Material Brush; // 0x14a8(0x08)
	struct UTexture2D* Right Image; // 0x14b0(0x08)
	enum class ETextJustify Justifiction; // 0x14b8(0x01)
	bool Auto wrap text; // 0x14b9(0x01)
	bool SimpleHover; // 0x14ba(0x01)
	bool FontSizeOverride; // 0x14bb(0x01)
	int32_t FontSize; // 0x14bc(0x04)
	bool ShearText; // 0x14c0(0x01)

	void SetButtonText(struct FText ButtonText); // Function GenericModalButton.GenericModalButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function GenericModalButton.GenericModalButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function GenericModalButton.GenericModalButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function GenericModalButton.GenericModalButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled); // Function GenericModalButton.GenericModalButton_C.SetBorderShowEffectWhenDisable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GenericModalButton(int32_t EntryPoint); // Function GenericModalButton.GenericModalButton_C.ExecuteUbergraph_GenericModalButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

