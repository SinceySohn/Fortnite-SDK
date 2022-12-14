// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// Size: 0x120 (Inherited: 0x110)
struct UFortMobileActionButtonBehavior_ToggleRadio : UFortMobileActionButtonBehavior {
	struct UPaperSprite* ToggleRadioOffSprite; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)

	void HandleRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped // (Final|Native|Private) // @ game+0x696d6a4
	void HandleRadioPlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying // (Final|Native|Private) // @ game+0x696d5b4
};

// Class SrirachaRanchUI.RadioPlayerWidgetBase
// Size: 0x320 (Inherited: 0x2d0)
struct URadioPlayerWidgetBase : UFortHUDElementWidget {
	char pad_2D0[0x40]; // 0x2d0(0x40)
	struct FFortPrioritizedWidgetData PriorityData; // 0x310(0x02)
	char pad_312[0x6]; // 0x312(0x06)
	struct UStreamingRadioPlayerComponent* LastValidComp; // 0x318(0x08)

	void SetControllable(bool bCanControl); // Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSourcePlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSourceFinished(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShouldShowDueToEntrance(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation LastSource); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLoadingNewSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFailedToOpenSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDisconnectFromComp(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnControllerGainedNewFortPawn(struct AFortPawn* FortPawn); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn // (Final|Native|Protected) // @ game+0x696d7bc
	void NativeExitedVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle // (Final|Native|Protected) // @ game+0x696d7a8
	void NativeEnteredVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle // (Final|Native|Protected) // @ game+0x696d794
};

