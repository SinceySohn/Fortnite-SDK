// Class KoalaUI.FortGameSettingRegistryExtension_Koala
// Size: 0x68 (Inherited: 0x28)
struct UFortGameSettingRegistryExtension_Koala : UFortGameSettingRegistryExtension {
	char pad_28[0x8]; // 0x28(0x08)
	struct FFortSettingNameExtensions SettingExtensions; // 0x30(0x18)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class KoalaUI.FortSidebarPanelKoala
// Size: 0x3e0 (Inherited: 0x3a8)
struct UFortSidebarPanelKoala : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct UCommonButtonBase* Button_KoalaDummy; // 0x3c0(0x08)
	struct UFortLazyImage* QrCodeImage; // 0x3c8(0x08)
	struct FString QRCodeURL; // 0x3d0(0x10)

	void OnConnectionChanged(bool bConnected); // Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
// Size: 0x70 (Inherited: 0x30)
struct UFortUIGameFeatureAction_AttemptKoalaModal : UFortUIGameFeatureAction_PostFrontendFlowActions {
	struct TSoftClassPtr<UObject> KoalaGraphicsModalClass; // 0x30(0x28)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class KoalaUI.KoalaGraphicsModal
// Size: 0x3d0 (Inherited: 0x3a8)
struct UKoalaGraphicsModal : UCommonActivatableWidget {
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct UCommonButtonBase* Button_KeepEnabled; // 0x3c0(0x08)
	struct UCommonButtonBase* Button_Disable; // 0x3c8(0x08)
};

// Class KoalaUI.KoalaHUDWidget
// Size: 0x4d8 (Inherited: 0x3a8)
struct UKoalaHUDWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	float ClipDebounceTime; // 0x3b0(0x04)
	float PlayerKilledPlayerReminderTime; // 0x3b4(0x04)
	float MatchEndedReminderTime; // 0x3b8(0x04)
	float ClipReminderCooldownTime; // 0x3bc(0x04)
	struct USoundSubmix* ClipAudioSubmix; // 0x3c0(0x08)
	struct UCommonActionWidget* ClipActionWidget; // 0x3c8(0x08)
	struct FDataTableRowHandle ClipObjectInputAction; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct TMap<int32_t, struct FKoalaClipInfo> ClipTracker; // 0x3e8(0x50)
	char pad_438[0x8]; // 0x438(0x08)
	int32_t LastClipID; // 0x440(0x04)
	char pad_444[0xe]; // 0x444(0x0e)
	enum class EKoalaMockClipMode MockClipMode; // 0x452(0x01)
	char pad_453[0x1]; // 0x453(0x01)
	int32_t MockClipUploadShortTime; // 0x454(0x04)
	int32_t MockClipUploadLongTime; // 0x458(0x04)
	int32_t MockClipCreateShortTime; // 0x45c(0x04)
	int32_t MockClipCreateLongTime; // 0x460(0x04)
	char pad_464[0x74]; // 0x464(0x74)

	void UnregisterClipButtonInput(); // Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput // (Final|Native|Private) // @ game+0x693de08
	void RegisterClipButtonInput(); // Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput // (Final|Native|Private) // @ game+0x693ddf4
	void OnTouchAreaMouseDown(); // Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown // (Final|Native|Protected|BlueprintCallable) // @ game+0x693dde0
	void OnReminderTimerStarted(float Time); // Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnReminderEnded(); // Function KoalaUI.KoalaHUDWidget.OnReminderEnded // (Final|Native|Protected|BlueprintCallable) // @ game+0x693ddc8
	void OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus); // Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputProgress(float Progress); // Function KoalaUI.KoalaHUDWidget.OnInputProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputComplete(); // Function KoalaUI.KoalaHUDWidget.OnInputComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnConnectionChanged(enum class EKoalaConnectionStatus InStatus); // Function KoalaUI.KoalaHUDWidget.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnClipStatusChanged(int32_t InClipID, enum class EKoalaClipStatus InClipStatus, float InUploadProgress); // Function KoalaUI.KoalaHUDWidget.OnClipStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAvailabilityChanged(enum class EKoalaAvailability Availability); // Function KoalaUI.KoalaHUDWidget.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandlePlayerPawnEmoteStopped(struct UFortItemDefinition* MontageItemDef, struct AFortPawn* PawnEmoting); // Function KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped // (Final|Native|Private) // @ game+0x693dc00
	void HandlePlayerMatchWon(); // Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon // (Final|Native|Private) // @ game+0x693dbec
	void HandleLocalPlayerKilledPlayer(struct AFortPlayerStateAthena* Player); // Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer // (Final|Native|Private) // @ game+0x693db6c
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged // (Final|Native|Protected) // @ game+0x693d8e4
	int32_t GetUploadingClipCount(); // Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x693d8c0
	int32_t GetTrackedClipCount(); // Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount // (Final|Native|Protected|BlueprintCallable) // @ game+0x693d8a0
};

// Class KoalaUI.KoalaMainMenuButton
// Size: 0x1570 (Inherited: 0x1560)
struct UKoalaMainMenuButton : UFortMainMenuButtonExtension {
	char pad_1560[0x10]; // 0x1560(0x10)
};

// Class KoalaUI.KoalaSettingDetailExtension
// Size: 0x278 (Inherited: 0x270)
struct UKoalaSettingDetailExtension : UFortSettingDetailExtension {
	char pad_270[0x8]; // 0x270(0x08)

	void OnConnectionChanged(bool bConnected); // Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAvailabilityChanged(bool bAvailable); // Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

