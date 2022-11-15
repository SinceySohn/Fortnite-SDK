// BlueprintGeneratedClass RetrieveStashedItem_TaskNode.RetrieveStashedItem_TaskNode_C
// Size: 0x250 (Inherited: 0x248)
struct URetrieveStashedItem_TaskNode_C : UFortConversationTaskNode_DataDrivenService {
	struct FGameplayTag GC RetrieveItem; // 0x248(0x04)
	int32_t StashedItemIndex; // 0x24c(0x04)

	void GatherStaticExtraData(struct FConversationContext& Context, struct TArray<struct FConversationNodeParameterPair>& InOutExtraData); // Function RetrieveStashedItem_TaskNode.RetrieveStashedItem_TaskNode_C.GatherStaticExtraData // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // Function RetrieveStashedItem_TaskNode.RetrieveStashedItem_TaskNode_C.ExecuteTaskNode // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

