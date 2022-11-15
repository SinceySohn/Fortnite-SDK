// WidgetBlueprintGeneratedClass RichTextButton.RichTextButton_C
// Size: 0x14a1 (Inherited: 0x1430)
struct URichTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover2; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UBorder* Border_Material; // 0x1448(0x08)
	struct UCommonRichTextBlock* Rich_Text; // 0x1450(0x08)
	struct FText Button text; // 0x1458(0x18)
	struct FSlateColor Text Color; // 0x1470(0x14)
	char pad_1484[0x4]; // 0x1484(0x04)
	struct UMaterialInterface* Material Brush; // 0x1488(0x08)
	struct UTexture2D* Right Image; // 0x1490(0x08)
	enum class ETextJustify Justifiction; // 0x1498(0x01)
	bool Auto wrap text; // 0x1499(0x01)
	bool SimpleHover; // 0x149a(0x01)
	bool FontSizeOverride; // 0x149b(0x01)
	int32_t FontSize; // 0x149c(0x04)
	bool ShearText; // 0x14a0(0x01)

	void PreConstruct(bool IsDesignTime); // Function RichTextButton.RichTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RichTextButton(int32_t EntryPoint); // Function RichTextButton.RichTextButton_C.ExecuteUbergraph_RichTextButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

