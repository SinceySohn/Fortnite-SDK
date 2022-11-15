// BlueprintGeneratedClass BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C
// Size: 0xff0 (Inherited: 0xb28)
struct ABGA_AppleSun_Apple_Athena_C : ABuildingGameplayActorCrashpad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb28(0x08)
	struct UBoxComponent* PlayerDetector; // 0xb30(0x08)
	struct UAudioComponent* Applesun_Activate; // 0xb38(0x08)
	struct UAudioComponent* AppleSun_Warning_Loop_01; // 0xb40(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xb48(0x08)
	struct UBoxComponent* SidesPawnBlocker; // 0xb50(0x08)
	struct UStaticMeshComponent* Pad; // 0xb58(0x08)
	struct UBoxComponent* Box; // 0xb60(0x08)
	struct UParticleSystemComponent* P_AppleSun_Spawn; // 0xb68(0x08)
	struct UParticleSystemComponent* P_AppleSun_DespawnTell; // 0xb70(0x08)
	float BeginDeflate_NewTrack_0_E511D36F4D2E46D8AE33548AA66A76B4; // 0xb78(0x04)
	enum class ETimelineDirection BeginDeflate__Direction_E511D36F4D2E46D8AE33548AA66A76B4; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	struct UTimelineComponent* BeginDeflate; // 0xb80(0x08)
	struct FVector Destroy_Scale_A5AFC0D0430E50F432FB2FB260534172; // 0xb88(0x18)
	float Destroy_Deflate_A5AFC0D0430E50F432FB2FB260534172; // 0xba0(0x04)
	enum class ETimelineDirection Destroy__Direction_A5AFC0D0430E50F432FB2FB260534172; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	struct UTimelineComponent* Destroy; // 0xba8(0x08)
	struct FScalableFloat GrowthStart; // 0xbb0(0x28)
	bool OverlapLaunchesActivated; // 0xbd8(0x01)
	char pad_BD9[0x7]; // 0xbd9(0x07)
	struct UCurveFloat* LaunchCurve; // 0xbe0(0x08)
	struct FTimerHandle LifespanTimer; // 0xbe8(0x08)
	struct FTimerHandle TimeoutTellTimer; // 0xbf0(0x08)
	struct UCurveFloat* LaunchAngleWeight; // 0xbf8(0x08)
	struct FVector StartScale; // 0xc00(0x18)
	struct FGameplayTag SpawnFeedbackGC; // 0xc18(0x04)
	struct FGameplayTag DeathFeedbackGC; // 0xc1c(0x04)
	struct FGameplayTagContainer T_Quest_AppleSun_Use; // 0xc20(0x20)
	struct FVector WaterLocation; // 0xc40(0x18)
	struct FVector BounceLocation; // 0xc58(0x18)
	struct FScalableFloat GrowthEnd; // 0xc70(0x28)
	struct FScalableFloat MinLaunch; // 0xc98(0x28)
	struct FScalableFloat MaxLaunch; // 0xcc0(0x28)
	struct FScalableFloat VehicleLaunchMultiplierXY; // 0xce8(0x28)
	struct FScalableFloat VehicleLaunchMultiplierZ; // 0xd10(0x28)
	struct FScalableFloat ProjectileLaunchMultiplierXY; // 0xd38(0x28)
	struct FScalableFloat ProjectileLaunchMultiplierZ; // 0xd60(0x28)
	struct FScalableFloat Lifespan_; // 0xd88(0x28)
	struct FScalableFloat TimeoutTellDuration_; // 0xdb0(0x28)
	struct FScalableFloat HorizontalLaunch; // 0xdd8(0x28)
	double MinNonPawnVelocity; // 0xe00(0x08)
	double MaxNonPawnVelocity; // 0xe08(0x08)
	struct AActor* LinkedActor; // 0xe10(0x08)
	struct TMap<struct AFortPawn*, double> TrackedPlayers; // 0xe18(0x50)
	struct FGameplayTagContainer TC_Crashpad+; // 0xe68(0x20)
	struct FScalableFloat MinLaunch_Crashpad+; // 0xe88(0x28)
	struct FScalableFloat MaxLaunch_Crashpad+; // 0xeb0(0x28)
	bool HasLifespan; // 0xed8(0x01)
	bool IsWorldPlaced; // 0xed9(0x01)
	bool UsesCollisionTimer; // 0xeda(0x01)
	bool DestroyByShark; // 0xedb(0x01)
	struct FGameplayTag Tag_BuildingPhysics; // 0xedc(0x04)
	struct FScalableFloat Row_PhysicsObjectImpulseMult; // 0xee0(0x28)
	double PhysicsObjectMassMultiplier; // 0xf08(0x08)
	struct AActor* CollidingActor; // 0xf10(0x08)
	struct UGameplayEffect* FallImmunityGameplayEffect; // 0xf18(0x08)
	struct FGameplayTag Tag_EventUsedLaunchPad; // 0xf20(0x04)
	char pad_F24[0x4]; // 0xf24(0x04)
	double Placed Launch Mod; // 0xf28(0x08)
	struct UGameplayEffect* WebLaunchGameplayEffect; // 0xf30(0x08)
	struct UFXSystemAsset* Death Effect Template; // 0xf38(0x08)
	struct UFXSystemComponent* Death Effect; // 0xf40(0x08)
	bool Death Effect At Loction; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct USoundBase* 3P BounceSound; // 0xf50(0x08)
	struct USoundBase* 1P Bounce Sound; // 0xf58(0x08)
	struct USoundBase* DestroySound; // 0xf60(0x08)
	bool CachedUseNativeCollisionHandling; // 0xf68(0x01)
	char pad_F69[0x7]; // 0xf69(0x07)
	struct FCrashpadDynamicParams HandleCollisionDynamicParams; // 0xf70(0x60)
	struct TArray<double> CrashpadBounceScales; // 0xfd0(0x10)
	struct FGameplayTag Explosion_Water_GC; // 0xfe0(0x04)
	struct FGameplayTag ; // 0xfe4(0x04)
	struct FTimerHandle CollisionCheckTimerHandle; // 0xfe8(0x08)

	void OnHitPredicted(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnHitPredicted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckPredictedProjectile(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckPredictedProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check For Ballercoaster(struct UObject* Colliding Actor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Check For Ballercoaster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayBounceAudio(struct AActor* Actor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.PlayBounceAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector Get Launch Reference Vector(struct ACharacter* Fort Pawn); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Get Launch Reference Vector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForSpyPerk(bool& HasPerk); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckForSpyPerk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginDeflate__FinishedFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BeginDeflate__UpdateFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Destroy__FinishedFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Destroy__UpdateFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BounceMulticast(struct FVector Position, double BounceIntensity, struct AActor* Actor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BounceMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DespawnTell(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DespawnTell // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void DestroyPad(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyPad // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void CatchObjectsInside(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CatchObjectsInside // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchBuldingActors(struct AActor* Actor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.LaunchBuldingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void DoBounceMulticast(struct FVector BounceLocation, float BounceIntensity, struct AActor* BouncingActor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DoBounceMulticast // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DestroyCrashpad(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyCrashpad // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DoCollisionHandling(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DoCollisionHandling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ServerDestroyPad(bool NewParam); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ServerDestroyPad // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartSlowTellDestroy(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.StartSlowTellDestroy // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_AppleSun_Apple_Athena(int32_t EntryPoint); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ExecuteUbergraph_BGA_AppleSun_Apple_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

