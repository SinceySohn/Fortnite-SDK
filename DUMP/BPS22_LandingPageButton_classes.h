// WidgetBlueprintGeneratedClass BPS22_LandingPageButton.BPS22_LandingPageButton_C
// Size: 0x16a9 (Inherited: 0x15e0)
struct UBPS22_LandingPageButton_C : UBattlePassLandingPageButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UWidgetAnimation* burst; // 0x15e8(0x08)
	struct UWidgetAnimation* Intro; // 0x15f0(0x08)
	struct UWidgetAnimation* Selected; // 0x15f8(0x08)
	struct USpacer* ExtraSpace; // 0x1600(0x08)
	struct UImage* Image; // 0x1608(0x08)
	struct UImage* ; // 0x1610(0x08)
	struct UImage* Image_Background; // 0x1618(0x08)
	struct UImage* Image_Disabled; // 0x1620(0x08)
	struct UImage* Image_Lock_Purple; // 0x1628(0x08)
	struct UImage* Image_selected_LR; // 0x1630(0x08)
	struct UImage* Image_selected_TB; // 0x1638(0x08)
	struct UCommonRichTextBlock* RichText_Title; // 0x1640(0x08)
	struct UCommonVisibilitySwitcher* Switcher_locked; // 0x1648(0x08)
	enum class ETextJustify TileTextJustification; // 0x1650(0x01)
	char pad_1651[0x7]; // 0x1651(0x07)
	struct UMaterialInterface* Material; // 0x1658(0x08)
	struct FVector2D In Size; // 0x1660(0x10)
	double Extra Space; // 0x1670(0x08)
	struct FText Empty text; // 0x1678(0x18)
	bool IsDisabled; // 0x1690(0x01)
	char pad_1691[0x7]; // 0x1691(0x07)
	struct FMulticastInlineDelegate OnShowButtonDetails; // 0x1698(0x10)
	bool HasExtraLock; // 0x16a8(0x01)

	void Play intro(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSubscriptionTextureLoaded(struct UTexture2D* Texture); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnSubscriptionTextureLoaded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateStatusIcons(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.UpdateStatusIcons // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnDisplayDetailsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetExtraLock(bool ExtraLock); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.SetExtraLock // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_LandingPageButton(int32_t EntryPoint); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.ExecuteUbergraph_BPS22_LandingPageButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnShowButtonDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

