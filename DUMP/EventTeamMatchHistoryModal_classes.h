// WidgetBlueprintGeneratedClass EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C
// Size: 0x5a0 (Inherited: 0x540)
struct UEventTeamMatchHistoryModal_C : UFortEventTeamMatchHistoryModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* Intro; // 0x548(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x550(0x08)
	struct UCommonBorder* ; // 0x558(0x08)
	struct UEventMatchHistoryTournamentInfo_C* EventMatchHistoryTournamentInfo; // 0x560(0x08)
	struct UImage* Image_Background; // 0x568(0x08)
	struct USafeZone* ; // 0x570(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x578(0x08)
	struct UCommonTextBlock* Text_EventLabel; // 0x580(0x08)
	struct UCommonTextBlock* Text_TeamLabel; // 0x588(0x08)
	struct UCommonTextBlock* Text_WindowTittle; // 0x590(0x08)
	struct UVerticalBox* ; // 0x598(0x08)

	void Set Up Match History Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.Set Up Match History Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetupMatchHistory(struct FString TournamentId, struct FString EventWindowId); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventTeamMatchHistoryModal(int32_t EntryPoint); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

