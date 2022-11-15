// BlueprintGeneratedClass B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C
// Size: 0xe30 (Inherited: 0xa20)
struct AB_Prj_Ranged_FireworkGun_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UNiagaraComponent* NS_GL_Ribbon_SmokeTrail; // 0xa28(0x08)
	struct UNiagaraComponent* NS_Emote_SingAlong_Book; // 0xa30(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xa38(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0xa40(0x08)
	struct UAudioComponent* LoopingAudioTell; // 0xa48(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa50(0x08)
	float DestroyedMesh_MeshScale_53C37E534D8E6BC96F676B8CC341475F; // 0xa58(0x04)
	enum class ETimelineDirection DestroyedMesh__Direction_53C37E534D8E6BC96F676B8CC341475F; // 0xa5c(0x01)
	char pad_A5D[0x3]; // 0xa5d(0x03)
	struct UTimelineComponent* DestroyedMesh; // 0xa60(0x08)
	float VelocityAndGravityLerp_VelocityCurve_5042BED8496B897AD99487978D0D234E; // 0xa68(0x04)
	enum class ETimelineDirection VelocityAndGravityLerp__Direction_5042BED8496B897AD99487978D0D234E; // 0xa6c(0x01)
	char pad_A6D[0x3]; // 0xa6d(0x03)
	struct UTimelineComponent* VelocityAndGravityLerp; // 0xa70(0x08)
	struct UNiagaraSystem* RibbonTrail_NSC; // 0xa78(0x08)
	struct USoundBase* Bounce_Sound; // 0xa80(0x08)
	struct FGameplayTag BounceCueTag; // 0xa88(0x04)
	char pad_A8C[0x4]; // 0xa8c(0x04)
	struct FScalableFloat Initial_Speed; // 0xa90(0x28)
	struct FScalableFloat Final_XYSpeedMultiplier; // 0xab8(0x28)
	struct FScalableFloat DisableMarkingPlayers; // 0xae0(0x28)
	int32_t CurrentBounces; // 0xb08(0x04)
	bool isSlowing; // 0xb0c(0x01)
	char pad_B0D[0x3]; // 0xb0d(0x03)
	struct FScalableFloat GravityAfterBounced; // 0xb10(0x28)
	bool InWater; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct UNiagaraSystem* SparkExplosion_NS; // 0xb40(0x08)
	double SparkExplosionSize; // 0xb48(0x08)
	struct ABuildingGameplayActor* FireMeshBGA; // 0xb50(0x08)
	struct AFortProjectileBase* spark; // 0xb58(0x08)
	struct USoundBase* HitWater_Sound; // 0xb60(0x08)
	struct USoundBase* SparkExplosion_Sound; // 0xb68(0x08)
	struct FScalableFloat NumSparksToDrop; // 0xb70(0x28)
	struct FScalableFloat TimeBeforeSparkExplosion; // 0xb98(0x28)
	struct FScalableFloat SparkSpeed; // 0xbc0(0x28)
	struct FScalableFloat SparkGravityScale; // 0xbe8(0x28)
	struct FScalableFloat GravityAfterParachute; // 0xc10(0x28)
	struct FVector Lerp_StartVel; // 0xc38(0x18)
	struct FScalableFloat MaxBounces; // 0xc50(0x28)
	double ChuteAngleInterpSpeed; // 0xc78(0x08)
	bool ShootSparksInCone; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	double Lerp_StartXYSpeed; // 0xc88(0x08)
	double Lerp_FinalXYSpeed; // 0xc90(0x08)
	double Lerp_StartZSpeed; // 0xc98(0x08)
	struct FVector Lerp_XYDirection; // 0xca0(0x18)
	double CachedRandomSparkOffsetAngle; // 0xcb8(0x08)
	struct FVector Impact Point; // 0xcc0(0x18)
	struct USoundBase* Impact Sound; // 0xcd8(0x08)
	struct UAudioComponent* Parachute Audio; // 0xce0(0x08)
	struct USoundBase* Parachute Disapears; // 0xce8(0x08)
	int32_t MarkActorInt; // 0xcf0(0x04)
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct UParticleSystem* IndicatedPS; // 0xcf8(0x08)
	struct FName ParticleSystemParamName; // 0xd00(0x04)
	char pad_D04[0x4]; // 0xd04(0x04)
	struct FVector PSOffset; // 0xd08(0x18)
	struct FVector PSDBNOOffset; // 0xd20(0x18)
	struct FName PSVectorParamName; // 0xd38(0x04)
	char pad_D3C[0x4]; // 0xd3c(0x04)
	struct AAthena_PlayerController_C* AthenaPlayerControler; // 0xd40(0x08)
	double CurrentMarkingRadius; // 0xd48(0x08)
	struct FVector OriginalParachuteScale; // 0xd50(0x18)
	struct FScalableFloat Initial_Gravity; // 0xd68(0x28)
	bool MarkPlayers; // 0xd90(0x01)
	char pad_D91[0x3]; // 0xd91(0x03)
	int32_t SparksCurrentlySpawned; // 0xd94(0x04)
	bool isDying; // 0xd98(0x01)
	char pad_D99[0x7]; // 0xd99(0x07)
	struct FScalableFloat MarkingRange; // 0xda0(0x28)
	struct FGameplayTag Tag_ButterCake; // 0xdc8(0x04)
	char pad_DCC[0x4]; // 0xdcc(0x04)
	struct UParticleSystem* Water Impact PS; // 0xdd0(0x08)
	int32_t FireworkColor; // 0xdd8(0x04)
	char pad_DDC[0x4]; // 0xddc(0x04)
	struct TArray<struct AActor*> CurrentlyTrackedActors; // 0xde0(0x10)
	struct TArray<enum class EObjectTypeQuery> Shere Overlap Objects; // 0xdf0(0x10)
	double OverlapSphere Radius; // 0xe00(0x08)
	struct TArray<double> Firework Color Pick Float; // 0xe08(0x10)
	struct FName Firework Color Parameter; // 0xe18(0x04)
	char pad_E1C[0x4]; // 0xe1c(0x04)
	double DefaultFireworkColor; // 0xe20(0x08)
	int32_t FireworkColorIndexMin; // 0xe28(0x04)
	int32_t FireworkColorIndexMax; // 0xe2c(0x04)

	void SpawnBounceFX(struct FHitResult& Hit); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SpawnBounceFX // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void VelocityAndGravityLerp__FinishedFunc(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.VelocityAndGravityLerp__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void VelocityAndGravityLerp__UpdateFunc(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.VelocityAndGravityLerp__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void DestroyedMesh__FinishedFunc(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DestroyedMesh__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void DestroyedMesh__UpdateFunc(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DestroyedMesh__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SparkExplosion(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SparkExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropSingleSpark(double Rotation, struct FVector Location); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DropSingleSpark // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HaltVelocityCurve(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.HaltVelocityCurve // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SlowSpeed(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SlowSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SparkAndSlowDown(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SparkAndSlowDown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropMultipleSparks(int32_t Number, struct FVector Location); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DropMultipleSparks // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetInitialProjectileValues(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SetInitialProjectileValues // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IncrementBounces(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.IncrementBounces // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Play Impact Sound(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.Play Impact Sound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SendOutPing(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.SendOutPing // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropSparksOnWater(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DropSparksOnWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaterBounce(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.WaterBounce // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DetroySelf(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.DetroySelf // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitWaterEffects(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.HitWaterEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Explosion Detection Radius(); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.Set Explosion Detection Radius // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Ranged_FireworkGun(int32_t EntryPoint); // Function B_Prj_Ranged_FireworkGun.B_Prj_Ranged_FireworkGun_C.ExecuteUbergraph_B_Prj_Ranged_FireworkGun // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

