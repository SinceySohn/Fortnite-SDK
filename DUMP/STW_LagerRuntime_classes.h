// Class STW_LagerRuntime.FortQuestLivingWorldVolume
// Size: 0x5d8 (Inherited: 0x588)
struct AFortQuestLivingWorldVolume : AFortAthenaLivingWorldVolume {
	struct FGameplayTagContainer NoPlayerNeedsQuestFilterTags; // 0x588(0x20)
	struct FGameplayTagContainer PlayerNeedsQuestFilterTags; // 0x5a8(0x20)
	struct UFortQuestItemDefinition* RequiredQuest; // 0x5c8(0x08)
	char pad_5D0[0x8]; // 0x5d0(0x08)

	void HandlePIEQuestsUpdated(); // Function STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated // (Final|Native|Protected) // @ game+0x258f6c0
};

