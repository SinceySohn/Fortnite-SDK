// WidgetBlueprintGeneratedClass BattlePassItemTracker.BattlePassItemTracker_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct UBattlePassItemTracker_C : UAthenaBattlePassItemTracker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* InitialState; // 0x2a8(0x08)
	struct UWidgetAnimation* SetNumberVisible; // 0x2b0(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x2b8(0x08)
	struct UWidgetAnimation* Increase; // 0x2c0(0x08)

	void HandleInitialState(); // Function BattlePassItemTracker.BattlePassItemTracker_C.HandleInitialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleNumberVisible(); // Function BattlePassItemTracker.BattlePassItemTracker_C.HandleNumberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleIncrease(); // Function BattlePassItemTracker.BattlePassItemTracker_C.HandleIncrease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleIntro(); // Function BattlePassItemTracker.BattlePassItemTracker_C.HandleIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterpEnded(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // Function BattlePassItemTracker.BattlePassItemTracker_C.OnInterpEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInterpStarted(); // Function BattlePassItemTracker.BattlePassItemTracker_C.OnInterpStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassItemTracker(int32_t EntryPoint); // Function BattlePassItemTracker.BattlePassItemTracker_C.ExecuteUbergraph_BattlePassItemTracker // (Final|UbergraphFunction) // @ game+0xdef49c
};

