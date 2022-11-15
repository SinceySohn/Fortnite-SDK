// BlueprintGeneratedClass StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C
// Size: 0x250 (Inherited: 0x248)
struct UStashItem_Rental_TaskNode_C : UFortConversationTaskNode_DataDrivenService {
	struct FGameplayTag GC StashItemPaid; // 0x248(0x04)
	int32_t StashedItemIndex; // 0x24c(0x04)

	void (struct AActor* Actor, bool& bInvalidItem); // Function StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void (struct AActor* Actor, bool& bInvalidItem); // Function StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void WasPreviouslyStashedItemInvalid(struct AActor* Actor, bool& bInvalidItem); // Function StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C.WasPreviouslyStashedItemInvalid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GatherStaticExtraData(struct FConversationContext& Context, struct TArray<struct FConversationNodeParameterPair>& InOutExtraData); // Function StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C.GatherStaticExtraData // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // Function StashItem_Rental_TaskNode.StashItem_Rental_TaskNode_C.ExecuteTaskNode // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

