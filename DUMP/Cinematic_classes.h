// WidgetBlueprintGeneratedClass Cinematic.Cinematic_C
// Size: 0x5a1 (Inherited: 0x548)
struct UCinematic_C : UFortUIStateWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UNamedSlot* LocalizedAudioOnlyMovieSlot; // 0x550(0x08)
	struct UCommonWidgetStackLegacy* MainContentStack; // 0x558(0x08)
	struct UNamedSlot* MovieSlot; // 0x560(0x08)
	struct UOverlay* OverlayMovieOverlay; // 0x568(0x08)
	struct USubtitles_C* Subtitles; // 0x570(0x08)
	struct UTeamMicStack_C* TeamMicStack; // 0x578(0x08)
	struct UBuildWatermark_C* Widget_BuildWatermark; // 0x580(0x08)
	struct ULegacy_MovieWidget_C* MovieWidget; // 0x588(0x08)
	struct UFortMediaSubtitlesPlayer* SubtitlesPlayer; // 0x590(0x08)
	struct UObject* CinematicMediaSoundWave; // 0x598(0x08)
	bool bFinished; // 0x5a0(0x01)

	void GetAudioTrackIndex(int32_t& AudioTrack); // Function Cinematic.Cinematic_C.GetAudioTrackIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopAndClearSubtitles(); // Function Cinematic.Cinematic_C.StopAndClearSubtitles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, struct UFortMediaSubtitlesPlayer* NewSubtitles); // Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMoviePlaying(bool MoviePlaying); // Function Cinematic.Cinematic_C.SetMoviePlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearMovieWidget(struct UFortMovieWidget*& MovieWidgetToClear); // Function Cinematic.Cinematic_C.ClearMovieWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearMovieSlot(); // Function Cinematic.Cinematic_C.ClearMovieSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidget* PopContentWidgetInternal(struct FContentPushState State); // Function Cinematic.Cinematic_C.PopContentWidgetInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SkipMovie(); // Function Cinematic.Cinematic_C.SkipMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearMovie(); // Function Cinematic.Cinematic_C.ClearMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Show Movie(struct UMediaPlayer* MediaPlayer, struct UMediaSource* MediaSource); // Function Cinematic.Cinematic_C.Show Movie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function Cinematic.Cinematic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleClientEvent_QueueCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function Cinematic.Cinematic_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleEndReached(); // Function Cinematic.Cinematic_C.HandleEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleClientEvent_SkipCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PushContentWidgetInternal(struct UWidget* Widget, struct FContentPushState State); // Function Cinematic.Cinematic_C.PushContentWidgetInternal // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnterState(enum class EFortUIState PreviousUIState); // Function Cinematic.Cinematic_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitState(enum class EFortUIState NextUIState); // Function Cinematic.Cinematic_C.OnExitState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Cinematic(int32_t EntryPoint); // Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

