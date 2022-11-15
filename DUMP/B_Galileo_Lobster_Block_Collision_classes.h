// BlueprintGeneratedClass B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C
// Size: 0xc48 (Inherited: 0x9d8)
struct AB_Galileo_Lobster_Block_Collision_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UBoxComponent* Box2; // 0x9e0(0x08)
	struct UBoxComponent* Box3; // 0x9e8(0x08)
	struct USceneComponent* DefaultSceneRoot1; // 0x9f0(0x08)
	struct UBoxComponent* Box1; // 0x9f8(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa00(0x08)
	struct AB_Athena_Galileo_Lobster_Parent_C* BP_GalileoLobster; // 0xa08(0x08)
	struct FScalableFloat StartingHealth; // 0xa10(0x28)
	struct FScalableFloat PoiseRegenCooldown; // 0xa38(0x28)
	double ImpulseMultiplier; // 0xa60(0x08)
	double CurrentPoise; // 0xa68(0x08)
	struct FScalableFloat CenterReflectConeAngle; // 0xa70(0x28)
	struct FScalableFloat ImpulseZ; // 0xa98(0x28)
	struct FScalableFloat SpinImpulseMultiplier; // 0xac0(0x28)
	struct FScalableFloat ImpulseXY; // 0xae8(0x28)
	struct FScalableFloat ReflectProjectileSpeed; // 0xb10(0x28)
	struct FScalableFloat SideReflectProjectileConeAngle; // 0xb38(0x28)
	struct FScalableFloat ReflectProjectileCooldown; // 0xb60(0x28)
	bool OwnerDied; // 0xb88(0x01)
	bool CanReflect; // 0xb89(0x01)
	bool BlockBreak; // 0xb8a(0x01)
	bool bUp; // 0xb8b(0x01)
	bool bRight; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	struct UGameplayEffect* GE_Deflect; // 0xb90(0x08)
	struct UGameplayEffect* GE_Heal; // 0xb98(0x08)
	struct UGameplayEffect* GE_BlockBreak; // 0xba0(0x08)
	struct UGameplayEffect* GE_DamageResist; // 0xba8(0x08)
	struct FTimerHandle RepairTimerHandle; // 0xbb0(0x08)
	struct FGameplayTag GC_DeflectGeneric; // 0xbb8(0x04)
	struct FGameplayTag GC_DeflectBun; // 0xbbc(0x04)
	struct FGameplayTag GC_DeflectLobster; // 0xbc0(0x04)
	struct FGameplayTag GC_BlockBreak; // 0xbc4(0x04)
	struct FGameplayTag T_RangedWeapon; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct FGameplayTagContainer T_BlockBreakDuration; // 0xbd0(0x20)
	struct FGameplayTag T_BlockedDamageEvent; // 0xbf0(0x04)
	struct FActiveGameplayEffectHandle DeflectReactionHandle; // 0xbf4(0x08)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct FTimerHandle DeflectReactionTimerHandle; // 0xc00(0x08)
	int32_t CollisionEnabled; // 0xc08(0x04)
	struct FGameplayTag T_DeflectReaction; // 0xc0c(0x04)
	bool HitCenter; // 0xc10(0x01)
	char pad_C11[0x7]; // 0xc11(0x07)
	struct AFortPlayerPawn* ReflectTarget; // 0xc18(0x08)
	struct FScalableFloat FinisherImpulseMultiplier; // 0xc20(0x28)

	void BlockedLobsterImpulse(struct FHitResult HitInfo, struct ACharacter* Instigator); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.BlockedLobsterImpulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SendBlockedDamageEvent(double Damage, struct AActor* DamageCauser); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.SendBlockedDamageEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_CollisionEnabled(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.OnRep_CollisionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteBlockGameplayCue(double Damage, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext, struct AActor* Instigator, struct FHitResult HitResult, struct FVector Color Hot, struct FVector Color Cool, bool& WasGalileoBun); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.ExecuteBlockGameplayCue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.GameplayCue.Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ApplyHeal(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.ApplyHeal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartHealingTimer(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.StartHealingTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void (struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemovalChecks(struct AFortPlayerPawn* PlayerPawn); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.RemovalChecks // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingHealthChanged_Event(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.OnBuildingHealthChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnReflectProj(struct FHitResult HitInfo, bool WasGalileoBun); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.SpawnReflectProj // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCanReflect(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.SetCanReflect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveDeflectReaction(); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.RemoveDeflectReaction // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Galileo_Lobster_Block_Collision(int32_t EntryPoint); // Function B_Galileo_Lobster_Block_Collision.B_Galileo_Lobster_Block_Collision_C.ExecuteUbergraph_B_Galileo_Lobster_Block_Collision // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

