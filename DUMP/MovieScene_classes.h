// Class MovieScene.MovieSceneSignedObject
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	char pad_28[0x4]; // 0x28(0x04)
	struct FGuid Signature; // 0x2c(0x10)
	char pad_3C[0x1c]; // 0x3c(0x1c)
};

// Class MovieScene.MovieSceneSection
// Size: 0xf0 (Inherited: 0x58)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x60(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x98(0x10)
	struct FFrameNumber PreRollFrames; // 0xa8(0x04)
	struct FFrameNumber PostRollFrames; // 0xac(0x04)
	int32_t RowIndex; // 0xb0(0x04)
	int32_t OverlapPriority; // 0xb4(0x04)
	char bIsActive : 1; // 0xb8(0x01)
	char bIsLocked : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float StartTime; // 0xbc(0x04)
	float EndTime; // 0xc0(0x04)
	float PrerollTime; // 0xc4(0x04)
	float PostrollTime; // 0xc8(0x04)
	char bIsInfinite : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	bool bSupportsInfiniteRange; // 0xd0(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd1(0x02)
	char pad_D3[0x1d]; // 0xd3(0x1d)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x90a2d5c
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2cd4
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2c4c
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2b1c
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2a90
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x90a29fc
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x90a276c
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x90a26e8
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1a44
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1a28
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a726dc
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6476bb8
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a190c
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a79824
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a16d8
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a15c0
};

// Class MovieScene.MovieSceneHookSection
// Size: 0x108 (Inherited: 0xf0)
struct UMovieSceneHookSection : UMovieSceneSection {
	char pad_F0[0x10]; // 0xf0(0x10)
	char bRequiresRangedHook : 1; // 0x100(0x01)
	char bRequiresTriggerHooks : 1; // 0x100(0x01)
	char pad_100_2 : 6; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class MovieScene.MovieSceneTrack
// Size: 0x98 (Inherited: 0x58)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x04)
	char pad_5C[0x1]; // 0x5c(0x01)
	bool bIsEvalDisabled; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct TArray<int32_t> RowsDisabled; // 0x60(0x10)
	char pad_70[0x4]; // 0x70(0x04)
	struct FGuid EvaluationFieldGuid; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x88(0x10)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct UMovieSceneCompiledData* CompiledData; // 0x58(0x08)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x60(0x01)
	bool bParentContextsAreSignificant; // 0x61(0x01)
	bool bPlayableDirectly; // 0x62(0x01)
	enum class EMovieSceneSequenceFlags SequenceFlags; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)

	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource(); // Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a176c
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a152c
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a148c
};

