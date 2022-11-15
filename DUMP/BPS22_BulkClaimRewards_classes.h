// WidgetBlueprintGeneratedClass BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C
// Size: 0x56c (Inherited: 0x520)
struct UBPS22_BulkClaimRewards_C : UFortBattlePassBulkBuyPageBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* Intro; // 0x528(0x08)
	struct UCommonRichTextBlock* ; // 0x530(0x08)
	struct UCommonTextBlock* Cost; // 0x538(0x08)
	struct UImage* ; // 0x540(0x08)
	struct UImage* ; // 0x548(0x08)
	struct UCommonTextBlock* Text_LevelsAmount; // 0x550(0x08)
	struct UCommonTextBlock* Title; // 0x558(0x08)
	int32_t First Page to Claim; // 0x560(0x04)
	int32_t Last Page to Claim; // 0x564(0x04)
	int32_t Add One; // 0x568(0x04)

	void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnPageRangeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRewardCountChanged(int32_t Count); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnRewardCountChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCostChanged(int32_t Cost); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnCostChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HoldActionProgress(bool IsHolding); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.HoldActionProgress // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_BulkClaimRewards(int32_t EntryPoint); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.ExecuteUbergraph_BPS22_BulkClaimRewards // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

