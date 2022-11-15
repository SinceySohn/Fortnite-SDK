// WidgetBlueprintGeneratedClass BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C
// Size: 0x580 (Inherited: 0x540)
struct UBPS22_BattlePassRewardPage_C : UBattlePassRewardPageS22 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* Intro; // 0x548(0x08)
	struct UWidgetAnimation* Header_intro; // 0x550(0x08)
	struct UImage* ; // 0x558(0x08)
	struct USafeZone* ; // 0x560(0x08)
	struct UCommonTextBlock* Subtitle; // 0x568(0x08)
	struct UCommonTextBlock* Title; // 0x570(0x08)
	struct UVerticalBox* ; // 0x578(0x08)

	void SequenceEvent__ENTRYPOINTBPS22_BattlePassRewardPage(struct UPageNavigator_C* PageNavigator); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.SequenceEvent__ENTRYPOINTBPS22_BattlePassRewardPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct UPageNavigator_C* PageNavigator); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPageChanged(int32_t PageNumber); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnPageChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitForPageType(enum class ERewardPageType InRewardPageType); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnInitForPageType // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_BattlePassRewardPage(int32_t EntryPoint); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.ExecuteUbergraph_BPS22_BattlePassRewardPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

