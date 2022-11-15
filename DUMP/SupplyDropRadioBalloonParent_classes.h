// BlueprintGeneratedClass SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C
// Size: 0xed0 (Inherited: 0xde8)
struct ASupplyDropRadioBalloonParent_C : AFortAthenaSupplyDropBalloon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xde8(0x08)
	struct UNiagaraComponent* NS_SupplyDrop_Light; // 0xdf0(0x08)
	struct UAudioComponent* FallingAudio; // 0xdf8(0x08)
	struct FMulticastInlineDelegate OnBalloonDestroyed; // 0xe00(0x10)
	struct USoundBase* BalloonPopSound; // 0xe10(0x08)
	struct UParticleSystem* BalloonPopFX; // 0xe18(0x08)
	struct UGameplayEffect* GE_SupplyDropBalloonDamageReduction; // 0xe20(0x08)
	struct USupplyDropRadioBalloonHealthBarComponent_C* HealthBarComponent; // 0xe28(0x08)
	struct FTimerHandle HandleFallingAudioStateTimerHandle; // 0xe30(0x08)
	char pad_E38[0x8]; // 0xe38(0x08)
	struct FTransform HealthBarComponentRelativeTransform; // 0xe40(0x60)
	struct FString SupplyDropShotDownAnalyticsEvent; // 0xea0(0x10)
	struct FName BalloonPopFXMeshSocket; // 0xeb0(0x04)
	char pad_EB4[0x4]; // 0xeb4(0x04)
	double UpdateFallingAudioStateInterval; // 0xeb8(0x08)
	struct ASupplyDropRadioActorParent_C* SupplyDropRadioActorParent; // 0xec0(0x08)
	struct UNiagaraSystem* BalloonPopFX_NS; // 0xec8(0x08)

	struct AActor* GetAttachedActorToMark(); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.GetAttachedActorToMark // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void RecordBalloonDeathAnalytics(struct AController* Controller); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.RecordBalloonDeathAnalytics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySpawnMaterialAnimation(); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.PlaySpawnMaterialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBalloonStateChanged(enum class ESupplyDropRadioBalloonState BalloonState); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.HandleBalloonStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SupplyDropRadioActorParent(); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnRep_SupplyDropRadioActorParent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSupplyDropRadioActorParent(struct ASupplyDropRadioActorParent_C* InParentActor); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.SetSupplyDropRadioActorParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateFallingAudioState(); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.UpdateFallingAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGroundInfoUpdated(struct FSupplyDropRadioGroundInfoStruct GroundInfo); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.HandleGroundInfoUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnBuildingActorInitialized // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioBalloonParent(int32_t EntryPoint); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.ExecuteUbergraph_SupplyDropRadioBalloonParent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnBalloonDestroyed__DelegateSignature(); // Function SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C.OnBalloonDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

