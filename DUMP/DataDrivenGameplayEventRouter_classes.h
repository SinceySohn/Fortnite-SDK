// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEventLegacyBroadcast : UInterface {
};

// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEventDescriptorLibrary : UBlueprintFunctionLibrary {

	bool BroadcastEvent(struct FGameplayEventDescriptor& EventDescriptor, struct UObject* EventContext, int32_t& Event, struct UObject* EventRouterScope, struct AActor* RouterContextActor); // Function DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6373f6c
};

