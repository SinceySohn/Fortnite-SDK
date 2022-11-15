// BlueprintGeneratedClass GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C
// Size: 0xc40 (Inherited: 0xbe8)
struct UGA_Athena_RealityFlower_SeedPod_Explode_C : UGA_HeldObject_Explode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe8(0x08)
	struct FScalableFloat Row_PlayerKnockback_MinZComponentNormalized; // 0xbf0(0x28)
	struct FGameplayTagContainer Tag_GE_GrantedTagToRemove; // 0xc18(0x20)
	struct AActor* SourceActor; // 0xc38(0x08)

	struct FTransform GetCustomAbilitySourceTransform(); // Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.GetCustomAbilitySourceTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void CalculateLaunchVelocity(struct FVector PlayerPosition, struct FVector MyPosition, struct FVector& Velocity); // Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void ApplyDamage(struct AActor* Actor); // Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.ApplyDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode(int32_t EntryPoint); // Function GA_Athena_RealityFlower_SeedPod_Explode.GA_Athena_RealityFlower_SeedPod_Explode_C.ExecuteUbergraph_GA_Athena_RealityFlower_SeedPod_Explode // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

