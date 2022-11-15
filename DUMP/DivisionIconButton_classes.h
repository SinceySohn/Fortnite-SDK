// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// Size: 0x1458 (Inherited: 0x1440)
struct UDivisionIconButton_C : UFortShowdownDivisionRankButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Selected; // 0x1448(0x08)
	struct UImage* Image_Hover; // 0x1450(0x08)

	void OnRankButtonSelected(bool bIsSelected); // Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_DivisionIconButton(int32_t EntryPoint); // Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

