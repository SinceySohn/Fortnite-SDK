// Class XpEverywhereUI.XpEverywhereAccoladesWidget
// Size: 0x340 (Inherited: 0x2d0)
struct UXpEverywhereAccoladesWidget : UFortHUDElementWidget {
	char pad_2D0[0x60]; // 0x2d0(0x60)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x330(0x02)
	char pad_332[0xe]; // 0x332(0x0e)

	void OpenWidget(struct UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, struct FText& DisplayName, struct TSoftObjectPtr<UTexture2D>& AccoladeLargePreviewImageOverride, struct FText& SimulatedName, struct FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStompedByOtherWidget(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEventAdded(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool HasMoreXPEvents(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6b9a1e0
	void CloseWidget(); // Function XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b99ff0
};

// Class XpEverywhereUI.XpEverywhereBar
// Size: 0x488 (Inherited: 0x3a8)
struct UXpEverywhereBar : UCommonActivatableWidget {
	bool bXpBarAlwaysActive; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UFortSocialAvatarIcon* SocialAvatarIcon; // 0x3b0(0x08)
	char pad_3B8[0xd0]; // 0x3b8(0xd0)

	void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // Function XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP); // Function XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	int32_t GetTotalXpRequiredForLevel(int32_t InLevel); // Function XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6b9a12c
	void DoneUpdatingXpBar(); // Function XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b9a0ac
};

// Class XpEverywhereUI.XpEverywhereLevelUpWidget
// Size: 0x3b0 (Inherited: 0x3a8)
struct UXpEverywhereLevelUpWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)

	void OnShowWidget(int32_t NewLevel); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DoneLevelingUp(); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b9a04c
	void DisplayLevelUpRewards(); // Function XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x6b9a004
};

// Class XpEverywhereUI.XpEverywhereReticleWidget
// Size: 0x2e8 (Inherited: 0x2d0)
struct UXpEverywhereReticleWidget : UFortHUDElementWidget {
	char pad_2D0[0x18]; // 0x2d0(0x18)

	void UpdateXPSource(struct FText& NewSourceText); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void UpdateXPAmount(int32_t NewAmount, struct USoundCue* Cue, enum class EFortSimulatedXPSize SimulatedXpSize); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateRestXP(int32_t RestXpRemaining); // Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleProfileUpdated(); // Function XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated // (Final|Native|Protected) // @ game+0x6b9a1cc
	void ForwardEvents(); // Function XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b9a118
};

// Class XpEverywhereUI.XpEverywhereRewardWidget
// Size: 0x360 (Inherited: 0x2d0)
struct UXpEverywhereRewardWidget : UFortHUDElementWidget {
	char pad_2D0[0x48]; // 0x2d0(0x48)
	struct UFortNotificationEntry* DefaultEntryClass; // 0x318(0x08)
	bool bHasPrioritizedWidgetFocus; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UFortNotificationEntry* ActiveWidget; // 0x328(0x08)
	struct TArray<struct UFortNotificationEntry*> WidgetQueue; // 0x330(0x10)
	struct UVerticalBox* NotificationUpdatesBox; // 0x340(0x08)
	struct TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData; // 0x348(0x10)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x358(0x02)
	char pad_35A[0x6]; // 0x35a(0x06)

	void HandleNotificationUpdateFinished(); // Function XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished // (Final|Native|Protected) // @ game+0x6b9a1b8
};

// Class XpEverywhereUI.XpEverywhereUIComponent
// Size: 0x160 (Inherited: 0xa0)
struct UXpEverywhereUIComponent : UActorComponent {
	char pad_A0[0x90]; // 0xa0(0x90)
	struct FGameplayTagContainer XpEverywhereHiddenElementTags; // 0x130(0x20)
	char pad_150[0x10]; // 0x150(0x10)
};

