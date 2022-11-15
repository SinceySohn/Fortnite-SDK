// WidgetBlueprintGeneratedClass LocalUserSettingTitle.LocalUserSettingTitle_C
// Size: 0x1468 (Inherited: 0x1440)
struct ULocalUserSettingTitle_C : UFortLocalUserSettingTitleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x1448(0x08)
	struct UWidgetAnimation* OnHover; // 0x1450(0x08)
	struct UImage* ExpandDirectionTick; // 0x1458(0x08)
	struct USizeBox* SB_EntryContent; // 0x1460(0x08)

	void Construct(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnExpansionChanged(bool bIsExpanded); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LocalUserSettingTitle(int32_t EntryPoint); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

