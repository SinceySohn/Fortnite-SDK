// WidgetBlueprintGeneratedClass PowerRatingWidget.PowerRatingWidget_C
// Size: 0x344 (Inherited: 0x2b8)
struct UPowerRatingWidget_C : UFortPlayerPowerRating {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonTextBlock* BaseRatingValue; // 0x2c0(0x08)
	struct UCommonTextBlock* BaseRatingValue-Large; // 0x2c8(0x08)
	struct UImage* BuffedRatingOuterGlow; // 0x2d0(0x08)
	struct UHomebaseRatingBar_C* HomebaseRatingBar; // 0x2d8(0x08)
	struct UImage* Image_Power; // 0x2e0(0x08)
	struct UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x2e8(0x08)
	struct UVerticalBox* OversizedMode; // 0x2f0(0x08)
	struct UImage* PowerIconGlow; // 0x2f8(0x08)
	struct UImage* Rating-Glow-Large; // 0x300(0x08)
	struct USizeBox* RatingBar; // 0x308(0x08)
	struct UHorizontalBox* RegularMode; // 0x310(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue; // 0x318(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue-Large; // 0x320(0x08)
	bool ShowDualPower; // 0x328(0x01)
	bool ShowProgress; // 0x329(0x01)
	bool ShowGlow; // 0x32a(0x01)
	bool UseLargeStyle; // 0x32b(0x01)
	bool UseOversizedMode; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	double InterpDuration; // 0x330(0x08)
	struct USoundBase* PowerIncreasedSound; // 0x338(0x08)
	int32_t Power Rating Num; // 0x340(0x04)

	void UpdateWidgetState(); // Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PowerRatingWidget.PowerRatingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBasePowerRatingUpdated(int32_t BasePowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTeamPowerRatingUpdated(int32_t TeamPowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress); // Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTeamMembershipChanged(); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PowerRatingWidget(int32_t EntryPoint); // Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

