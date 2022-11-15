// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// Size: 0x338 (Inherited: 0x318)
struct UFortVoiceChannelSpeaker_C : UFortVoiceChannelSpeakerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* AnimateVoice; // 0x320(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x328(0x08)
	struct UHorizontalBox* Content; // 0x330(0x08)

	void OnStyleAssigned(enum class EChannelSpeakerStyle NewStyle); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnAnimateTalkingChanged(bool bIsNowTalking); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32_t EntryPoint); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker // (Final|UbergraphFunction) // @ game+0xdef49c
};

