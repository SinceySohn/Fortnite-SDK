// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
// Size: 0x558 (Inherited: 0x518)
struct UHealthWarningScreen_C : UHealthWarningScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UWidgetAnimation* FinishingAnim; // 0x520(0x08)
	struct USafeZone* ; // 0x528(0x08)
	struct FMulticastInlineDelegate HealthWarningCompleted; // 0x530(0x10)
	struct FTimerHandle ShowTimer; // 0x540(0x08)
	struct Fmargin IconPadding; // 0x548(0x10)

	void HandleShowTimerComplete(); // Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_HealthWarningScreen(int32_t EntryPoint); // Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen // (Final|UbergraphFunction) // @ game+0xdef49c
	void HealthWarningCompleted__DelegateSignature(); // Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

