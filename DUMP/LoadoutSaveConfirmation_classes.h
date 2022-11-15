// WidgetBlueprintGeneratedClass LoadoutSaveConfirmation.LoadoutSaveConfirmation_C
// Size: 0x5d8 (Inherited: 0x568)
struct ULoadoutSaveConfirmation_C : UFortLoadoutSaveConfirmation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UImage* ; // 0x570(0x08)
	struct UImage* Image_Separator_Down; // 0x578(0x08)
	struct UImage* Image_Separator_Up; // 0x580(0x08)
	struct ULightbox_C* Lightbox; // 0x588(0x08)
	struct USafeZone* ; // 0x590(0x08)
	struct UWidgetSwitcher* SwitcherExplanation; // 0x598(0x08)
	struct UWidgetSwitcher* SwitcherTitle; // 0x5a0(0x08)
	struct UCommonTextBlock* TextBlockCREATE; // 0x5a8(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation; // 0x5b0(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation_SaveOnly; // 0x5b8(0x08)
	struct UCommonTextBlock* TextBlockOR; // 0x5c0(0x08)
	struct UCommonTextBlock* TextBlockTitle; // 0x5c8(0x08)
	struct UCommonTextBlock* TextBlockTitle_SaveOnly; // 0x5d0(0x08)

	void Toggle Save as New Visibility(bool CanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.Toggle Save as New Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCanSaveAsNew(bool bCanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.OnCanSaveAsNew // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LoadoutSaveConfirmation(int32_t EntryPoint); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.ExecuteUbergraph_LoadoutSaveConfirmation // (Final|UbergraphFunction) // @ game+0xdef49c
};

