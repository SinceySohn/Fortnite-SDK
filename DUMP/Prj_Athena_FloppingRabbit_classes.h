// BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C
// Size: 0xf35 (Inherited: 0xad0)
struct APrj_Athena_FloppingRabbit_C : AB_Prj_ThrownConsumable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xad0(0x08)
	struct USceneComponent* LineLoc; // 0xad8(0x08)
	float Timeline_0_NewTrack_0_5E59FE3C4CA5776FE578F391478AB1A6; // 0xae0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5E59FE3C4CA5776FE578F391478AB1A6; // 0xae4(0x01)
	char pad_AE5[0x3]; // 0xae5(0x03)
	struct UTimelineComponent* ; // 0xae8(0x08)
	float BigBob_BigDip_9789CB934FE6D3F1A956D993031B4307; // 0xaf0(0x04)
	enum class ETimelineDirection BigBob__Direction_9789CB934FE6D3F1A956D993031B4307; // 0xaf4(0x01)
	char pad_AF5[0x3]; // 0xaf5(0x03)
	struct UTimelineComponent* BigBob; // 0xaf8(0x08)
	struct FHitResult NullHit; // 0xb00(0xe0)
	struct FRotator WaterRotation; // 0xbe0(0x18)
	struct FVector MeshLocAfterHit; // 0xbf8(0x18)
	double ChanceForBigBob; // 0xc10(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xc18(0x10)
	double DistanceCheckInterval; // 0xc28(0x08)
	struct AActor* Spawner; // 0xc30(0x08)
	double StartingCatchBigBobChance; // 0xc38(0x08)
	double Delay_CatchWindow; // 0xc40(0x08)
	bool CanCatch; // 0xc48(0x01)
	bool InWater; // 0xc49(0x01)
	char pad_C4A[0x6]; // 0xc4a(0x06)
	struct AFortPlayerPawn* PlayerPawn; // 0xc50(0x08)
	struct AB_Athena_FloppingRabbit_Wire_C* Wire; // 0xc58(0x08)
	struct FGameplayTag Event_Fire; // 0xc60(0x04)
	struct FGameplayTag Event_InWorld; // 0xc64(0x04)
	double MaxDistanceFromPlayer; // 0xc68(0x08)
	bool DefaultSpawner; // 0xc70(0x01)
	char pad_C71[0x7]; // 0xc71(0x07)
	double IncreaseBigBobChanceAmount; // 0xc78(0x08)
	struct FScalableFloat Row_ChanceForBigBob; // 0xc80(0x28)
	struct FScalableFloat Row_ChanceForBigBobIncrease; // 0xca8(0x28)
	struct FScalableFloat Row_CatchWindow; // 0xcd0(0x28)
	struct UParticleSystem* FX_HitWater; // 0xcf8(0x08)
	struct FVector FXScaleHitWater; // 0xd00(0x18)
	struct USoundBase* Sound_HitWater; // 0xd18(0x08)
	struct UParticleSystem* FX_WaterDip; // 0xd20(0x08)
	struct UNiagaraSystem* NS_FX_HitWater; // 0xd28(0x08)
	struct UNiagaraSystem* NS_FX_SpawnItems; // 0xd30(0x08)
	struct UNiagaraSystem* NS_FX_WaterDip; // 0xd38(0x08)
	struct UNiagaraSystem* NS_FX_WaterDip_HighTier; // 0xd40(0x08)
	struct UParticleSystem* FX_WaterDip_HighTier; // 0xd48(0x08)
	struct FVector FXScaleWaterDip; // 0xd50(0x18)
	struct USoundBase* Sound_WaterDip; // 0xd68(0x08)
	struct FGameplayTag Event_ProjDestroyed; // 0xd70(0x04)
	struct FGameplayTag Event_Hooked; // 0xd74(0x04)
	struct FScalableFloat Row_DistanceCheck; // 0xd78(0x28)
	struct FScalableFloat Row_DistanceCheckZ; // 0xda0(0x28)
	bool Dipping; // 0xdc8(0x01)
	char pad_DC9[0x7]; // 0xdc9(0x07)
	struct AActor* SpawnedDefaultSpawner; // 0xdd0(0x08)
	struct FScalableFloat Row_BobChanceDelayMin; // 0xdd8(0x28)
	struct FScalableFloat Row_BobChanceDelayMax; // 0xe00(0x28)
	bool SpawnedItem; // 0xe28(0x01)
	char pad_E29[0x7]; // 0xe29(0x07)
	struct ABP_FluidSim_FN_C* FluidSim; // 0xe30(0x08)
	struct USoundBase* Sound_WaterDip_HighTier; // 0xe38(0x08)
	bool WorldSpawner; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct UParticleSystem* FX_SpawnItems; // 0xe48(0x08)
	struct USoundBase* Sound_SpawnItems; // 0xe50(0x08)
	double ItemAttachMinDist; // 0xe58(0x08)
	double ItemAttachDistanceRequirement; // 0xe60(0x08)
	bool bStartedFishingSession; // 0xe68(0x01)
	char pad_E69[0x7]; // 0xe69(0x07)
	double BounceOutOfWaterDelay; // 0xe70(0x08)
	struct FGameplayTag Event_Unhooked; // 0xe78(0x04)
	char pad_E7C[0x4]; // 0xe7c(0x04)
	struct FVector TowardPlayerVector; // 0xe80(0x18)
	struct FVector BobberStartLocation; // 0xe98(0x18)
	struct FVector Target; // 0xeb0(0x18)
	struct FFortAIAssignmentIdentifier AIAssignmentIdentifier; // 0xec8(0x30)
	struct UFortAIAssignmentSettings* AIAssignmentSettings; // 0xef8(0x08)
	struct FName TetherSocket; // 0xf00(0x04)
	bool bTetherCanChangeWeapons; // 0xf04(0x01)
	char pad_F05[0x3]; // 0xf05(0x03)
	struct FGameplayTagContainer FishingRodTag; // 0xf08(0x20)
	struct AB_Athena_FloppingRabbit_Wire_C* FloppingRabbitWire; // 0xf28(0x08)
	struct FGameplayTag GC_MiniGameSplash; // 0xf30(0x04)
	bool bDidHitMeatball; // 0xf34(0x01)

	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DetermineFishLootTierNameAndSetLootForSpawner // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IgnoreTetherablePawn(struct AActor* HitActor, bool& isIgnored); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.IgnoreTetherablePawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnRegisterWithGoalManager(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.UnRegisterWithGoalManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RegisterWithGoalManager(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.RegisterWithGoalManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttemptTether(struct AActor* HitActor, bool& bTethered); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.AttemptTether // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSheetVals(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BigBob__FinishedFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BigBob__UpdateFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void FullDip(bool InWorldSpawner); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CatchWindow(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryCatch(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideAndKill(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DistanceCheck(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceKill(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HitWater(bool FishSpawner); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void CheckForDip(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForHighTierSpawner(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnItemsFX(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CustomPickupAttach(struct AFortPickup* FortPickup); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WriteNothingCaughtFishingAnalytic(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReelIn(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReelIn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ServerAttemptTether(struct APawn* TetherActor); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ServerAttemptTether // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Minigame_MoveBobber(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Minigame_MoveBobber // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DipFx(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DipFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ClientReelIn(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ClientReelIn // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleMiniGameSplashLoop(bool On); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ToggleMiniGameSplashLoop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_FloppingRabbit(int32_t EntryPoint); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

