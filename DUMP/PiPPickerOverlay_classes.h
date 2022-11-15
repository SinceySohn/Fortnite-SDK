// WidgetBlueprintGeneratedClass PiPPickerOverlay.PiPPickerOverlay_C
// Size: 0x4d0 (Inherited: 0x498)
struct UPiPPickerOverlay_C : UFortPickerOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Intro; // 0x4a0(0x08)
	struct UWidgetAnimation* SelectionSet; // 0x4a8(0x08)
	struct UImage* AlignmentDesignViewOnlyu; // 0x4b0(0x08)
	struct UImage* Backplate_Shadow; // 0x4b8(0x08)
	struct UPictureInPictureClient* PictureInPictureClient; // 0x4c0(0x08)
	struct UPictureInPictureMediaController* PiPMediaController; // 0x4c8(0x08)

	void BP_OnItemChosen(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnItemChosen // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlaySelectionAnimation(); // Function PiPPickerOverlay.PiPPickerOverlay_C.PlaySelectionAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PiPPickerOverlay.PiPPickerOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PiPPickerOverlay(int32_t EntryPoint); // Function PiPPickerOverlay.PiPPickerOverlay_C.ExecuteUbergraph_PiPPickerOverlay // (Final|UbergraphFunction) // @ game+0xdef49c
};

