// BlueprintGeneratedClass B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C
// Size: 0xc48 (Inherited: 0xad0)
struct AB_Prj_Athena_SpicySoda_C : AB_Prj_ThrownConsumable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xad0(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xad8(0x08)
	struct UParticleSystemComponent* Proj_Trail; // 0xae0(0x08)
	struct USkeletalMeshComponent* SK_ChugBomb; // 0xae8(0x08)
	struct UAudioComponent* Audio_InAirLoop; // 0xaf0(0x08)
	struct AFortPawn* PlayerPawn; // 0xaf8(0x08)
	struct FVector HitLocation; // 0xb00(0x18)
	struct FVector HitNormal; // 0xb18(0x18)
	int32_t HealthHealAmount; // 0xb30(0x04)
	int32_t ShieldHealAmount; // 0xb34(0x04)
	double MaxHealAmount; // 0xb38(0x08)
	struct FScalableFloat MaxHealValue; // 0xb40(0x28)
	struct FScalableFloat HealPool_Duration; // 0xb68(0x28)
	bool GrantHealth; // 0xb90(0x01)
	bool GrantShield; // 0xb91(0x01)
	char pad_B92[0x6]; // 0xb92(0x06)
	struct UNiagaraSystem* HealOnlyFX; // 0xb98(0x08)
	bool Stopped; // 0xba0(0x01)
	char pad_BA1[0x7]; // 0xba1(0x07)
	struct TArray<struct AActor*> HitActors; // 0xba8(0x10)
	struct AFortPlayerPawn* HitPlayerPawn; // 0xbb8(0x08)
	struct UFortQuestManager* Owning Player Quest Manager; // 0xbc0(0x08)
	struct FGameplayTagContainer Heal Teammate TC; // 0xbc8(0x20)
	struct FGameplayTagContainer Heal Squadmate TC; // 0xbe8(0x20)
	double WaterTraceRadius; // 0xc08(0x08)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0xc10(0x10)
	double LandscapeExtinguishRadius; // 0xc20(0x08)
	struct FGameplayTagContainer TraceIgnoreTags; // 0xc28(0x20)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UpdateHealthShieldHealAmounts(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.UpdateHealthShieldHealAmounts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyWaterInRadiusIfCurieEnabled(struct FHitResult HitResult); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ApplyWaterInRadiusIfCurieEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void QuestCheckSquadMember(struct AFortPawn* PlayerPawnHit); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.QuestCheckSquadMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PlayerPawn(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.OnRep_PlayerPawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetVariables(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ResetVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetMissingShield(double& MissingShield); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.GetMissingShield // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetMissingHealth(double& MissingHealth); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.GetMissingHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HealPlayer(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.HealPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KillDelay(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.KillDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnableCollision(); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.EnableCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void DoHealCheck(struct TArray<struct AActor*>& HitActors); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.DoHealCheck // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_SpicySoda(int32_t EntryPoint); // Function B_Prj_Athena_SpicySoda.B_Prj_Athena_SpicySoda_C.ExecuteUbergraph_B_Prj_Athena_SpicySoda // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

