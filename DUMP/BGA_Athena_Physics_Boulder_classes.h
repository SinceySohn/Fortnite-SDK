// BlueprintGeneratedClass BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C
// Size: 0xfa8 (Inherited: 0xa08)
struct ABGA_Athena_Physics_Boulder_C : ABGA_Athena_Physics_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa08(0x08)
	struct UNiagaraComponent* NS_Boulder_Speedlines; // 0xa10(0x08)
	struct UNiagaraComponent* NS_Boulder_Wake; // 0xa18(0x08)
	struct UFortActorComponent_Affiliation* FortActorComponent_Affiliation; // 0xa20(0x08)
	struct UAthenaPhysicsAIPerceptionStimuliSourceComponent* AthenaPhysicsAIPerceptionStimuliSource; // 0xa28(0x08)
	struct UFortPhysicsObjectNavigationComponent* FortPhysicsObjectNavigation; // 0xa30(0x08)
	struct FGameplayTagContainer QuestTargetTags; // 0xa38(0x20)
	double DelayBetweenDamageFX; // 0xa58(0x08)
	struct USoundBase* DamageSound; // 0xa60(0x08)
	struct TArray<struct AActor*> AlreadyDamagedAndSelf; // 0xa68(0x10)
	bool DamageEnabled; // 0xa78(0x01)
	char pad_A79[0x3]; // 0xa79(0x03)
	struct FGameplayTag ImpactCueLarge; // 0xa7c(0x04)
	struct FGameplayTag ImpactCueSmall; // 0xa80(0x04)
	char pad_A84[0x4]; // 0xa84(0x04)
	struct FTimerHandle EnvironmentDestructionUpdateTimer; // 0xa88(0x08)
	struct FGameplayTag ImpactCuePlayer; // 0xa90(0x04)
	struct FGameplayTag ImpactCueBuilds; // 0xa94(0x04)
	struct FScalableFloat MinSpeedForLowDamage; // 0xa98(0x28)
	struct FScalableFloat MinSpeedForHighDamage; // 0xac0(0x28)
	int32_t DamageState; // 0xae8(0x04)
	int32_t MaterialState; // 0xaec(0x04)
	struct FScalableFloat MinPlayerLaunchSpeed; // 0xaf0(0x28)
	struct FScalableFloat MaxPlayerLaunchSpeed; // 0xb18(0x28)
	struct FScalableFloat SmashEffectRadius; // 0xb40(0x28)
	struct FScalableFloat SmashLaunchSpeed; // 0xb68(0x28)
	struct TMap<struct AFortPawn*, double> PlayersRecentlyDamaged; // 0xb90(0x50)
	struct FScalableFloat PlayerImmunityTimeAfterHit; // 0xbe0(0x28)
	struct APawn* LastInstigator; // 0xc08(0x08)
	struct FHitResult LastHitInfo; // 0xc10(0xe0)
	struct AController* LastServerInstigator; // 0xcf0(0x08)
	struct FScalableFloat PickaxeImpulse; // 0xcf8(0x28)
	struct FScalableFloat LaunchSpeedFromWeakpoint; // 0xd20(0x28)
	struct FScalableFloat DamageImpulseMultiplier; // 0xd48(0x28)
	double ImpactMagnitude; // 0xd70(0x08)
	double LastInstigationTime; // 0xd78(0x08)
	struct FScalableFloat SelfDamageImmunityTime; // 0xd80(0x28)
	struct TArray<struct APawn*> AllInstigatorsSinceSleep; // 0xda8(0x10)
	double PlayerLaunchSpeedMultiplier; // 0xdb8(0x08)
	struct FScalableFloat MaxDistanceFromWeakspot; // 0xdc0(0x28)
	struct FScalableFloat PlayerLaunchSpeedMultiplier_; // 0xde8(0x28)
	struct FVector Effect Location; // 0xe10(0x18)
	double Min Large Impulse Magnitude; // 0xe28(0x08)
	bool KillWeakpoint; // 0xe30(0x01)
	char pad_E31[0x7]; // 0xe31(0x07)
	struct FScalableFloat LowVehicleDamage; // 0xe38(0x28)
	struct FScalableFloat HighVehicleDamage; // 0xe60(0x28)
	struct FVector NormalImpulseDir; // 0xe88(0x18)
	struct FHitResult HitInfo; // 0xea0(0xe0)
	struct FScalableFloat IsSelfDamageAllowed?; // 0xf80(0x28)

	bool IsPlayerImmune(struct AActor* HitActor); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.IsPlayerImmune // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsWeakpointTooFarAway(struct UFortWeakPointComponent* WeakPointComponent, struct FBuildingWeakSpotData& WeakSpotData); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.IsWeakpointTooFarAway // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void DamageFX(struct FVector Location, struct UPrimitiveComponent* HitComponent); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.DamageFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamage(struct FHitResult& Hit, struct APawn* Instigator, double Damage, struct AActor* DamageCauser, struct FGameplayTagContainer DamageTags); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BreakCollisionLoop(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.BreakCollisionLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ParentMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.BndEvt__ParentMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Update(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceDamageCheck(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ForceDamageCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPickedUp(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPutDown(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnPutDown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_Physics_Boulder(int32_t EntryPoint); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ExecuteUbergraph_BGA_Athena_Physics_Boulder // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

