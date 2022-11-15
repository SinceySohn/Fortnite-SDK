// WidgetBlueprintGeneratedClass ErrorInfoFlag.ErrorInfoFlag_C
// Size: 0x2b0 (Inherited: 0x268)
struct UErrorInfoFlag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Image_ErrorBG; // 0x270(0x08)
	struct UImage* Image_ErrorBG_Accent; // 0x278(0x08)
	struct UImage* OptionalIcon; // 0x280(0x08)
	struct URichTextBlock* RichText_UserInformation; // 0x288(0x08)
	struct UScaleBox* ScaleBox_Mobile; // 0x290(0x08)
	struct FLinearColor AccentColor; // 0x298(0x10)
	struct UMaterialInterface* IconMaterial; // 0x2a8(0x08)

	void UpdateIconMaterial(struct UMaterialInterface* Material); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateIconMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateAccentColor(struct FLinearColor Color); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateAccentColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateText(struct FText Text); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ErrorInfoFlag.ErrorInfoFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ErrorInfoFlag.ErrorInfoFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ErrorInfoFlag(int32_t EntryPoint); // Function ErrorInfoFlag.ErrorInfoFlag_C.ExecuteUbergraph_ErrorInfoFlag // (Final|UbergraphFunction) // @ game+0xdef49c
};

