// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
// Size: 0x358 (Inherited: 0x290)
struct UAthenaCustomizationSlotButtonWrapper_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Populate; // 0x298(0x08)
	struct UAthenaCustomizationSlotButton_C* SlotButton; // 0x2a0(0x08)
	struct FText BannerDisplayName; // 0x2a8(0x18)
	enum class EAthenaCustomizationCategory CustomizationType; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FMulticastInlineDelegate OnSlotClicked; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnSlotHovered; // 0x2d8(0x10)
	struct FText CategoryDescription; // 0x2e8(0x18)
	struct FMulticastInlineDelegate OnSlotUnhovered; // 0x300(0x10)
	int32_t SubslotIndex; // 0x310(0x04)
	bool bAllowUnownedItems; // 0x314(0x01)
	bool bOneItemPerSlot; // 0x315(0x01)
	char pad_316[0x2]; // 0x316(0x02)
	struct UMaterialInstance* OverrideSlotImage; // 0x318(0x08)
	struct FGameplayTag RequiredSlotTag; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	double SlottedItemCardWidth; // 0x328(0x08)
	struct TSoftObjectPtr<UTexture2D> emptytexture; // 0x330(0x28)

	void ResetPopulateAnimVisual(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ResetPopulateAnimVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCustomizationSlotActiveState(bool& bCosmeticAvaialble, bool& bActive); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.GetCustomizationSlotActiveState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void AnimPopulateInternal(int32_t ButtonIndex); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.AnimPopulateInternal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32_t EntryPoint); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnSlotUnhovered__DelegateSignature(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSlotHovered__DelegateSignature(struct UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper, enum class EAthenaCustomizationCategory CustomizationType, struct FText BannerLabel, struct FText CustomizationDescription, int32_t SubslotIndex); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSlotClicked__DelegateSignature(struct UCommonButtonLegacy* Button, struct FAthenaCustomizationParams CustomizationParams); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

