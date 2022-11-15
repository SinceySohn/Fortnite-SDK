// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
// Size: 0x340 (Inherited: 0x2e8)
struct UPowerToastWidget_C : UFortPlayerPowerRatingToast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* LookAtMe; // 0x2f0(0x08)
	struct UWidgetAnimation* Outro; // 0x2f8(0x08)
	struct UWidgetAnimation* Intro; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct UImage* Image_Power; // 0x310(0x08)
	struct UImage* LineSeparator; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct UImage* Moonbeam_Power_Back_Difference; // 0x328(0x08)
	struct UImage* PowerIconGlow; // 0x330(0x08)
	struct FTimerHandle AnimationDelayTimer; // 0x338(0x08)

	void HandleAnimationDelay(); // Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xdef49c
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xdef49c
	void (); // Function PowerToastWidget.PowerToastWidget_C. // (BlueprintEvent) // @ game+0xdef49c
	void ShowToast(); // Function PowerToastWidget.PowerToastWidget_C.ShowToast // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PowerToastWidget.PowerToastWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PowerToastWidget(int32_t EntryPoint); // Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

