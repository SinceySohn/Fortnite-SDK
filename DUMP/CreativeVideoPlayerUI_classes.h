// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
// Size: 0x410 (Inherited: 0x3a8)
struct UCreativeVideoPlayerFullScreenWidget : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct USoundSourceBus* SourceBus; // 0x3c0(0x08)
	struct USoundClass* SoundClass; // 0x3c8(0x08)
	struct FDataTableRowHandle HoldToSkipAction; // 0x3d0(0x10)
	struct UCommonButtonLegacy* Button_Skip; // 0x3e0(0x08)
	float SkipButtonTimeout; // 0x3e8(0x04)
	float LastInteractionTime; // 0x3ec(0x04)
	bool bControlsVisible; // 0x3f0(0x01)
	char pad_3F1[0xf]; // 0x3f1(0x0f)
	struct UAudioComponent* SoundComponent; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnSkipButtonActionProgress(float HeldPercent); // Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress // (Final|Native|Private) // @ game+0x67e5d5c
	void OnSkipButtonActionComplete(); // Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete // (Final|Native|Private) // @ game+0x67e5d48
};

