// BlueprintGeneratedClass B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C
// Size: 0xca0 (Inherited: 0xa20)
struct AB_Prj_Athena_ShockGrenade_Parent_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xa28(0x08)
	struct UAudioComponent* BeepTimer; // 0xa30(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0xa38(0x08)
	struct USkeletalMeshComponent* ShockGrenadeMesh; // 0xa40(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa48(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0xa50(0x08)
	struct UParticleSystemComponent* Effect_Distance; // 0xa58(0x08)
	struct UParticleSystem* P_Explosion; // 0xa60(0x08)
	struct USoundBase* Cue_DistantSound; // 0xa68(0x08)
	struct USoundBase* Cue_CloseSound; // 0xa70(0x08)
	struct USoundBase* Cue_GrenadeFuseSound; // 0xa78(0x08)
	struct FVector HitLocation; // 0xa80(0x18)
	struct AFortPawn* Target; // 0xa98(0x08)
	struct USoundBase* Cue_BeepSound; // 0xaa0(0x08)
	struct FVector HitNormal; // 0xaa8(0x18)
	bool StuckVehicle; // 0xac0(0x01)
	char pad_AC1[0x7]; // 0xac1(0x07)
	struct TArray<enum class EObjectTypeQuery> DestroyObjectTypes; // 0xac8(0x10)
	struct FScalableFloat DestroyDistance; // 0xad8(0x28)
	struct FScalableFloat ShouldDestroy; // 0xb00(0x28)
	struct FScalableFloat LaunchVelocity; // 0xb28(0x28)
	struct FScalableFloat ExplodeDelay; // 0xb50(0x28)
	struct FScalableFloat EnemiesTakeFallDamage; // 0xb78(0x28)
	struct FScalableFloat AllPlayersTakeFallDamage; // 0xba0(0x28)
	struct USoundBase* Cue_StopSound; // 0xbc8(0x08)
	struct FName ChestLootTableName; // 0xbd0(0x04)
	struct FGameplayTag FeedbackCue; // 0xbd4(0x04)
	bool HitWater; // 0xbd8(0x01)
	char pad_BD9[0x7]; // 0xbd9(0x07)
	struct USoundBase* Water Debris Explosion; // 0xbe0(0x08)
	struct UParticleSystem* P_WaterExplosion; // 0xbe8(0x08)
	struct AFortAthenaVehicle* TargetVehicle; // 0xbf0(0x08)
	struct UGameplayEffect* GE_KnockbackStatus; // 0xbf8(0x08)
	struct FGameplayTag Tag_BuildingPhysocs; // 0xc00(0x04)
	char pad_C04[0x4]; // 0xc04(0x04)
	struct FScalableFloat Row_BuildingImpulseMult; // 0xc08(0x28)
	struct UNiagaraSystem* NS_Explosion; // 0xc30(0x08)
	struct UNiagaraSystem* NS_WaterExplosion; // 0xc38(0x08)
	struct FScalableFloat Row_VehicleImpulseMult; // 0xc40(0x28)
	struct FScalableFloat Row_PhysicsPawnObjectMult; // 0xc68(0x28)
	double PhysicsPawnObjectForceModifier; // 0xc90(0x08)
	struct AFortAIPawn* FortAIPawn; // 0xc98(0x08)

	void GetLaunchOriginPoint(struct FVector& HitLocation); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.GetLaunchOriginPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector CalculateLaunchVel(struct AActor* Target); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.CalculateLaunchVel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Handle Pawn Detach RC(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.Handle Pawn Detach RC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Stop_Rotation(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void LaunchFortAIPawn(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.LaunchFortAIPawn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void LaunchPlayerVehicle(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.LaunchPlayerVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchBuldingActors(struct AActor* Actor); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.LaunchBuldingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void QuestSendShockwaveTag(); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.QuestSendShockwaveTag // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchNonPawnActors(struct AActor* Actor); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.LaunchNonPawnActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_ShockGrenade_Parent(int32_t EntryPoint); // Function B_Prj_Athena_ShockGrenade_Parent.B_Prj_Athena_ShockGrenade_Parent_C.ExecuteUbergraph_B_Prj_Athena_ShockGrenade_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

