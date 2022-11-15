// WidgetBlueprintGeneratedClass ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C
// Size: 0x148f (Inherited: 0x1400)
struct UActivityBrowserModeSetListEntry_C : UFortActivityBrowserModeSetListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1400(0x08)
	struct UWidgetAnimation* SetDisabledColoration; // 0x1408(0x08)
	struct UWidgetAnimation* OnHoverUnhoverRehover; // 0x1410(0x08)
	struct UWidgetAnimation* OnImageLoaded; // 0x1418(0x08)
	struct UCategoryButton_C* CategoryButton; // 0x1420(0x08)
	struct UCommonTextBlock* DisabledWarningMessage; // 0x1428(0x08)
	struct UOverlay* Ovr_Primary; // 0x1430(0x08)
	struct UOverlay* OvrDisabledWarning; // 0x1438(0x08)
	struct USizeBox* SizeBox_Primary; // 0x1440(0x08)
	struct UImage* Thumbnail; // 0x1448(0x08)
	struct FName ThumbnailImageParam; // 0x1450(0x04)
	struct FName ThumbnailAlphaParam; // 0x1454(0x04)
	bool IsKeyArtValid; // 0x1458(0x01)
	char pad_1459[0x7]; // 0x1459(0x07)
	struct UTexture* DefaultImage; // 0x1460(0x08)
	double DisabledClickDuration; // 0x1468(0x08)
	bool IsActivityValid; // 0x1470(0x01)
	char pad_1471[0x7]; // 0x1471(0x07)
	struct FVector2D TileSize; // 0x1478(0x10)
	struct FName ThumbnailOverlayOpacityParam; // 0x1488(0x04)
	bool IsInHoveredState; // 0x148c(0x01)
	bool Pad Left; // 0x148d(0x01)
	bool Pad Right; // 0x148e(0x01)

	void ResetSetDisabledColorationAnimation(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ResetSetDisabledColorationAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDisabledState(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.RefreshDisabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnActivityNameSet(struct FText& ActivityName); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnActivityNameSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSavedActivitySet(bool IsSaved); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnSavedActivitySet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetHoveredState(bool IsHovered); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.SetHoveredState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPartySizeChanged(int32_t PartySize); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPartySizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ActivityBrowserModeSetListEntry(int32_t EntryPoint); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ExecuteUbergraph_ActivityBrowserModeSetListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

