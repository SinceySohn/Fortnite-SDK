// WidgetBlueprintGeneratedClass BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
// Size: 0x319 (Inherited: 0x2b8)
struct UBattlePassPageUnlockedToast_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2c0(0x08)
	struct UWidgetAnimation* Intro; // 0x2c8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2d0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2d8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2e0(0x08)
	struct UCommonTextBlock* Description; // 0x2e8(0x08)
	struct UFortLazyImage* NotificationImage; // 0x2f0(0x08)
	struct UCommonTextBlock* Title; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x300(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x310(0x08)
	bool bActionTaken; // 0x318(0x01)

	void SetupAnimBindings(bool Unbind); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyAdditionalStyling(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetImage(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void StartIntro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateToast(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOutroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayOutro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayOpenAnimation(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationSet(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassPageUnlockedToast(int32_t EntryPoint); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnFinishedToast__DelegateSignature(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

