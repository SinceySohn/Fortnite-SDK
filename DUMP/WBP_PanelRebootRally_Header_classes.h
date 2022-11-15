// WidgetBlueprintGeneratedClass WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C
// Size: 0x320 (Inherited: 0x298)
struct UWBP_PanelRebootRally_Header_C : UFortSidebarPanelRebootHeader {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* float; // 0x2a0(0x08)
	struct UWidgetAnimation* Intro; // 0x2a8(0x08)
	struct UWidgetAnimation* Default; // 0x2b0(0x08)
	struct UImage* Image_Emoticon; // 0x2b8(0x08)
	struct UImage* Image_Glider; // 0x2c0(0x08)
	struct UImage* Image_Pickaxe; // 0x2c8(0x08)
	struct UImage* Image_RebootRallyLogo; // 0x2d0(0x08)
	struct UImage* Image_Wrap; // 0x2d8(0x08)
	struct UImage* Image_ZoomRays; // 0x2e0(0x08)
	struct UCommonRichTextBlock* RichText_RebootRallyDetails; // 0x2e8(0x08)
	struct FText Text_Eligible; // 0x2f0(0x18)
	struct FText Text_Ineligible; // 0x308(0x18)

	void Construct(); // Function WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRebootRallyEligibilityUpdated(bool bEligible); // Function WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C.OnRebootRallyEligibilityUpdated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_PanelRebootRally_Header(int32_t EntryPoint); // Function WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C.ExecuteUbergraph_WBP_PanelRebootRally_Header // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

