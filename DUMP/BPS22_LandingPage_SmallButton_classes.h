// WidgetBlueprintGeneratedClass BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C
// Size: 0x16c8 (Inherited: 0x15e0)
struct UBPS22_LandingPage_SmallButton_C : UBattlePassLandingPageButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UWidgetAnimation* Intro; // 0x15e8(0x08)
	struct UWidgetAnimation* burst; // 0x15f0(0x08)
	struct UWidgetAnimation* Selected_large; // 0x15f8(0x08)
	struct UImage* ; // 0x1600(0x08)
	struct UImage* Image_material; // 0x1608(0x08)
	struct UImage* Image_selected_LR; // 0x1610(0x08)
	struct UImage* Image_selected_TB; // 0x1618(0x08)
	struct UImage* Image_Shine; // 0x1620(0x08)
	struct USizeBox* SizeBox_BP; // 0x1628(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x1630(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1638(0x08)
	struct FText In Text; // 0x1640(0x18)
	struct FSlateColor In Color and Opacity; // 0x1658(0x14)
	char pad_166C[0x4]; // 0x166c(0x04)
	struct UMaterialInterface* Material; // 0x1670(0x08)
	bool Show BP icon; // 0x1678(0x01)
	char pad_1679[0x7]; // 0x1679(0x07)
	struct FText In SubText; // 0x1680(0x18)
	struct FText Empty; // 0x1698(0x18)
	int32_t Title Font Size; // 0x16b0(0x04)
	char pad_16B4[0x4]; // 0x16b4(0x04)
	struct FMulticastInlineDelegate OnShowButtonDetails; // 0x16b8(0x10)

	void Play intro(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_LandingPage_SmallButton(int32_t EntryPoint); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.ExecuteUbergraph_BPS22_LandingPage_SmallButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPage_SmallButton.BPS22_LandingPage_SmallButton_C.OnShowButtonDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

