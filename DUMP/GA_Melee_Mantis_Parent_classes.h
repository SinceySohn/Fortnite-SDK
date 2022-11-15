// BlueprintGeneratedClass GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C
// Size: 0xbdc (Inherited: 0xb48)
struct UGA_Melee_Mantis_Parent_C : UFortGameplayAbility_Mantis {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct AFortPlayerPawn* PlayerCharacter; // 0xb50(0x08)
	bool CanSwingInWater; // 0xb58(0x01)
	char pad_B59[0x7]; // 0xb59(0x07)
	struct UGameplayEffect* GE_KnockBackImmunity; // 0xb60(0x08)
	struct FActiveGameplayEffectHandle Handle_KnockbackImmunity; // 0xb68(0x08)
	struct FName SavedCollisionChannel; // 0xb70(0x04)
	char pad_B74[0x4]; // 0xb74(0x04)
	double AdditionalLevels; // 0xb78(0x08)
	double GELevel; // 0xb80(0x08)
	double DefaultLevel; // 0xb88(0x08)
	struct FGameplayTag RarityUncommon; // 0xb90(0x04)
	struct FGameplayTag RarityRare; // 0xb94(0x04)
	struct FGameplayTag RarityEpic; // 0xb98(0x04)
	struct FGameplayTag RarityLegendary; // 0xb9c(0x04)
	struct FGameplayTag RarityMythic; // 0xba0(0x04)
	char pad_BA4[0x4]; // 0xba4(0x04)
	struct AActor* AimAssistTarget; // 0xba8(0x08)
	bool HasAimAssistTarget; // 0xbb0(0x01)
	char pad_BB1[0x7]; // 0xbb1(0x07)
	double TimeOfLastTarget; // 0xbb8(0x08)
	double ; // 0xbc0(0x08)
	double MinTimeBetweenTargets; // 0xbc8(0x08)
	struct UTargetingPreset* Targeting Preset; // 0xbd0(0x08)
	bool bForceUnCrouch; // 0xbd8(0x01)
	bool Allow Translation Warp; // 0xbd9(0x01)
	bool Allow Rotation Warp; // 0xbda(0x01)
	bool Snapshot Target Location; // 0xbdb(0x01)

	struct AFortWeapon* GetBestValidWeapon(); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.GetBestValidWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool Should Switch Targets(struct TArray<struct AActor*>& AllTarget, struct AActor*& CurrentTarget); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Should Switch Targets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsValidTarget(struct AActor* Actor); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.IsValidTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ConfigureRootMotionWarping(struct AActor*& OutTargetActor, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, bool& bOutSnapshotTargetLocation); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.ConfigureRootMotionWarping // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitAbility(struct AFortPlayerPawn*& Output_Get); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPawnCollision(struct AFortPawn* Fort Pawn, bool Collision On); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.SetPawnCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetKnockbackImmunity(bool ImmunityOn); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.SetKnockbackImmunity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D(); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_A97B41C34D59B42DF83C0EAAB120D871(struct FTargetingRequestHandle TargetingHandle); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Targeted_A97B41C34D59B42DF83C0EAAB120D871 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTag ApplicationTag); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.BP_OnMantisTechniqueHit // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void GetAimAssistTarget(); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.GetAimAssistTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Melee_Mantis_Parent(int32_t EntryPoint); // Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.ExecuteUbergraph_GA_Melee_Mantis_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

