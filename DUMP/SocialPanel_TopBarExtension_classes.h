// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// Size: 0x1458 (Inherited: 0x1430)
struct USocialPanel_TopBarExtension_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hovered; // 0x1438(0x08)
	struct UImage* Arrow; // 0x1440(0x08)
	struct UImage* Image_PlatformIcon; // 0x1448(0x08)
	struct UMiniPartyBar_C* MiniPartyBar; // 0x1450(0x08)

	void BP_OnHovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32_t EntryPoint); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension // (Final|UbergraphFunction) // @ game+0xdef49c
};

