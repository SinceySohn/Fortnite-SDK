// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
// Size: 0x350 (Inherited: 0x330)
struct AFortAthenaMutator_CR_CreativeAllowLootItem : AFortAthenaMutator {
	struct FGameplayTagContainer ItemGameplayTagsNotAllowed; // 0x330(0x20)

	void SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed); // Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67e435c
};

// Class LootController.FortAthenaMutator_CR_LootChoice
// Size: 0x330 (Inherited: 0x330)
struct AFortAthenaMutator_CR_LootChoice : AFortAthenaMutator {

	struct UDataTable* GetLootTierDataTable(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x5f99cf4
	struct FString GetLootSelectionString(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x67e4150
	struct UDataTable* GetLootPackageTable(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x5f99cf4
	struct FGameplayTagContainer GetContextTagsToRemove(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x67e40ec
	struct FGameplayTagContainer GetContextTagsToAdd(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x67e40ec
};

// Class LootController.LootControllerNativeComponent
// Size: 0xc0 (Inherited: 0xa0)
struct ULootControllerNativeComponent : UActorComponent {
	struct TArray<struct AActor*> OutActors; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnAsyncGetActorsOfClassCompleted; // 0xb0(0x10)

	void PrintDebugString(struct FString DebugString, bool LogWarning); // Function LootController.LootControllerNativeComponent.PrintDebugString // (Final|Native|Protected|BlueprintCallable) // @ game+0x67e41c8
	bool IsThrottleEnabled(); // Function LootController.LootControllerNativeComponent.IsThrottleEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x67e41ac
	bool IsRemoveLootEnabled(); // Function LootController.LootControllerNativeComponent.IsRemoveLootEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x67e4190
	void AsyncGetActorsOfClass(struct UObject* WorldContextObject, struct AActor* ActorClass); // Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass // (Final|Native|Protected|BlueprintCallable) // @ game+0x67e4028
	void AddToArray(struct TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32_t InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd); // Function LootController.LootControllerNativeComponent.AddToArray // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x67e3e8c
};

