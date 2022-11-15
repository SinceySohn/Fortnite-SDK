// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
// Size: 0x2e8 (Inherited: 0x2d0)
struct UQualityLevelSelectTimer_C : UFortHUDQualityLevelSelectTimer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	double TextScaleUnderOneSecond; // 0x2d8(0x08)
	double TextScaleOverOneSecond; // 0x2e0(0x08)

	void UpdateTextScale(double TimeRemaining); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnProgressStarted(float Duration); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnProgressEnded(); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTimeRemainingChanged(float TimeRemaining); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_QualityLevelSelectTimer(int32_t EntryPoint); // Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer // (Final|UbergraphFunction) // @ game+0xdef49c
};

