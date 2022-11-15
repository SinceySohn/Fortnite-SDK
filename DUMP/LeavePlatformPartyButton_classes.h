// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
// Size: 0x1448 (Inherited: 0x1430)
struct ULeavePlatformPartyButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnHover; // 0x1438(0x08)
	struct UCommonTextBlock* ; // 0x1440(0x08)

	void SetText(struct FText New Text); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LeavePlatformPartyButton(int32_t EntryPoint); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

