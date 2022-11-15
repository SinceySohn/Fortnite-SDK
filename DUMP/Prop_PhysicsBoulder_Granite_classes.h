// BlueprintGeneratedClass Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C
// Size: 0xf78 (Inherited: 0xf70)
struct AProp_PhysicsBoulder_Granite_C : AProp_PhysicsBoulder_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf70(0x08)

	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prop_PhysicsBoulder_Granite(int32_t EntryPoint); // Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ExecuteUbergraph_Prop_PhysicsBoulder_Granite // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

