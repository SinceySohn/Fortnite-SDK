// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayStatsLibrary : UBlueprintFunctionLibrary {

	bool NotEqual_GameplayStatTagGameplayStatTag(struct FGameplayStatTag A, struct FGameplayStatTag B); // Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7304054
	bool EqualEqual_GameplayStatTagGameplayStatTag(struct FGameplayStatTag A, struct FGameplayStatTag B); // Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7303f94
};

// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// Size: 0x98 (Inherited: 0x30)
struct UGameplayTagTableManager : UDataAsset {
	struct TArray<struct FManagedGameplayTagDataTableItem> Tables; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

