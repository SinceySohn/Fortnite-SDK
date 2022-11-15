// WidgetBlueprintGeneratedClass Galileo_Countdown.Galileo_Countdown_C
// Size: 0x298 (Inherited: 0x268)
struct UGalileo_Countdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_State; // 0x270(0x08)
	struct UImage* Image_BG; // 0x278(0x08)
	struct UCommonTextBlock* Text_CustomText; // 0x280(0x08)
	struct UCommonTextBlock* Text_LiveIn_Line1; // 0x288(0x08)
	struct UCommonTextBlock* Text_LiveIn_Line2; // 0x290(0x08)

	void EventSetText(struct FText NewText); // Function Galileo_Countdown.Galileo_Countdown_C.EventSetText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventOriginalText(); // Function Galileo_Countdown.Galileo_Countdown_C.EventOriginalText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Galileo_Countdown(int32_t EntryPoint); // Function Galileo_Countdown.Galileo_Countdown_C.ExecuteUbergraph_Galileo_Countdown // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

