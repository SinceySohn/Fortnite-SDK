// Class KeysAndLocksUI.KeyPlayerInfoWidget
// Size: 0x2f0 (Inherited: 0x2d0)
struct UKeyPlayerInfoWidget : UFortHUDElementWidget {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct FGameplayTag KeyStatusTag; // 0x2d8(0x04)
	char pad_2DC[0x14]; // 0x2dc(0x14)

	void OnKeyStatusActivated(struct AFortPlayerStateAthena* InPlayerState, bool bActivated); // Function KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleGameplayTagEvent(struct FGameplayTag UpdatedTag, int32_t TagCount); // Function KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent // (Final|Native|Protected) // @ game+0x693355c
};

