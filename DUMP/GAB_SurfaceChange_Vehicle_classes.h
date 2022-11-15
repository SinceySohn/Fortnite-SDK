// BlueprintGeneratedClass GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C
// Size: 0xca4 (Inherited: 0xb20)
struct UGAB_SurfaceChange_Vehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	bool Debug; // 0xb28(0x01)
	char pad_B29[0x7]; // 0xb29(0x07)
	struct FScalableFloat RemovalDelay; // 0xb30(0x28)
	struct UGameplayEffect* GE_SurfaceChange_Ice; // 0xb58(0x08)
	struct FScalableFloat BaseVerticalBounceVelocity; // 0xb60(0x28)
	struct FScalableFloat BaseLateralBounceVelocity; // 0xb88(0x28)
	double LavaBounceMultiplier; // 0xbb0(0x08)
	struct FScalableFloat BounceMultiplierStepAmount; // 0xbb8(0x28)
	struct FScalableFloat MaxBounceMultiplier; // 0xbe0(0x28)
	struct FScalableFloat RandomConeAngle; // 0xc08(0x28)
	double ReplicatedRandomAngle; // 0xc30(0x08)
	struct FScalableFloat FacingAngleVelocityComponent; // 0xc38(0x28)
	struct FGameplayTagContainer IceTags; // 0xc60(0x20)
	struct FGameplayTagContainer LavaTags; // 0xc80(0x20)
	struct FGameplayTag LavaBounceCue; // 0xca0(0x04)

	void SurfaceCleanup(enum class EPhysicalSurface SurfaceType); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.SurfaceCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LavaBounce(struct UObject* AvatarActor); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.LavaBounce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HotfixableGEApplication(struct FScalableFloat& Input, struct UGameplayEffect* GameplayEffectAppliedOnTrue, struct UGameplayEffect* GameplayEffectAppliedOnFalse); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.HotfixableGEApplication // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveGameplayEffects(); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.RemoveGameplayEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void MulticastLavaBounce(struct UObject* AvatarActor); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.MulticastLavaBounce // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GAB_SurfaceChange_Vehicle(int32_t EntryPoint); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.ExecuteUbergraph_GAB_SurfaceChange_Vehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

