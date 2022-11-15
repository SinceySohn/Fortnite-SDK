// WidgetBlueprintGeneratedClass HoldableLockerButton.HoldableLockerButton_C
// Size: 0x1508 (Inherited: 0x1480)
struct UHoldableLockerButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Hover; // 0x1488(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x1490(0x08)
	struct UImage* Image_Background; // 0x1498(0x08)
	struct UImage* Image_GamepadProgress; // 0x14a0(0x08)
	struct UOverlay* Overlay_Input; // 0x14a8(0x08)
	struct UProgressBar* ; // 0x14b0(0x08)
	struct USizeBox* SizeBox_Height; // 0x14b8(0x08)
	struct USizeBox* SizeBox_KBM; // 0x14c0(0x08)
	struct UCommonTextBlock* TextButton_Text; // 0x14c8(0x08)
	struct FText In Text; // 0x14d0(0x18)
	double In Min Desired Width; // 0x14e8(0x08)
	double In Min Desired Height; // 0x14f0(0x08)
	struct FMulticastInlineDelegate Hold Completed; // 0x14f8(0x10)

	void UpdateInputActionWidget(); // Function HoldableLockerButton.HoldableLockerButton_C.UpdateInputActionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update style(bool Using Gamepad); // Function HoldableLockerButton.HoldableLockerButton_C.Update style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextAndStyle(enum class ECommonInputType Input Type); // Function HoldableLockerButton.HoldableLockerButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldCompleted(); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldIncreased(float HoldPercentage); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldDecreased(float HoldPercentage); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldReset(); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnPressed(); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function HoldableLockerButton.HoldableLockerButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function HoldableLockerButton.HoldableLockerButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function HoldableLockerButton.HoldableLockerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function HoldableLockerButton.HoldableLockerButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldProgressAnimationFinished(); // Function HoldableLockerButton.HoldableLockerButton_C.OnHoldProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHoldProgressAnimationStarted(); // Function HoldableLockerButton.HoldableLockerButton_C.OnHoldProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_HoldableLockerButton(int32_t EntryPoint); // Function HoldableLockerButton.HoldableLockerButton_C.ExecuteUbergraph_HoldableLockerButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void Hold Completed__DelegateSignature(); // Function HoldableLockerButton.HoldableLockerButton_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

