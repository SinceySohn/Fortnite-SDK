// BlueprintGeneratedClass AnimNotify_GameplayEvent.AnimNotify_GameplayEvent_C
// Size: 0xf0 (Inherited: 0x38)
struct UAnimNotify_GameplayEvent_C : UAnimNotify {
	struct FGameplayTag EventTag; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FGameplayEventData EventPayload; // 0x40(0xb0)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotify_GameplayEvent.AnimNotify_GameplayEvent_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FString GetNotifyName(); // Function AnimNotify_GameplayEvent.AnimNotify_GameplayEvent_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

