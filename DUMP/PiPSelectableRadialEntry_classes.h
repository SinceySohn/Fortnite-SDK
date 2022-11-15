// WidgetBlueprintGeneratedClass PiPSelectableRadialEntry.PiPSelectableRadialEntry_C
// Size: 0x14c0 (Inherited: 0x1490)
struct UPiPSelectableRadialEntry_C : UFortRadialPickerEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Selected; // 0x1498(0x08)
	struct FLinearColor DefaultSelectedColor; // 0x14a0(0x10)
	struct FLinearColor DefaultUnselectedColor; // 0x14b0(0x10)

	void BP_UpdateSelectionColor(bool Selected); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_UpdateSelectionColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAvailabilityChanged(bool bIsAvailable); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PiPSelectableRadialEntry(int32_t EntryPoint); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.ExecuteUbergraph_PiPSelectableRadialEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

