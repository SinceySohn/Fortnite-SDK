// WidgetBlueprintGeneratedClass BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C
// Size: 0x31a (Inherited: 0x270)
struct UBPS22_BattlePassRewardGridHeader_C : UFortBattlePassRewardGridHeader {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* burst; // 0x278(0x08)
	struct UBorder* Border_Locked; // 0x280(0x08)
	struct UBorder* Border_TimeLocked; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* ; // 0x298(0x08)
	struct UImage* Image_Progress; // 0x2a0(0x08)
	struct UCommonRichTextBlock* PageNumberText; // 0x2a8(0x08)
	struct UCommonRichTextBlock* RichText_LockDescription; // 0x2b0(0x08)
	struct UCommonRichTextBlock* RichText_TimeLockDescription; // 0x2b8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_PageState; // 0x2c0(0x08)
	struct UCommonTextBlock* Text_BattlePass; // 0x2c8(0x08)
	struct UCommonRichTextBlock* Text_Progress; // 0x2d0(0x08)
	struct UImage* timer1; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_Unlocked; // 0x2e0(0x08)
	struct FText Plural Items; // 0x2e8(0x18)
	struct FText Complete text; // 0x300(0x18)
	bool HasCustomText; // 0x318(0x01)
	enum class ERewardPageType Page Type; // 0x319(0x01)

	void UpdateLockedHeaderText(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, struct FTimespan TimeRemaining); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.UpdateLockedHeaderText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, struct FTimespan TimeRemaining); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.OnPageLocked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageNumberSet(int32_t InPageNumber); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.OnPageNumberSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.OnPageUnlocked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetPageType(enum class ERewardPageType PageType); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.OnSetPageType // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetPageCustomName(struct FText& CustomName); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.OnSetPageCustomName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_BattlePassRewardGridHeader(int32_t EntryPoint); // Function BPS22_BattlePassRewardGridHeader.BPS22_BattlePassRewardGridHeader_C.ExecuteUbergraph_BPS22_BattlePassRewardGridHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

