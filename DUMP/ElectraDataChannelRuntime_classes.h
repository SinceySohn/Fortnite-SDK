// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
// Size: 0x300 (Inherited: 0x288)
struct AElectraDataChannelTarget : AActor {
	char pad_288[0x78]; // 0x288(0x78)

	void SetTargetAlias(struct FString InAlias); // Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias // (Final|Native|Public|BlueprintCallable) // @ game+0x681527c
	struct FString GetTargetAlias(); // Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6814d8c
};

// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
// Size: 0x2b8 (Inherited: 0x288)
struct AElectraDataChannelPlayer : AActor {
	struct FMulticastInlineDelegate OnTerminalError; // 0x288(0x10)
	char pad_298[0x20]; // 0x298(0x20)

	void UseTimeFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x68153ec
	void PlayFromStateStreamServer(struct FString InStatePlaylistURL); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer // (Final|Native|Public|BlueprintCallable) // @ game+0x6814fd4
	void PlayFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x6814f54
	void PlayFromFile(struct FString InFilename); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x6814e00
	void EndPlayback(); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x6814cf0
};

// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
// Size: 0x2c0 (Inherited: 0x288)
struct AElectraDataChannelRecorder : AActor {
	char pad_288[0x38]; // 0x288(0x38)

	void UseTimeFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x681546c
	void StartRecording(); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x68153d8
	void RecordToFile(struct FString InFilename); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile // (Final|Native|Public|BlueprintCallable) // @ game+0x6815128
	void EndRecording(); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x6814d04
};