// Class MovieScene.MovieSceneEntitySystem
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneEntitySystem : UObject {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x6d8 (Inherited: 0x28)
struct UMovieSceneEntitySystemLinker : UObject {
	char pad_28[0x270]; // 0x28(0x270)
	struct FMovieSceneEntitySystemGraph SystemGraph; // 0x298(0x138)
	char pad_3D0[0x308]; // 0x3d0(0x308)
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x130 (Inherited: 0xf0)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xf0(0x24)
	float StartOffset; // 0x114(0x04)
	float TimeScale; // 0x118(0x04)
	float PrerollTime; // 0x11c(0x04)
	char NetworkMask; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UMovieSceneSequence* SubSequence; // 0x128(0x08)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x90a78e0
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a78c8
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x4a0 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	char pad_28[0x1f8]; // 0x28(0x1f8)
	struct TScriptInterface<IMovieSceneSequencePlayerObserver> Observer; // 0x220(0x10)
	struct FMulticastInlineDelegate OnPlay; // 0x230(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x240(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x250(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x260(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x270(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	char bReversePlayback : 1; // 0x284(0x01)
	char pad_284_1 : 7; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UMovieSceneSequence* Sequence; // 0x288(0x08)
	struct FFrameNumber StartTime; // 0x290(0x04)
	int32_t DurationFrames; // 0x294(0x04)
	float DurationSubFrames; // 0x298(0x04)
	int32_t CurrentNumLoops; // 0x29c(0x04)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2a0(0x20)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2c0(0x88)
	char pad_348[0x88]; // 0x348(0x88)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x3d0(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x3e0(0x10)
	struct UMovieSceneSequenceTickManager* TickManager; // 0x3f0(0x08)
	char pad_3F8[0xa8]; // 0x3f8(0xa8)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2eb0
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2e9c
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2dd8
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x7f97f48
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2b98
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2970
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2874
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x90a27e8
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2640
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a24cc
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2424
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2410
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x90a2348
	void RPC_OnFinishPlaybackEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x90a22bc
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x90a21ec
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState // (Final|Native|Public|BlueprintCallable) // @ game+0x90a23d4
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x90a2144
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1fd0
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1f2c
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams, struct FMovieSceneSequencePlayToParams PlayToParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1e34
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1e20
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1da0
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1d8c
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1d78
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1cd0
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1b5c
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1ab4
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1a98
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1a7c
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1a60
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1a14
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a19cc
	struct FString GetSequenceName(bool bAddClientInfo); // Function MovieScene.MovieSceneSequencePlayer.GetSequenceName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1924
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67f0370
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a18f4
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1814
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69679b8
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a17fc
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a17a4
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a1740
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1724
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a16ec
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x90a15dc
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x90a1478
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieScene.MovieSceneDeterminismSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneDeterminismSource : UInterface {
};

// Class MovieScene.MovieSceneEvaluationHook
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEvaluationHook : UInterface {
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieSceneSequencePlayerObserver
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequencePlayerObserver : UInterface {
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneChannelOverrideContainer
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneChannelOverrideContainer : UObject {
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
// Size: 0x78 (Inherited: 0x28)
struct UMovieSceneSectionChannelOverrideRegistry : UObject {
	struct TMap<int32_t, struct UMovieSceneChannelOverrideContainer*> Overrides; // 0x28(0x50)
};

// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTrackTemplateProducer : UInterface {
};

// Class MovieScene.MovieSceneCompiledData
// Size: 0x3f8 (Inherited: 0x28)
struct UMovieSceneCompiledData : UObject {
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x188(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2a0(0xf0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x390(0x30)
	struct TArray<struct FFrameTime> DeterminismFences; // 0x3c0(0x10)
	struct FGuid CompiledSignature; // 0x3d0(0x10)
	struct FGuid CompilerVersion; // 0x3e0(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0(0x01)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1(0x01)
	enum class EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2(0x01)
	char pad_3F3[0x5]; // 0x3f3(0x05)
};

// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x230 (Inherited: 0x28)
struct UMovieSceneCompiledDataManager : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x178(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8(0x50)
	char pad_218[0x18]; // 0x218(0x18)
};

// Class MovieScene.MovieSceneEntityProvider
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEntityProvider : UInterface {
};

// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x68 (Inherited: 0x40)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem {
	char pad_40[0x28]; // 0x40(0x28)
};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneValueDecomposer
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneValueDecomposer : UInterface {
};

// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class MovieScene.MovieSceneEvaluationHookSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40(0x50)
};

// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePreAnimatedStateSystemInterface : UInterface {
};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneTrackInstance
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneTrackInstance : UObject {
	struct UObject* AnimatedObject; // 0x28(0x08)
	bool bIsMasterTrackInstance; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UMovieSceneEntitySystemLinker* PrivateLinker; // 0x38(0x08)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x40(0x10)
};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xf0 (Inherited: 0x40)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0xb0]; // 0x40(0xb0)
};

// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x48 (Inherited: 0x40)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	struct UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40(0x08)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x9086150
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x90860b0
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x9086010
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x9085f20
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class MovieScene.NodeAndChannelMappings
// Size: 0x28 (Inherited: 0x28)
struct UNodeAndChannelMappings : UInterface {
};

// Class MovieScene.MovieSceneNodeGroup
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroup : UObject {
};

// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneNodeGroupCollection : UObject {
};

// Class MovieScene.MovieScene
// Size: 0x158 (Inherited: 0x58)
struct UMovieScene : UMovieSceneSignedObject {
	char pad_58[0x8]; // 0x58(0x08)
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x60(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x70(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x80(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x90(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xf8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x108(0x10)
	struct FFrameRate TickResolution; // 0x118(0x08)
	struct FFrameRate DisplayRate; // 0x120(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x128(0x01)
	enum class EUpdateClockSource ClockSource; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x130(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x148(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	char pad_38[0x58]; // 0x38(0x58)
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	char pad_28[0x4]; // 0x28(0x04)
	struct FName FolderName; // 0x2c(0x04)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneSequenceTickManagerClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequenceTickManagerClient : UInterface {
};

// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0x98 (Inherited: 0x28)
struct UMovieSceneSequenceTickManager : UObject {
	char pad_28[0x70]; // 0x28(0x70)
};

// Class MovieScene.MovieSceneBoolSection
// Size: 0x1d0 (Inherited: 0xf0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0xf8(0xd8)
};

// Class MovieScene.MovieSceneSpawnSection
// Size: 0x1d8 (Inherited: 0x1d0)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
	char pad_1D0[0x8]; // 0x1d0(0x08)
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0xb8 (Inherited: 0x98)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char pad_98[0x8]; // 0x98(0x08)
	bool bHighPassFilter; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xa8(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xf0 (Inherited: 0xf0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x70 (Inherited: 0x68)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xa8(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x130 (Inherited: 0x130)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

// Class MovieScene.TestMovieSceneEvalHookTrack
// Size: 0xa8 (Inherited: 0x98)
struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x98(0x10)
};

// Class MovieScene.TestMovieSceneEvalHookSection
// Size: 0x120 (Inherited: 0x108)
struct UTestMovieSceneEvalHookSection : UMovieSceneHookSection {
	char pad_108[0x18]; // 0x108(0x18)
};

// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xb8 (Inherited: 0x98)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
	struct FGuid ObjectGuid; // 0xa8(0x10)
};

