// WidgetBlueprintGeneratedClass SupportModal.SupportModal_C
// Size: 0x410 (Inherited: 0x3b8)
struct USupportModal_C : UAthenaItemShopTimerInfoModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* ShowUp; // 0x3c0(0x08)
	struct UCommonRichTextBlock* ; // 0x3c8(0x08)
	struct UImage* Containment; // 0x3d0(0x08)
	struct USafeZone* ContentSZ; // 0x3d8(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x3e0(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x3e8(0x08)
	struct USafeZone* MobileClose; // 0x3f0(0x08)
	struct UScrollBox* PrimaryScrollBox; // 0x3f8(0x08)
	struct UImage* T-Icon-Backpacks-220-FarmerFemale-L; // 0x400(0x08)
	struct UVerticalBox* VBox_PlatformSpecific; // 0x408(0x08)

	void OnModalBackout(); // Function SupportModal.SupportModal_C.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function SupportModal.SupportModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupportModal(int32_t EntryPoint); // Function SupportModal.SupportModal_C.ExecuteUbergraph_SupportModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

