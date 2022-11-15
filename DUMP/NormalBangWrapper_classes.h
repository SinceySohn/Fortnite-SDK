// WidgetBlueprintGeneratedClass NormalBangWrapper.NormalBangWrapper_C
// Size: 0x32a (Inherited: 0x2a8)
struct UNormalBangWrapper_C : UFortBangWrapper_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* IntroSuperBang; // 0x2b0(0x08)
	struct UWidgetAnimation* Intro; // 0x2b8(0x08)
	struct UWidgetAnimation* TutorialGlow; // 0x2c0(0x08)
	struct USizeBox* BangBox; // 0x2c8(0x08)
	struct USizeBox* BigBang; // 0x2d0(0x08)
	struct USizeBox* BigBangCount; // 0x2d8(0x08)
	struct UCommonTextBlock* ; // 0x2e0(0x08)
	struct UNamedSlot* Content; // 0x2e8(0x08)
	struct UCommonTextBlock* CountText; // 0x2f0(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x2f8(0x08)
	struct USizeBox* SmallBang; // 0x300(0x08)
	struct USizeBox* SmallBangCount; // 0x308(0x08)
	struct USizeBox* SuperBang; // 0x310(0x08)
	struct UCommonBorder* TutorialBorder; // 0x318(0x08)
	bool UseSmallVersion; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t Count; // 0x324(0x04)
	bool bUseSuperBangNoCount; // 0x328(0x01)
	bool ShouldSuppressBang; // 0x329(0x01)

	void SetShouldSuppressBang(bool ShouldSuppressBang); // Function NormalBangWrapper.NormalBangWrapper_C.SetShouldSuppressBang // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitialReset(); // Function NormalBangWrapper.NormalBangWrapper_C.InitialReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerReset(); // Function NormalBangWrapper.NormalBangWrapper_C.TriggerReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerIntro(); // Function NormalBangWrapper.NormalBangWrapper_C.TriggerIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Adjust Bang Image Translation(struct FVector2D Translation); // Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Bang Icon Version(int32_t InCount); // Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopCallout(); // Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartCallout(struct FName TutorialObjectiveName, enum class ETutorialType TutorialType); // Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBangStateChanged(bool bEnabled, int32_t Count); // Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NormalBangWrapper(int32_t EntryPoint); // Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

