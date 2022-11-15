// BlueprintGeneratedClass GA_HeldObject_Explode.GA_HeldObject_Explode_C
// Size: 0xbe8 (Inherited: 0xb20)
struct UGA_HeldObject_Explode_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FScalableFloat KnockbackStrength; // 0xb28(0x28)
	struct FScalableFloat VehicleImpulseStrength; // 0xb50(0x28)
	struct FScalableFloat VehicleImpulseStrengthZ; // 0xb78(0x28)
	struct AActor* CurrentPlayerToLaunch; // 0xba0(0x08)
	struct UGameplayEffect* GE_Explode; // 0xba8(0x08)
	struct AActor* Instigator; // 0xbb0(0x08)
	struct UFortAbilitySystemComponent* InstigatorAbility; // 0xbb8(0x08)
	struct FScalableFloat Row_BuildingActorKnockMult; // 0xbc0(0x28)

	void CalculateLaunchVelocity(struct FVector PlayerPosition, struct FVector MyPosition, struct FVector& Velocity); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.MakeEffectContext // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Cancelled_CB46D31E40DE0E96BD9CEBB5B054252D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.Cancelled_CB46D31E40DE0E96BD9CEBB5B054252D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_CB46D31E40DE0E96BD9CEBB5B054252D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.Targeted_CB46D31E40DE0E96BD9CEBB5B054252D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ApplyDamage(struct AActor* Actor); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.ApplyDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_HeldObject_Explode(int32_t EntryPoint); // Function GA_HeldObject_Explode.GA_HeldObject_Explode_C.ExecuteUbergraph_GA_HeldObject_Explode // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

