// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// Size: 0xe28 (Inherited: 0xde8)
struct AAthenaSupplyDropBalloon_C : AFortAthenaSupplyDropBalloon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xde8(0x08)
	struct UFortHealthBarComponent* FortHealthBar; // 0xdf0(0x08)
	bool CrateDestroyed; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct FMulticastInlineDelegate OnBalloonDestroyed; // 0xe00(0x10)
	struct USoundBase* BalloonPopSound; // 0xe10(0x08)
	struct UParticleSystem* BalloonPopFX; // 0xe18(0x08)
	struct UGameplayEffect* GE_DamageReduction; // 0xe20(0x08)

	void HandleSupplyDropMovementStopped(struct FHitResult& ImpactResult); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.HandleSupplyDropMovementStopped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct AActor* GetAttachedActorToMark(); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.GetAttachedActorToMark // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int32_t EntryPoint); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ExecuteUbergraph_AthenaSupplyDropBalloon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnBalloonDestroyed__DelegateSignature(); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnBalloonDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

