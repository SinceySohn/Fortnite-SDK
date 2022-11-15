// WidgetBlueprintGeneratedClass RewardInfoSimpleWidget_Legacy.RewardInfoSimpleWidget_Legacy_C
// Size: 0x1468 (Inherited: 0x1450)
struct URewardInfoSimpleWidget_Legacy_C : UFortRewardInfoButton_Legacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UCommonTextBlock* ItemCount; // 0x1458(0x08)
	struct UCommonLazyImage* ItemIcon; // 0x1460(0x08)

	void GetDisplayName(struct FText& DisplayName); // Function RewardInfoSimpleWidget_Legacy.RewardInfoSimpleWidget_Legacy_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleDifferentItemOrQuantitySetBP(); // Function RewardInfoSimpleWidget_Legacy.RewardInfoSimpleWidget_Legacy_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RewardInfoSimpleWidget_Legacy(int32_t EntryPoint); // Function RewardInfoSimpleWidget_Legacy.RewardInfoSimpleWidget_Legacy_C.ExecuteUbergraph_RewardInfoSimpleWidget_Legacy // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

