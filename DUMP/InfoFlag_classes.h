// WidgetBlueprintGeneratedClass InfoFlag.InfoFlag_C
// Size: 0x2e0 (Inherited: 0x268)
struct UInfoFlag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BG_Gradient; // 0x270(0x08)
	struct UCommonRichTextBlock* ; // 0x278(0x08)
	struct USizeBox* ; // 0x280(0x08)
	struct UImage* Trim; // 0x288(0x08)
	struct FLinearColor TrimColor; // 0x290(0x10)
	struct FLinearColor GradientColor; // 0x2a0(0x10)
	double TrimWidth; // 0x2b0(0x08)
	struct FText InfoText; // 0x2b8(0x18)
	double GradientDistance; // 0x2d0(0x08)
	double MaxWidth; // 0x2d8(0x08)

	void UpdateText(struct FText& Text); // Function InfoFlag.InfoFlag_C.UpdateText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateGradientColor(struct FLinearColor Color); // Function InfoFlag.InfoFlag_C.UpdateGradientColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTrimColor(struct FLinearColor Color); // Function InfoFlag.InfoFlag_C.UpdateTrimColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function InfoFlag.InfoFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function InfoFlag.InfoFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_InfoFlag(int32_t EntryPoint); // Function InfoFlag.InfoFlag_C.ExecuteUbergraph_InfoFlag // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

