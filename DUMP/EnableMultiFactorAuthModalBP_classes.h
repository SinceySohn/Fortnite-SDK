// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
// Size: 0x608 (Inherited: 0x588)
struct UEnableMultiFactorAuthModalBP_C : UEnableMultiFactorModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x590(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x598(0x08)
	struct UWidgetAnimation* Intro; // 0x5a0(0x08)
	struct UCommonTextBlock* ConsoleTextBlock; // 0x5a8(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x5b0(0x08)
	struct UCommonTextBlock* CT_TakenToWebsite; // 0x5b8(0x08)
	struct UWidgetSwitcher* EnableButtonSwitcher; // 0x5c0(0x08)
	struct UImage* Image_GoToWebsite; // 0x5c8(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget_FromSocialImport; // 0x5d0(0x08)
	struct UFortLazyImage* lazyImage; // 0x5d8(0x08)
	struct USafeZone* SafeZone; // 0x5e0(0x08)
	struct UScaleBox* ScaleBox_TitleHeader; // 0x5e8(0x08)
	double HeartbeatDelayIntroAnimation; // 0x5f0(0x08)
	bool bHasReward; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct UCommonTextStyle* MobileLimitedTimeHeaderStyle; // 0x600(0x08)

	void ScaleTitleForCulture(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimationFullyCompleteBP(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.AnimationFullyCompleteBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSetScreenMode(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NavUp(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NavRight(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleHeaderText(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnIncentivizedSet(bool bIncentivized); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetExitButtonText(struct FText& NewButtonText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnConsoleDisplayURLProvided(struct FText& UniquePlayerURLText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSetScreenConfiguration(bool bIsConsole); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(bool bUsingGamepad); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32_t EntryPoint); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

