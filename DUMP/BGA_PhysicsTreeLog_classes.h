// BlueprintGeneratedClass BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C
// Size: 0x11b8 (Inherited: 0xef0)
struct ABGA_PhysicsTreeLog_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UNiagaraComponent* NS_Physics_Tree_InWater_Ripples; // 0xef8(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xf00(0x08)
	struct UCapsuleComponent* WaterInteractMiddle; // 0xf08(0x08)
	struct UCapsuleComponent* WaterInteractBottom; // 0xf10(0x08)
	struct UCapsuleComponent* WaterInteractTop; // 0xf18(0x08)
	struct UNiagaraComponent* NS_Physics_Tree_Environment_Impact; // 0xf20(0x08)
	struct TArray<struct FScalableFloat> PlayerImpactTiers; // 0xf28(0x10)
	struct TArray<struct FScalableFloat> PlayerImpulseTiers; // 0xf38(0x10)
	struct FVector LastImpactNormal; // 0xf48(0x18)
	struct FScalableFloat VerticalImpulseRatio; // 0xf60(0x28)
	struct UBuoyancyComponent* BuoyancyComponent; // 0xf88(0x08)
	double NextImminentCollisionTime; // 0xf90(0x08)
	double TimeBetweenImminentCollisions; // 0xf98(0x08)
	struct UMaterialInstanceDynamic* MatReference; // 0xfa0(0x08)
	double BreakTreeDamage; // 0xfa8(0x08)
	double NextPotentialLaunchTime; // 0xfb0(0x08)
	double LaunchDelay; // 0xfb8(0x08)
	struct FGameplayTag TreeDestructionBurstCue; // 0xfc0(0x04)
	char pad_FC4[0xc]; // 0xfc4(0x0c)
	struct FTransform TreeDestructionTransform; // 0xfd0(0x60)
	int32_t CachedDamageValue; // 0x1030(0x04)
	char pad_1034[0x4]; // 0x1034(0x04)
	double SnowTimerValue; // 0x1038(0x08)
	struct FTimerHandle SnowRemovalTimerHandle; // 0x1040(0x08)
	struct UFXSystemComponent* WaterFxPhysicsTreeMiddle; // 0x1048(0x08)
	struct TArray<struct UFXSystemComponent*> FxSystemArray; // 0x1050(0x10)
	double WaterFxPlaneDepth; // 0x1060(0x08)
	struct FVector WaterFxPlaneLocation; // 0x1068(0x18)
	int32_t WaterFxIndex; // 0x1080(0x04)
	char pad_1084[0x4]; // 0x1084(0x04)
	struct UFXSystemComponent* WaterFxPhysicsTreeTop; // 0x1088(0x08)
	struct UFXSystemComponent* WaterFxPhysicsTreeBottom; // 0x1090(0x08)
	struct FTimerHandle WaterSurfaceInfoTimer; // 0x1098(0x08)
	struct FVector WaterFxPlaneNormal; // 0x10a0(0x18)
	struct ABP_FluidSim_FN_C* FluidSim; // 0x10b8(0x08)
	struct TMap<struct FName, struct FName> Sockets And Endpoints; // 0x10c0(0x50)
	struct FFluidForceDynamic Fluid Force Dynamic; // 0x1110(0x70)
	double LogLength; // 0x1180(0x08)
	bool CanPlayDeathEffects; // 0x1188(0x01)
	char pad_1189[0x7]; // 0x1189(0x07)
	struct FScalableFloat bSplitWhenCutBySaber; // 0x1190(0x28)

	void CalculateSplitOffset(bool bSmallSide, double SplitPercentage, double& LocalZOffset); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateSplitScale(bool bSmallSide, double SplitPercentage, double& SplitScale); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitScale // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct AB_PhysicsTree_Reporter_C* GetAnalyticsReporterActor(bool& Success); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetAnalyticsReporterActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReportTreeFellingToAnalytics(struct AActor* FelledBy); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReportTreeFellingToAnalytics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_BreakTreeDamage(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnRep_BreakTreeDamage // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool& Minimum Met, double& Impulse); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetPlayerImpulseVelocityFromImpactVelocity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LogDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.LogDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void RemoveSnow(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.RemoveSnow // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CE_SplashInWater(struct FVector SplashLocation); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CE_SplashInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AdjustWaterSettings(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AdjustWaterSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Water FX(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Update Water FX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AwakeStateChanged(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AwakeStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Control2dSimForces(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Control2dSimForces // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonEnteredWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonExitedWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_PhysicsTreeLog(int32_t EntryPoint); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ExecuteUbergraph_BGA_PhysicsTreeLog // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

