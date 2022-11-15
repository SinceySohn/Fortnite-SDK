// WidgetBlueprintGeneratedClass WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C
// Size: 0x4c0 (Inherited: 0x490)
struct UWBP_Modal_ReviewYourSettings_C : UFortReviewYourSettingsModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UImage* Containment; // 0x498(0x08)
	struct USafeZone* ContentSZ; // 0x4a0(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x4a8(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x4b0(0x08)
	struct USafeZone* MobileClose; // 0x4b8(0x08)

	void OnModalBackout(); // Function WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_Modal_ReviewYourSettings(int32_t EntryPoint); // Function WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C.ExecuteUbergraph_WBP_Modal_ReviewYourSettings // (Final|UbergraphFunction) // @ game+0xdef49c
};

