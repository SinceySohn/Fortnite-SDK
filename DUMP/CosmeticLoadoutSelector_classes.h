// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
// Size: 0x2d8 (Inherited: 0x2b8)
struct UCosmeticLoadoutSelector_C : UFortCosmeticLoadoutSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBorder* Background; // 0x2c0(0x08)
	struct UCommonActionWidget* Left_InputActionDisplay; // 0x2c8(0x08)
	struct UCommonActionWidget* Right_InputActionDisplay; // 0x2d0(0x08)

	void OnLoadoutSet(int32_t Selection); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnLoadoutSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNumLoadoutsFound(int32_t NumLoadouts); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnNumLoadoutsFound // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32_t EntryPoint); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.ExecuteUbergraph_CosmeticLoadoutSelector // (Final|UbergraphFunction) // @ game+0xdef49c
};

