// WidgetBlueprintGeneratedClass SocialBanModal.SocialBanModal_C
// Size: 0x578 (Inherited: 0x4f0)
struct USocialBanModal_C : UFortSocialBanModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UCommonTextBlock* disclaimer; // 0x4f8(0x08)
	struct UCommonTextBlock* ; // 0x500(0x08)
	struct UCommonTextBlock* ; // 0x508(0x08)
	struct UImage* Image_Severe; // 0x510(0x08)
	struct ULightbox_C* ; // 0x518(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Message; // 0x520(0x08)
	struct UCommonTextBlock* Title; // 0x528(0x08)
	struct UCommonTextBlock* ; // 0x530(0x08)
	struct UImage* ; // 0x538(0x08)
	struct UImage* ; // 0x540(0x08)
	struct UImage* ; // 0x548(0x08)
	struct UVerticalBox* VBox_Banned; // 0x550(0x08)
	struct UVerticalBox* VBox_Warned; // 0x558(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SeverityImage; // 0x560(0x08)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x568(0x10)

	void OnDisplayModeSet(bool bIsBanned); // Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialBanModal(int32_t EntryPoint); // Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnCloseSucceeded__DelegateSignature(); // Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

