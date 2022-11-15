// Class NightNightModeRuntime.FortCameraMode_NightNight
// Size: 0x60 (Inherited: 0x60)
struct UFortCameraMode_NightNight : UFortCinematicCamera {
};

// Class NightNightModeRuntime.FortPawnComponent_NightNight
// Size: 0xc0 (Inherited: 0xa0)
struct UFortPawnComponent_NightNight : UFortPawnComponent {
	bool bAutoPossess; // 0xa0(0x01)
	bool bAllowUIViewTarget; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct UFortCameraMode* CameraModeOverrideClass; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	void SetAllowUIViewTarget(bool bAllow); // Function NightNightModeRuntime.FortPawnComponent_NightNight.SetAllowUIViewTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x6950c60
	void OnUIViewTargetChanged(struct UFortUICameraManagerComponent* InUICameraManagerComponent, struct AActor* OldUIViewTarget, struct AActor* NewUIViewTarget); // Function NightNightModeRuntime.FortPawnComponent_NightNight.OnUIViewTargetChanged // (Final|Native|Private) // @ game+0x6950b68
};

