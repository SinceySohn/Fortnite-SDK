// WidgetBlueprintGeneratedClass RebootVanIndicator.RebootVanIndicator_C
// Size: 0x610 (Inherited: 0x5d0)
struct URebootVanIndicator_C : UAthenaRebootVanIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UWidgetAnimation* Intro; // 0x5d8(0x08)
	struct UBorder* Border_Nameplate; // 0x5e0(0x08)
	struct UImage* Icon; // 0x5e8(0x08)
	struct UImage* Image_RebootIcon; // 0x5f0(0x08)
	struct UImage* Image_SmallIndicator; // 0x5f8(0x08)
	struct UImage* Image_Van; // 0x600(0x08)
	struct USpacer* IndicatorSpacer; // 0x608(0x08)

	void Construct(); // Function RebootVanIndicator.RebootVanIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RebootVanIndicator(int32_t EntryPoint); // Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator // (Final|UbergraphFunction) // @ game+0xdef49c
};

