// WidgetBlueprintGeneratedClass CategoryButton.CategoryButton_C
// Size: 0x1482 (Inherited: 0x13e0)
struct UCategoryButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* PulseWarningIcon; // 0x13e8(0x08)
	struct UWidgetAnimation* Reset; // 0x13f0(0x08)
	struct UWidgetAnimation* Dim; // 0x13f8(0x08)
	struct UWidgetAnimation* OnSelect; // 0x1400(0x08)
	struct UWidgetAnimation* OnWarning; // 0x1408(0x08)
	struct UWidgetAnimation* OnHover; // 0x1410(0x08)
	struct UDiamondStatePip_C* DiamondStatePip; // 0x1418(0x08)
	struct USizeBox* DisabledIcon; // 0x1420(0x08)
	struct UImage* Image_Dim; // 0x1428(0x08)
	struct UNamedSlot* NamedSlot_Icon; // 0x1430(0x08)
	struct USafeZone* SafeZone; // 0x1438(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1440(0x08)
	bool IsSelected; // 0x1448(0x01)
	bool Is Hovered; // 0x1449(0x01)
	bool IsWarningOn; // 0x144a(0x01)
	char pad_144B[0x5]; // 0x144b(0x05)
	struct FText Warning Message; // 0x1450(0x18)
	struct FText TitleText; // 0x1468(0x18)
	bool Pad Left; // 0x1480(0x01)
	bool Pad Right; // 0x1481(0x01)

	void SetSafeZonePadding(bool Pad Left, bool Pad Right); // Function CategoryButton.CategoryButton_C.SetSafeZonePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetState(); // Function CategoryButton.CategoryButton_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWarningStatus(bool WarningOn, struct FText WarningMessage); // Function CategoryButton.CategoryButton_C.SetWarningStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTitleText(struct FText& TitleText); // Function CategoryButton.CategoryButton_C.SetTitleText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function CategoryButton.CategoryButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function CategoryButton.CategoryButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function CategoryButton.CategoryButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function CategoryButton.CategoryButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function CategoryButton.CategoryButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetSelected(bool IsSelected); // Function CategoryButton.CategoryButton_C.SetSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHovered(bool IsHovered); // Function CategoryButton.CategoryButton_C.SetHovered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayClickedEvents(); // Function CategoryButton.CategoryButton_C.PlayClickedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function CategoryButton.CategoryButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CategoryButton.CategoryButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CategoryButton(int32_t EntryPoint); // Function CategoryButton.CategoryButton_C.ExecuteUbergraph_CategoryButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

