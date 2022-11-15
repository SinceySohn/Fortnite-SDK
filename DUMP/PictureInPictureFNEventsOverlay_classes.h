// WidgetBlueprintGeneratedClass PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C
// Size: 0x7a9 (Inherited: 0x5b8)
struct UPictureInPictureFNEventsOverlay_C : UPictureInPicturePanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UWidgetAnimation* SlideVidDown; // 0x5c0(0x08)
	struct UWidgetAnimation* SlideVidUp; // 0x5c8(0x08)
	struct UWidgetAnimation* Intro; // 0x5d0(0x08)
	struct UBorder* ErrorMessage; // 0x5d8(0x08)
	struct UBorder* HideInstructions; // 0x5e0(0x08)
	struct UImage* Highlight; // 0x5e8(0x08)
	struct UImage* Shadow; // 0x5f0(0x08)
	struct UCommonRichTextBlock* Text_ErrorInstructions; // 0x5f8(0x08)
	struct UCommonRichTextBlock* Text_HideInstructions; // 0x600(0x08)
	struct FString LoginState; // 0x608(0x10)
	struct FGameplayTagContainer ShowForPiPTags; // 0x618(0x20)
	struct FGameplayTagContainer HideForPiPTags; // 0x638(0x20)
	struct Fmargin FrontendPadding; // 0x658(0x10)
	struct FPiPPartnerSource ErrorSource; // 0x668(0x128)
	struct FText Text_BaseErrorMessage; // 0x790(0x18)
	bool InstructionsShown; // 0x7a8(0x01)

	void Construct(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ShowError(int32_t ErrorNumber, struct FString ErrorMessage); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ShowError // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowHideInstructions(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ShowHideInstructions // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32_t EntryPoint); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ExecuteUbergraph_PictureInPictureFNEventsOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

