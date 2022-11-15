// WidgetBlueprintGeneratedClass BPS22_ContextualButton.BPS22_ContextualButton_C
// Size: 0x1578 (Inherited: 0x1480)
struct UBPS22_ContextualButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x1488(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x1490(0x08)
	struct UWidgetAnimation* Hover; // 0x1498(0x08)
	struct UCommonTextBlock* Button_text; // 0x14a0(0x08)
	struct UImage* Image_Icon; // 0x14a8(0x08)
	struct UImage* Image_material; // 0x14b0(0x08)
	struct UImage* Image_Progress; // 0x14b8(0x08)
	struct USizeBox* ; // 0x14c0(0x08)
	struct USpacer* Spacer_Icon; // 0x14c8(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x14d0(0x08)
	struct UCommonActionWidget* UnbindedInputActionWidget; // 0x14d8(0x08)
	struct FText In Text; // 0x14e0(0x18)
	double In Width Override; // 0x14f8(0x08)
	struct UMaterialInterface* Material; // 0x1500(0x08)
	enum class ETextJustify Justification; // 0x1508(0x01)
	char pad_1509[0x7]; // 0x1509(0x07)
	struct UMaterialInstanceDynamic* HoldProgressDMI; // 0x1510(0x08)
	struct FText In SubText; // 0x1518(0x18)
	bool Show BP icon; // 0x1530(0x01)
	char pad_1531[0x3]; // 0x1531(0x03)
	int32_t Size; // 0x1534(0x04)
	double In Height Override; // 0x1538(0x08)
	struct UAudioComponent* FillingSoundAudioComponent; // 0x1540(0x08)
	struct USoundBase* FillingSoundOverride; // 0x1548(0x08)
	struct USoundBase* FillCompleteSoundOverride; // 0x1550(0x08)
	struct UObject* Font Material; // 0x1558(0x08)
	struct USoundBase* FillSoundReleased; // 0x1560(0x08)
	struct FMulticastInlineDelegate HoldActionProgress; // 0x1568(0x10)

	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldCompleted(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldIncreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldDecreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHoldReset(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnPressed(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlayFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PlayFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FillComplete(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.FillComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.StopFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_ContextualButton(int32_t EntryPoint); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.ExecuteUbergraph_BPS22_ContextualButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void HoldActionProgress__DelegateSignature(bool IsHolding); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.HoldActionProgress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

