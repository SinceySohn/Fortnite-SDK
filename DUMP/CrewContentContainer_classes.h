// WidgetBlueprintGeneratedClass CrewContentContainer.CrewContentContainer_C
// Size: 0x460 (Inherited: 0x448)
struct UCrewContentContainer_C : UCrewSubscriptionContentContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x450(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x458(0x08)

	void OnTabSelected(int32_t TabIndex); // Function CrewContentContainer.CrewContentContainer_C.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function CrewContentContainer.CrewContentContainer_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CrewContentContainer(int32_t EntryPoint); // Function CrewContentContainer.CrewContentContainer_C.ExecuteUbergraph_CrewContentContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

