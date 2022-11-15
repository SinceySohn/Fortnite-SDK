// WidgetBlueprintGeneratedClass ProgressiveTagsBase.ProgressiveTagsBase_C
// Size: 0x2f0 (Inherited: 0x268)
struct UProgressiveTagsBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* Tag_Background; // 0x270(0x08)
	struct UImage* Tag_Image; // 0x278(0x08)
	struct UCommonTextBlock* Tag_Text; // 0x280(0x08)
	struct FLinearColor Background Color; // 0x288(0x10)
	struct FSlateColor Text Color; // 0x298(0x14)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FText Text; // 0x2b0(0x18)
	struct UTexture2D* Image Texture; // 0x2c8(0x08)
	double Image Rotation; // 0x2d0(0x08)
	struct FLinearColor Image Color; // 0x2d8(0x10)
	struct UMaterialInterface* Image Material; // 0x2e8(0x08)

	void Update Image(struct UTexture2D* Texture, struct UMaterialInterface* Material, struct FLinearColor Color, double Angle); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.Update Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColor(struct FLinearColor Background Color, struct FSlateColor Text Color); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(struct FText Text); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveTagsBase(int32_t EntryPoint); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.ExecuteUbergraph_ProgressiveTagsBase // (Final|UbergraphFunction) // @ game+0xdef49c
};

