// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
// Size: 0x329 (Inherited: 0x2e8)
struct UAthenaLockedStyleNotification_C : UAthenaCosmeticUnlockingInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* DataUpdate; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct USizeBox* SizeBox_ProgressInfo; // 0x300(0x08)
	struct USizeBox* SizeBox_StaticText; // 0x308(0x08)
	struct UWidgetSwitcher* Switcher_LockedInfo; // 0x310(0x08)
	struct FTimerHandle AutoHideTimer; // 0x318(0x08)
	double HideDelayTime; // 0x320(0x08)
	bool AutoHide; // 0x328(0x01)

	void OnUnlockingInfoSet(bool bShowProgression); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RequestUpdateAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void RequestIntroAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RequestOutroAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OutroFinished(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32_t EntryPoint); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

