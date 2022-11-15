// WidgetBlueprintGeneratedClass LocalUserSettingButton.LocalUserSettingButton_C
// Size: 0x1470 (Inherited: 0x1450)
struct ULocalUserSettingButton_C : UFortLocalUserSettingButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* OnHover; // 0x1458(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x1460(0x08)
	struct UImage* Image_AnimatedArrow; // 0x1468(0x08)

	void BP_OnHovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LocalUserSettingButton(int32_t EntryPoint); // Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

