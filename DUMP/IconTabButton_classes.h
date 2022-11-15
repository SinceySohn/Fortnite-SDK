// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// Size: 0x15a0 (Inherited: 0x1430)
struct UIconTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UNormalBangWrapper_C* BangWrapper; // 0x1438(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1440(0x08)
	struct UHorizontalBox* ContentHB; // 0x1448(0x08)
	struct UImage* LeftSideImage; // 0x1450(0x08)
	struct USizeBox* SizeBoxShell; // 0x1458(0x08)
	struct FText ButtonText; // 0x1460(0x18)
	char pad_1478[0x8]; // 0x1478(0x08)
	struct FSlateBrush IconBrush; // 0x1480(0xc0)
	bool UseText; // 0x1540(0x01)
	char pad_1541[0x3]; // 0x1541(0x03)
	struct FLinearColor SelectedIconTint; // 0x1544(0x10)
	struct FLinearColor DeselectedIconTint; // 0x1554(0x10)
	struct FLinearColor HoveredIconTint; // 0x1564(0x10)
	bool bBangEnabled; // 0x1574(0x01)
	bool ChangeIconColorWhenSelected; // 0x1575(0x01)
	char pad_1576[0x2]; // 0x1576(0x02)
	struct FSlateColor SelectedIconColor; // 0x1578(0x14)
	struct FSlateColor UnSelectedIconColor; // 0x158c(0x14)

	void Play Hover Sound(); // Function IconTabButton.IconTabButton_C.Play Hover Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, struct FSlateColor SelectedColor, struct FSlateColor UnselectedColor); // Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Bang State(bool bBangEnabled, int32_t Count); // Function IconTabButton.IconTabButton_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowText(); // Function IconTabButton.IconTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTabButton.IconTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function IconTabButton.IconTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function IconTabButton.IconTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTabButton.IconTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function IconTabButton.IconTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function IconTabButton.IconTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function IconTabButton.IconTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function IconTabButton.IconTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function IconTabButton.IconTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function IconTabButton.IconTabButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function IconTabButton.IconTabButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_IconTabButton(int32_t EntryPoint); // Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

