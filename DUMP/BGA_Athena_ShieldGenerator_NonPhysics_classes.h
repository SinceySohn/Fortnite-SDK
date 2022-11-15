// BlueprintGeneratedClass BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C
// Size: 0xe78 (Inherited: 0xc91)
struct ABGA_Athena_ShieldGenerator_NonPhysics_C : ABGA_Athena_WithGravity_Parent_C {
	char pad_C91[0x7]; // 0xc91(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc98(0x08)
	struct UFortPhysicsObjectComponent* FortPhysicsObject; // 0xca0(0x08)
	struct UFortPhysicsObjectNavigationComponent* FortPhysicsObjectNavigation; // 0xca8(0x08)
	struct UAudioComponent* EruptStartSound; // 0xcb0(0x08)
	struct UCapsuleComponent* WaterInteractionCollision; // 0xcb8(0x08)
	struct UNiagaraComponent* FX; // 0xcc0(0x08)
	struct UAudioComponent* EruptLoopSound; // 0xcc8(0x08)
	struct USphereComponent* AoECollision; // 0xcd0(0x08)
	struct FGameplayTag Event_ShieldGeneratorDied; // 0xcd8(0x04)
	char pad_CDC[0x4]; // 0xcdc(0x04)
	struct FScalableFloat Row_AoeRadius; // 0xce0(0x28)
	struct FScalableFloat Row_Lifespan; // 0xd08(0x28)
	struct FGameplayTag Tag_GC_HitWorld; // 0xd30(0x04)
	struct FGameplayTag Tag_GC_HitWater; // 0xd34(0x04)
	struct FGameplayTag Tag_GC_Destroyed; // 0xd38(0x04)
	char pad_D3C[0x4]; // 0xd3c(0x04)
	struct UGameplayEffect* GE_Channel; // 0xd40(0x08)
	struct AB_Decal_ShieldGenerator_C* SpawnedDecal; // 0xd48(0x08)
	double WaterSplashFXCooldown; // 0xd50(0x08)
	struct FScalableFloat Row_WaterSplashFXCooldown; // 0xd58(0x28)
	bool DiedFromTimeOut; // 0xd80(0x01)
	char pad_D81[0x3]; // 0xd81(0x03)
	struct FGameplayTag Tag_GC_TimedOut; // 0xd84(0x04)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0xd88(0x10)
	struct FScalableFloat Row_WaterSplashMagnitude; // 0xd98(0x28)
	struct FScalableFloat Row_WaterSplashInterval; // 0xdc0(0x28)
	int32_t SetFXMode; // 0xde8(0x04)
	char pad_DEC[0x4]; // 0xdec(0x04)
	struct FTimerHandle Handle_UpdateDecalTimer; // 0xdf0(0x08)
	bool HasSetPreviousDecalLocation; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct FVector PreviousDecalLocation; // 0xe00(0x18)
	struct FScalableFloat Row_DecalUpdateInterval; // 0xe18(0x28)
	struct FScalableFloat Row_DecalMinDistanceToRespawn; // 0xe40(0x28)
	double DistanceFromLastDecalLocation; // 0xe68(0x08)
	bool SomethingWasPutOut; // 0xe70(0x01)
	char pad_E71[0x3]; // 0xe71(0x03)
	int32_t Count; // 0xe74(0x04)

	void OnRep_SetFXMode(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.OnRep_SetFXMode // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.OnBuildingActorInitialized // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void KillSelf(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.KillSelf // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayFX(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.PlayFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndFX(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.EndFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayHitFX(struct FHitResult HitResult); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.PlayHitFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_Athena_ShieldGenerator_NonPhysics_FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.BndEvt__BGA_Athena_ShieldGenerator_NonPhysics_FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Mark(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.Mark // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBinding(struct AActor* Actor, struct UPrimitiveComponent* HitComp); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.HandleBinding // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetLocationFromServer(struct FVector ServerLocation); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.SetLocationFromServer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update FX for Water(struct AFortWaterBodyActor* Water Body, bool IsInWater); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.Update FX for Water // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetEnterWaterEvent(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.ResetEnterWaterEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_Athena_ShieldGenerator_NonPhysics_FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.BndEvt__BGA_Athena_ShieldGenerator_NonPhysics_FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ApplyWaterInArea(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.ApplyWaterInArea // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateDecal(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.UpdateDecal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveDecal(bool StopDecalUpdates); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.RemoveDecal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnNewDecal(); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.SpawnNewDecal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_ShieldGenerator_NonPhysics(int32_t EntryPoint); // Function BGA_Athena_ShieldGenerator_NonPhysics.BGA_Athena_ShieldGenerator_NonPhysics_C.ExecuteUbergraph_BGA_Athena_ShieldGenerator_NonPhysics // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

