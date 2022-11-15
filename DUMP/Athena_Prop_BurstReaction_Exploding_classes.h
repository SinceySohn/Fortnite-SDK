// BlueprintGeneratedClass Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C
// Size: 0x1091 (Inherited: 0xf30)
struct AAthena_Prop_BurstReaction_Exploding_C : AAthena_Prop_BurstReaction_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	struct TArray<struct FAthena_DamageStateParticles> DamageStateParticleSystems; // 0xf38(0x10)
	struct TArray<struct UParticleSystemComponent*> SpawnedDamageStateEmitters; // 0xf48(0x10)
	double KnockbackAmount; // 0xf58(0x08)
	struct AActor* CurrentPlayerToLaunch; // 0xf60(0x08)
	struct UGameplayEffect* GE_Explode; // 0xf68(0x08)
	struct FGameplayTag ExplosionCUE; // 0xf70(0x04)
	bool HealthIsZero; // 0xf74(0x01)
	char pad_F75[0x3]; // 0xf75(0x03)
	struct FGameplayTagContainer TC_MeleeDamage; // 0xf78(0x20)
	bool CanGenerateResources; // 0xf98(0x01)
	char pad_F99[0x7]; // 0xf99(0x07)
	struct FScalableFloat Radius; // 0xfa0(0x28)
	struct FScalableFloat KnockbackStrength; // 0xfc8(0x28)
	struct USoundBase* PreExplodeSound; // 0xff0(0x08)
	struct UCurveFloat* SpawnRampCurve; // 0xff8(0x08)
	double OnFireThreshold; // 0x1000(0x08)
	struct FGameplayTag FireCue; // 0x1008(0x04)
	bool bShouldDie; // 0x100c(0x01)
	char pad_100D[0x3]; // 0x100d(0x03)
	struct AFortPlayerController* LastDamageInstigator; // 0x1010(0x08)
	struct FScalableFloat VehicleDamage; // 0x1018(0x28)
	struct FScalableFloat VehicleImpulseStrength; // 0x1040(0x28)
	struct FScalableFloat VehicleImpulseStrengthZ; // 0x1068(0x28)
	bool DestroyedByPickAxe; // 0x1090(0x01)

	void ExecuteFireApplicationInRadiusIfCurieEnabled(struct AActor* Fire Application Target); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ExecuteFireApplicationInRadiusIfCurieEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bShouldDie(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnRep_bShouldDie // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanAttemptGenerateResources(struct FGameplayTagContainer& InTags, struct AController* InstigatorController); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.BlueprintCanAttemptGenerateResources // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DamageStateNotify(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnRep_DamageStateNotify // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FireEffect(struct FVector HitLocation); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.FireEffect // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateEmitter(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.DeactivateEmitter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void GrowTimeline(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.GrowTimeline // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeathFX(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.DeathFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFireFx(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnFireFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExplodeAndDie(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ExplodeAndDie // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExplosionTrace(); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ExplosionTrace // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_Prop_BurstReaction_Exploding(int32_t EntryPoint); // Function Athena_Prop_BurstReaction_Exploding.Athena_Prop_BurstReaction_Exploding_C.ExecuteUbergraph_Athena_Prop_BurstReaction_Exploding // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

