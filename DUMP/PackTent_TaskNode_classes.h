// BlueprintGeneratedClass PackTent_TaskNode.PackTent_TaskNode_C
// Size: 0x278 (Inherited: 0x248)
struct UPackTent_TaskNode_C : UFortConversationTaskNode_DataDrivenService {
	bool Debug; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UFortWorldItemDefinition* PickupWID; // 0x250(0x08)
	struct FGameplayTagContainer Failed Reason; // 0x258(0x20)

	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // Function PackTent_TaskNode.PackTent_TaskNode_C.ExecuteTaskNode // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

