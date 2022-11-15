// WidgetBlueprintGeneratedClass WBP_RebootRallyTimer.WBP_RebootRallyTimer_C
// Size: 0x2c0 (Inherited: 0x2a8)
struct UWBP_RebootRallyTimer_C : URebootRallyTimerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UImage* Image_Timer; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_Timer; // 0x2b8(0x08)

	void UpdateRemainingTime(); // Function WBP_RebootRallyTimer.WBP_RebootRallyTimer_C.UpdateRemainingTime // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_RebootRallyTimer(int32_t EntryPoint); // Function WBP_RebootRallyTimer.WBP_RebootRallyTimer_C.ExecuteUbergraph_WBP_RebootRallyTimer // (Final|UbergraphFunction) // @ game+0xdef49c
};

