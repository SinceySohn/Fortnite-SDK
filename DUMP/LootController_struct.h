// ScriptStruct LootController.BuildingContainersArrayEntry
// Size: 0xa0 (Inherited: 0x00)
struct FBuildingContainersArrayEntry {
	struct ABuildingContainer* BuildingContainer; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FName SearchLootTierGroup; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FGameplayTagContainer GameplayTags; // 0x78(0x20)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct LootController.BuildingContainersFoundEntry
// Size: 0x18 (Inherited: 0x00)
struct FBuildingContainersFoundEntry {
	struct FGameplayTag GameplayTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FBuildingContainersArrayEntry> BuildingContainers; // 0x08(0x10)
};

