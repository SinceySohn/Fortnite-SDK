// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// Size: 0x1480 (Inherited: 0x1440)
struct ULiveStreamMenuButtonToggle_C : ULiveStreamMenuToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UImage* Art; // 0x1450(0x08)
	struct UImage* ButtonBacking; // 0x1458(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1460(0x08)
	struct UOverlay* IconBox; // 0x1468(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x1470(0x08)
	struct UImage* ; // 0x1478(0x08)

	void RefreshButton(bool IsLiveStreamEnabled); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LiveStreamMenuButtonToggle(int32_t EntryPoint); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

