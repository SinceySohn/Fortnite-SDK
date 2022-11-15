// WidgetBlueprintGeneratedClass BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C
// Size: 0x4d9 (Inherited: 0x428)
struct UBattlePassCrewPurchaseContainer_C : UBattlePassCrewPurchaseContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UWidgetAnimation* TransitionLeft; // 0x430(0x08)
	struct UWidgetAnimation* TransitionRight; // 0x438(0x08)
	struct UCrewBenefitsAnim_C* CrewBenefitsAnim; // 0x440(0x08)
	struct UCrewPurchaseScreen_C* CrewPurchaseScreen; // 0x448(0x08)
	struct UCrewSeasonLaunchScreen_C* CrewSeasonLaunchScreen; // 0x450(0x08)
	struct UImage* Image_BackgroundFill; // 0x458(0x08)
	struct UImage* Image_Blackout; // 0x460(0x08)
	struct UImage* Image_Blackout_quickintro; // 0x468(0x08)
	struct UImage* Image_BPEmblem; // 0x470(0x08)
	struct UImage* Image_IntroBG; // 0x478(0x08)
	struct UImage* Image_Sparks; // 0x480(0x08)
	struct UImage* Image_Transition; // 0x488(0x08)
	struct UWidgetAnimation* LastPlayedAnimation; // 0x490(0x08)
	struct UBattlePassPurchaseScreen_C* As Battle Pass Purchase Screen; // 0x498(0x08)
	struct FTimerHandle MusicControllerHandle; // 0x4a0(0x08)
	struct USoundMix* BattlePassMix; // 0x4a8(0x08)
	struct ABattlepass_MusicController_Quartz_C* MusicController_Quartz; // 0x4b0(0x08)
	struct UAudioComponent* BattlepassSplashAudio; // 0x4b8(0x08)
	struct UAudioComponent* CrewSplashAudio; // 0x4c0(0x08)
	double TransitionLeftAlpha; // 0x4c8(0x08)
	double TransitionRightAlpha; // 0x4d0(0x08)
	enum class EBattlePassCrewContentState BPState; // 0x4d8(0x01)

	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTransitionRightEvaluated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTransitionRightEvaluated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTransitionLeftEvaluated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTransitionLeftEvaluated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopAllBattlePassMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.StopAllBattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpSellMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.UpSellMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BattlePassMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SubscriptionMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SubscriptionMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnContentStateUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SequenceEvent_ToggleScreens(bool isLeft); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SequenceEvent_ToggleScreens // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTriggerIntroAnimation(bool bCanClaimRewards); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTriggerIntroAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLastPlayedAnimationFinished(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnLastPlayedAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerSubTransitionOut(enum class EBattlePassCrewContentState TransitionState); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.TriggerSubTransitionOut // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TriggerSubTransitionIn(enum class EBattlePassCrewContentState TransitionState); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.TriggerSubTransitionIn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetAnimations(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.ResetAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallMusicController(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.CallMusicController // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayBattlepassSplashAudio(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.PlayBattlepassSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySubscriptionSplashAudio(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.PlaySubscriptionSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassCrewPurchaseContainer(int32_t EntryPoint); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.ExecuteUbergraph_BattlePassCrewPurchaseContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

