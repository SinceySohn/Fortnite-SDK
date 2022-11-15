// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6ba8748
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x6ba8640
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xf40 (Inherited: 0xf10)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_F10[0x20]; // 0xf10(0x20)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xf30(0x01)
	char bAutoCalculateSignificance : 1; // 0xf30(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xf30(0x01)
	char pad_F30_3 : 5; // 0xf30(0x01)
	char pad_F31[0xf]; // 0xf31(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x6ba8870
};

