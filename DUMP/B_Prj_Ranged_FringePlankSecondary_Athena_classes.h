// BlueprintGeneratedClass B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C
// Size: 0xb40 (Inherited: 0xae0)
struct AB_Prj_Ranged_FringePlankSecondary_Athena_C : AB_Prj_Athena_Generic_CurieFireball_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae0(0x08)
	struct UNiagaraComponent* NS_Weapon_Firework_Ember_Trail; // 0xae8(0x08)
	struct UParticleSystemComponent* P_GL_Ribbon_SmokeTrail; // 0xaf0(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xaf8(0x08)
	struct UAudioComponent* LoopingAudioTell; // 0xb00(0x08)
	struct UParticleSystem* IntoWaterEffects; // 0xb08(0x08)
	struct USoundBase* HitWater_NoFire_Sound; // 0xb10(0x08)
	double BurnoutTime; // 0xb18(0x08)
	struct FVector Impact Point; // 0xb20(0x18)
	struct USoundBase* Impact Sound; // 0xb38(0x08)

	void UserConstructionScript(); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Burnout(); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.Burnout // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Impact Sound(); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.Play Impact Sound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena(int32_t EntryPoint); // Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

