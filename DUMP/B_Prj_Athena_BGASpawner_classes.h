// BlueprintGeneratedClass B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C
// Size: 0xaf1 (Inherited: 0xa20)
struct AB_Prj_Athena_BGASpawner_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UAudioComponent* InAirLoop; // 0xa28(0x08)
	struct TArray<struct AActor*> FoundBuildingOnDied; // 0xa30(0x10)
	bool bResumeSimulation; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	double MinDistanceToKnock; // 0xa48(0x08)
	double MaxLaunchPower; // 0xa50(0x08)
	struct UAudioComponent* BeatAudioComponent; // 0xa58(0x08)
	int32_t BeatMultiplierForStart; // 0xa60(0x04)
	int32_t BeatsPerLoop; // 0xa64(0x04)
	int32_t CurrentBeatInTheLoop; // 0xa68(0x04)
	char pad_A6C[0x4]; // 0xa6c(0x04)
	double MinLaunchPower; // 0xa70(0x08)
	struct ABuildingActor* BGAToSpawn; // 0xa78(0x08)
	struct USoundBase* SoundActivate; // 0xa80(0x08)
	struct FVector SpawnScale; // 0xa88(0x18)
	double SpawnPosOffsetAlongNormal; // 0xaa0(0x08)
	double SpawnPosZOffsetInWater; // 0xaa8(0x08)
	bool Spawned; // 0xab0(0x01)
	bool bSpawnOnCollision; // 0xab1(0x01)
	char pad_AB2[0x6]; // 0xab2(0x06)
	double MinDotWithUp; // 0xab8(0x08)
	bool bDontSpawnOnVehicles; // 0xac0(0x01)
	char pad_AC1[0x7]; // 0xac1(0x07)
	struct USoundBase* Splash Sound; // 0xac8(0x08)
	struct AActor* SpawnedBGA; // 0xad0(0x08)
	double SpawnPosAdditionalZOffset; // 0xad8(0x08)
	bool UseImpactNormalForBGASpawnRotation; // 0xae0(0x01)
	bool bCanSpawnInBlockVolume; // 0xae1(0x01)
	char pad_AE2[0x2]; // 0xae2(0x02)
	float BlockingAreaCheckRadius; // 0xae4(0x04)
	struct UFortWorldItemDefinition* ItemDefToSpawnAsPickupWhenInvalid; // 0xae8(0x08)
	bool bAllowSpawnOnWater; // 0xaf0(0x01)

	void CheckIsBlockedByVolume(bool& isBlocked); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckIsBlockedByVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CheckForWater_(struct FVector CurrPos, struct AActor* HitActor, struct FVector& PosAboveWater); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckForWater_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetClosestPoint(struct UPrimitiveComponent* Component, struct FVector StartingPoint, struct FVector& Point); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.GetClosestPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater, struct FHitResult Hit); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool WillBounceOffTarget(struct FHitResult& Hit); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.WillBounceOffTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Held Water Impact(); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevertThrownObjectToPickup(); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.RevertThrownObjectToPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitiateSpawnBGA(struct FHitResult HitResult, struct AActor* HitOtherActor, struct UPrimitiveComponent* HitOtherComp, struct FVector HitLocation); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.InitiateSpawnBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_BGASpawner(int32_t EntryPoint); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

