// Class ChromePlayerUI.ChromePlayerInfoWidget
// Size: 0x2e0 (Inherited: 0x2d0)
struct UChromePlayerInfoWidget : UFortHUDElementWidget {
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void OnPlayerStateSet(struct AFortPlayerStateAthena* InPlayerState); // Function ChromePlayerUI.ChromePlayerInfoWidget.OnPlayerStateSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerDeadStateChanged(struct AFortPlayerStateAthena* PlayerState, bool bIsDead); // Function ChromePlayerUI.ChromePlayerInfoWidget.OnPlayerDeadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

