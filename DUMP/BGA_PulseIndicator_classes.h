// BlueprintGeneratedClass BGA_PulseIndicator.BGA_PulseIndicator_C
// Size: 0xc78 (Inherited: 0x9d8)
struct ABGA_PulseIndicator_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UPulseIndicatorComponent* PulseIndicator; // 0x9e0(0x08)
	struct UNiagaraComponent* NS_Scooter_ProjPhysics; // 0x9e8(0x08)
	struct UParticleSystemComponent* NearDeathBlink; // 0x9f0(0x08)
	struct UParticleSystemComponent* SlowBlink; // 0x9f8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xa00(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xa08(0x08)
	struct FLinearColor Beacon Streak Color (Friendly); // 0xa10(0x10)
	struct FLinearColor Beacon Streak Color (Enemy); // 0xa20(0x10)
	bool IsDead?; // 0xa30(0x01)
	char pad_A31[0x3]; // 0xa31(0x03)
	struct FLinearColor Beacon Core Color (Friendly); // 0xa34(0x10)
	struct FLinearColor Beacon Core Color (Enemy); // 0xa44(0x10)
	bool IsSelfStickDelayOver?; // 0xa54(0x01)
	char pad_A55[0x3]; // 0xa55(0x03)
	double SelfStickDelay; // 0xa58(0x08)
	struct FVector HitLocation; // 0xa60(0x18)
	bool bHasStopped; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct UMaterialInstance* EnemyMeshMaterial; // 0xa80(0x08)
	struct UMaterialInstance* FriendlyMeshMaterial; // 0xa88(0x08)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0xa90(0x20)
	bool bSimulationRunning; // 0xab0(0x01)
	bool StickToAllies; // 0xab1(0x01)
	char pad_AB2[0x6]; // 0xab2(0x06)
	struct TSet<struct AActor*> Ignore; // 0xab8(0x50)
	struct UParticleSystemComponent* PulsingFX; // 0xb08(0x08)
	bool HasMark; // 0xb10(0x01)
	char pad_B11[0x7]; // 0xb11(0x07)
	struct FString IndicatorGroup; // 0xb18(0x10)
	struct AAthena_PlayerController_C* AthenaPlayerControler; // 0xb28(0x08)
	int32_t MarkActorInt; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct UParticleSystem* IndicatedPS; // 0xb38(0x08)
	struct FName ParticleSystemParamName; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct FVector PSOffset; // 0xb48(0x18)
	struct FName PSVectorParamName; // 0xb60(0x04)
	char pad_B64[0x4]; // 0xb64(0x04)
	struct FVector PSDBNOOffset; // 0xb68(0x18)
	struct TArray<struct FIndicatedActorDataWithFilter> IndicatedActorFilters; // 0xb80(0x10)
	struct FTimerHandle PulseTimer; // 0xb90(0x08)
	double Mark Duration; // 0xb98(0x08)
	struct USoundBase* PingSound; // 0xba0(0x08)
	double PulseTime; // 0xba8(0x08)
	double Step Time; // 0xbb0(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	double PostProcessPulseTime; // 0xbc0(0x08)
	struct FGameplayTag Gameplay Cue Death; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct UNiagaraComponent* Pulsing NS_FX; // 0xbd0(0x08)
	struct TArray<struct AActor*> MarkedPlayers; // 0xbd8(0x10)
	struct AFortWeapon* OwnerWeapon; // 0xbe8(0x08)
	struct FGameplayTag EnterWaterCue; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct FScalableFloat Health; // 0xbf8(0x28)
	struct FScalableFloat IndividualMarkDuration; // 0xc20(0x28)
	struct USoundBase* NearDeathAudio; // 0xc48(0x08)
	struct FScalableFloat MarkRadius; // 0xc50(0x28)

	void GetMarkerDisplayTeam(char& Team); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.GetMarkerDisplayTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void On Actor Removed(struct AActor* IndicatedActor); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.On Actor Removed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Actor Added(struct AActor* IndicatedActor); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.On Actor Added // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PulseMarkers(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.PulseMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateModifiedIndicatedActorFilter(struct FIndicatedActorDataWithFilter NewParam, struct FIndicatedActorDataWithFilter& NewParam1); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.CreateModifiedIndicatedActorFilter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Event_Building_Actor_Destroyed(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.Event_Building_Actor_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct FHitResult& Hit); // Function BGA_PulseIndicator.BGA_PulseIndicator_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NearDeathFx(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.NearDeathFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Ready(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.Ready // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Pulse Markers(); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.Start Pulse Markers // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_PulseIndicator(int32_t EntryPoint); // Function BGA_PulseIndicator.BGA_PulseIndicator_C.ExecuteUbergraph_BGA_PulseIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

