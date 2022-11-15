// Class PictureInPictureUI.PictureInPictureBladeMenuButton
// Size: 0x1430 (Inherited: 0x1430)
struct UPictureInPictureBladeMenuButton : UCommonButtonLegacy {

	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPartnerListUpdated(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated // (Final|Native|Private) // @ game+0x242ec94
	void HandlePiPLogoutSuccess(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess // (Final|Native|Public) // @ game+0x2a62158
	void HandlePiPLoginSuccess(); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess // (Final|Native|Public) // @ game+0x2a62158
	void HandlePiPEnabled(bool Enabled); // Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled // (Final|Native|Public) // @ game+0x2be6294
};

// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
// Size: 0x60 (Inherited: 0x28)
struct UPictureInPictureLoadingScreenOverlayAction : UFortUIGameFeatureAction {
	struct USubtitleDisplayNative* SubtitleDisplay; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// Class PictureInPictureUI.PictureInPictureMetadataOverlay
// Size: 0x3a8 (Inherited: 0x3a8)
struct UPictureInPictureMetadataOverlay : UCommonActivatableWidget {

	void OnMediaStarted(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOnPIPVideoStarted(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted // (Final|Native|Protected) // @ game+0x695cb14
	void HandleOnPIPVideoResumed(); // Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed // (Final|Native|Protected) // @ game+0x695cb14
};

// Class PictureInPictureUI.PictureInPicturePanelWidget
// Size: 0x5b8 (Inherited: 0x3a8)
struct UPictureInPicturePanelWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct USizeBox* Video_Size_Box; // 0x3b0(0x08)
	struct FVector2D StandardVideoSize; // 0x3b8(0x10)
	struct FVector2D StandardVideoTranslation; // 0x3c8(0x10)
	struct UImage* Image_Movie; // 0x3d8(0x08)
	struct UCommonLazyImage* Image_Thumbnail_Prev; // 0x3e0(0x08)
	struct UCommonLazyImage* Image_Thumbnail_Next; // 0x3e8(0x08)
	struct UNamedSlot* MetadataOverlaySlot; // 0x3f0(0x08)
	struct UOverlay* Overlay_Main; // 0x3f8(0x08)
	struct UOverlay* Overlay_Keybind; // 0x400(0x08)
	struct FDataTableRowHandle PressedObjectInputAction; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
	struct UPictureInPicturePartnerControls* CurrentPartner; // 0x420(0x08)
	bool bEnableUCPCheck; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UCommonActivatableWidget* SourcePickerClass; // 0x430(0x08)
	struct USoundSourceBus* SourceBus; // 0x438(0x08)
	struct UCommonActionWidget* ToggleActionWidget; // 0x440(0x08)
	struct UCommonActivatableWidget* SourcePickerWidget; // 0x448(0x08)
	struct UPictureInPicturePlayer* VideoWidget; // 0x450(0x08)
	char pad_458[0x20]; // 0x458(0x20)
	struct UAudioComponent* PIPSoundComponent; // 0x478(0x08)
	struct FPiPPartnerSource CurrentSource; // 0x480(0x128)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct USubtitleDisplay* Subtitles; // 0x5b0(0x08)

	void ToggleFullScreenPiP(); // Function PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP // (Final|Native|Protected) // @ game+0x695cfc0
	void ShowDebugInfo(bool bShow); // Function PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets); // Function PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x695cef4
	void IntentionalDeactivate(); // Function PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate // (Final|Native|Protected) // @ game+0x695cec4
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap // (Final|Native|Protected) // @ game+0x695ce44
	void HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged // (Final|Native|Protected|HasOutParms) // @ game+0x2b6d30c
	void HandleOnPartnerListUpdated(); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated // (Final|Native|Protected) // @ game+0x18bb070
	void HandleOnPartnerChanged(struct UPictureInPicturePartnerControls* NewPartnerControls); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged // (Final|Native|Protected) // @ game+0x695cb28
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled); // Function PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged // (Final|Native|Protected) // @ game+0x2852e20
	void FlipPIPAudioSubmix(bool bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce); // Function PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x695c9c4
	void DestroyPIPSoundComponent(); // Function PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent // (Final|Native|Private|BlueprintCallable) // @ game+0x695c9b0
	void AutoEnableController(); // Function PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController // (Final|Native|Private) // @ game+0x695c99c
};

// Class PictureInPictureUI.PictureInPictureSourcePicker
// Size: 0x5a0 (Inherited: 0x3a8)
struct UPictureInPictureSourcePicker : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FVector2D FullScreenTranslation; // 0x3b0(0x10)
	struct FVector2D StandardTranslation; // 0x3c0(0x10)
	struct UVerticalBox* VerticalBox_Main; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct FSlateBrush FullScreenActionBrush; // 0x3e0(0xc0)
	struct FSlateBrush StandardScreenActionBrush; // 0x4a0(0xc0)
	char pad_560[0x1]; // 0x560(0x01)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x561(0x03)
	char pad_564[0x4]; // 0x564(0x04)
	struct UCommonTextBlock* Text_ItemName; // 0x568(0x08)
	struct UFortPickerOverlay* PickerOverlay_MediaSource; // 0x570(0x08)
	struct UOverlay* Overlay_Main; // 0x578(0x08)
	struct UTexture2D* DefaultItemTexture; // 0x580(0x08)
	struct UPictureInPictureMediaController* CurrentPartner; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)

	void HandleOnPartnerSourceChanged(struct TArray<struct FPiPPartnerSource>& CurrentSources); // Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged // (Final|Native|Private|HasOutParms) // @ game+0x695cda8
	void HandleOnPartnerChanged(struct UPictureInPicturePartnerControls* NewPartner); // Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged // (Final|Native|Private) // @ game+0x695cd24
};

