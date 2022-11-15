// WidgetBlueprintGeneratedClass MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C
// Size: 0x4d0 (Inherited: 0x480)
struct UMultipleSubscriptionAlertModal_C : UCrewMultiSubscriptionAlertModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UCloseButton_C* Button_CloseMobile; // 0x488(0x08)
	struct UImage* Containment; // 0x490(0x08)
	struct USafeZone* ContentSZ; // 0x498(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x4a0(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x4a8(0x08)
	struct USafeZone* MobileClose; // 0x4b0(0x08)
	struct UScrollBox* PrimaryScrollBox; // 0x4b8(0x08)
	struct UCommonRichTextBlock* Text_Check; // 0x4c0(0x08)
	struct UCommonRichTextBlock* Text_MoreInfo; // 0x4c8(0x08)

	void OnSetHowToCancelURL(struct FString MoreInfoUrl); // Function MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C.OnSetHowToCancelURL // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MultipleSubscriptionAlertModal(int32_t EntryPoint); // Function MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C.ExecuteUbergraph_MultipleSubscriptionAlertModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

