// WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C
// Size: 0x440 (Inherited: 0x428)
struct USquadSelection_C : UFortSquadSelectionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UCloseButton_C* Mobile_CloseButton; // 0x430(0x08)
	struct USafeZone* ; // 0x438(0x08)

	void OnLocalPlayerParticipationChanged(bool bIsParticipating); // Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SquadSelection.SquadSelection_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SquadSelection(int32_t EntryPoint); // Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

