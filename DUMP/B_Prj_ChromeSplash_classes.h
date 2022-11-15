// BlueprintGeneratedClass B_Prj_ChromeSplash.B_Prj_ChromeSplash_C
// Size: 0xae8 (Inherited: 0xa20)
struct AB_Prj_ChromeSplash_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa28(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xa30(0x08)
	struct UNiagaraComponent* NS_Chrome_Splash_Prj_Trail; // 0xa38(0x08)
	struct UStaticMeshComponent* SM_Chrome_Splash_Gadget; // 0xa40(0x08)
	struct UAudioComponent* InAirAudio; // 0xa48(0x08)
	struct FGameplayTag ImpactSplashGC; // 0xa50(0x04)
	bool HasExploded; // 0xa54(0x01)
	char pad_A55[0x3]; // 0xa55(0x03)
	double ExplosionApplicationDelay; // 0xa58(0x08)
	struct FScalableFloat Row_ChromeSplashRadius; // 0xa60(0x28)
	struct FScalableFloat Row_ExplosionApplicationDelay; // 0xa88(0x28)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0xab0(0x10)
	struct FScalableFloat Row_WaterSplashMagnitude; // 0xac0(0x28)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void StopAudioLoop(); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.StopAudioLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_Prj_ChromeSplash_WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.BndEvt__B_Prj_ChromeSplash_WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void DelayedExplode(struct FHitResult HitResult); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.DelayedExplode // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyWaterInArea(); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.ApplyWaterInArea // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_ChromeSplash(int32_t EntryPoint); // Function B_Prj_ChromeSplash.B_Prj_ChromeSplash_C.ExecuteUbergraph_B_Prj_ChromeSplash // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

