// WidgetBlueprintGeneratedClass AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C
// Size: 0x1564 (Inherited: 0x1430)
struct UAthenaLeaderboardTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1438(0x08)
	struct UHorizontalBox* ContentHB; // 0x1440(0x08)
	struct UImage* LeftSideImage; // 0x1448(0x08)
	struct FText ButtonText; // 0x1450(0x18)
	char pad_1468[0x8]; // 0x1468(0x08)
	struct FSlateBrush IconBrush; // 0x1470(0xc0)
	bool UseText; // 0x1530(0x01)
	char pad_1531[0x3]; // 0x1531(0x03)
	struct FLinearColor SelectedIconTint; // 0x1534(0x10)
	struct FLinearColor DeselectedIconTint; // 0x1544(0x10)
	struct FLinearColor HoveredIconTint; // 0x1554(0x10)

	void ShowText(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Icon(struct FSlateBrush IconBrush); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Text(struct FText ButtonText); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentTextStyleChanged(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLeaderboardTabButton(int32_t EntryPoint); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

