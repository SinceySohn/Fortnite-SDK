// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
// Size: 0x2e0 (Inherited: 0x2d0)
struct UTacOvershieldPlayerInfoWidget : UFortHUDElementWidget {
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void OnPlayerStateSet(struct AFortPlayerStateAthena* InPlayerState); // Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnPlayerStateSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOvershieldStateChanged(float Overshield, float OvershieldMax); // Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnOvershieldStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

