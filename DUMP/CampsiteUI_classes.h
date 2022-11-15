// Class CampsiteUI.CampsiteMarkerInfoBase
// Size: 0x2a0 (Inherited: 0x290)
struct UCampsiteMarkerInfoBase : UCommonUserWidget {
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> WeakPSA; // 0x290(0x08)
	struct UCommonTextBlock* Text_PlayerName; // 0x298(0x08)

	void SetPlayerState(struct AFortPlayerStateAthena* InPlayerState); // Function CampsiteUI.CampsiteMarkerInfoBase.SetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x675b6b0
	void OnSetPlayerState(struct AFortPlayerStateAthena* PSA); // Function CampsiteUI.CampsiteMarkerInfoBase.OnSetPlayerState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

