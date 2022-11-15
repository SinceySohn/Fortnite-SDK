// WidgetBlueprintGeneratedClass RebootCardIndicator.RebootCardIndicator_C
// Size: 0x628 (Inherited: 0x5d0)
struct URebootCardIndicator_C : UAthenaRebootCardIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UWidgetAnimation* UpdateTime; // 0x5d8(0x08)
	struct UBorder* Border_Nameplate; // 0x5e0(0x08)
	struct UImage* burst; // 0x5e8(0x08)
	struct UImage* Image_RebootIcon; // 0x5f0(0x08)
	struct USpacer* IndicatorSpacer; // 0x5f8(0x08)
	struct UHorizontalBox* RebootCountdownContainer; // 0x600(0x08)
	struct UCommonTextBlock* TimeText; // 0x608(0x08)
	double CurTime; // 0x610(0x08)
	double EndTime; // 0x618(0x08)
	struct FTimerHandle TimerHandle; // 0x620(0x08)

	void bp_UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld); // Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleDisplayForSelf(bool bSelf); // Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RebootCardIndicator(int32_t EntryPoint); // Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

