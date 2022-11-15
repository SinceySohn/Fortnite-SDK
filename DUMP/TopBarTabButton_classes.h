// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
// Size: 0x1568 (Inherited: 0x1490)
struct UTopBarTabButton_C : UFortTopBarTabTextIconButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Hovered; // 0x1498(0x08)
	struct UWidgetAnimation* Selected; // 0x14a0(0x08)
	struct USizeBox* ; // 0x14a8(0x08)
	struct USizeBox* ; // 0x14b0(0x08)
	struct USizeBox* ; // 0x14b8(0x08)
	struct UVerticalBox* ; // 0x14c0(0x08)
	struct UMaterialInstanceDynamic* MID_ButtonBorder; // 0x14c8(0x08)
	bool PreviewMobileStyle; // 0x14d0(0x01)
	char pad_14D1[0x3]; // 0x14d1(0x03)
	struct FFloatSpringState SpringState_ShapeChange; // 0x14d4(0x0c)
	struct FFloatSpringState SpringState_Scale; // 0x14e0(0x0c)
	char pad_14EC[0x4]; // 0x14ec(0x04)
	double Spring_Scale_Target; // 0x14f0(0x08)
	double MassMultiply; // 0x14f8(0x08)
	double DampenMultiply; // 0x1500(0x08)
	double StiffnessMultiply; // 0x1508(0x08)
	bool VisualSelectionState; // 0x1510(0x01)
	char pad_1511[0x7]; // 0x1511(0x07)
	double RandomFloat_Top; // 0x1518(0x08)
	double RandomFloat_Left; // 0x1520(0x08)
	double RandomFloat_Right; // 0x1528(0x08)
	double RandomFloat_Bottom; // 0x1530(0x08)
	double ShapeChange_New; // 0x1538(0x08)
	double ShapeChange_Target; // 0x1540(0x08)
	bool UpdateSpring; // 0x1548(0x01)
	char pad_1549[0x7]; // 0x1549(0x07)
	struct FText ButtonText; // 0x1550(0x18)

	void OverrideIcon(bool Show, struct FSlateBrush inSlateBrush); // Function TopBarTabButton.TopBarTabButton_C.OverrideIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetText(struct FText ButtonText); // Function TopBarTabButton.TopBarTabButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMIDWithRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SeedRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeButtonBorderMID(); // Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSelectionChangedVisuals(bool bIsSelected); // Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function TopBarTabButton.TopBarTabButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function TopBarTabButton.TopBarTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function TopBarTabButton.TopBarTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TopBarTabButton(int32_t EntryPoint); // Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

