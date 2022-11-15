// BlueprintGeneratedClass Speech.Speech_C
// Size: 0x244 (Inherited: 0x238)
struct USpeech_C : UFortConversationTaskNode_Speech {
	struct FGameplayTag SpeakerTag; // 0x238(0x04)
	struct FGameplayTag ListenerTag; // 0x23c(0x04)
	struct FGameplayTag VoiceOverTag; // 0x240(0x04)

	void HandleVOPlayback(struct FConversationContext& Context); // Function Speech.Speech_C.HandleVOPlayback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void ExecuteClientEffects(struct FConversationContext& Context); // Function Speech.Speech_C.ExecuteClientEffects // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText GetParticipantNameStyled(struct FConversationContext& Context, struct FGameplayTag ParticipantTag); // Function Speech.Speech_C.GetParticipantNameStyled // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void SwapSpeakerAndListener(); // Function Speech.Speech_C.SwapSpeakerAndListener // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool GetNodeBodyColor(struct FLinearColor& BodyColor); // Function Speech.Speech_C.GetNodeBodyColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // Function Speech.Speech_C.ExecuteTaskNode // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

