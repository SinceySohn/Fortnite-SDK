// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C
// Size: 0xb95 (Inherited: 0xb5d)
struct UGA_Ranged_GenericProjectileImpact_HookGun_C : UGA_Ranged_GenericDamage_C {
	char pad_B5D[0x3]; // 0xb5d(0x03)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xb60(0x20)
	struct FGameplayTag RopeActiveTag; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct UFortQuestItemDefinition* QuestItem; // 0xb88(0x08)
	struct FName ObjBackendName; // 0xb90(0x04)
	bool bChangeEquipmentTagsBlocked; // 0xb94(0x01)

	void Overflow(struct UFortWorldItem* Item Dropped); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.Overflow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_OnEndAbility // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_CommitExecute // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

