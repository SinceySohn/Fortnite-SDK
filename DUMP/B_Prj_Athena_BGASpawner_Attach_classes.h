// BlueprintGeneratedClass B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C
// Size: 0xb18 (Inherited: 0xa20)
struct AB_Prj_Athena_BGASpawner_Attach_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct TArray<struct AActor*> FoundBuildingOnDied; // 0xa28(0x10)
	bool bResumeSimulation; // 0xa38(0x01)
	char pad_A39[0x7]; // 0xa39(0x07)
	double MinDistanceToKnock; // 0xa40(0x08)
	double MaxLaunchPower; // 0xa48(0x08)
	struct UAudioComponent* BeatAudioComponent; // 0xa50(0x08)
	int32_t BeatMultiplierForStart; // 0xa58(0x04)
	int32_t BeatsPerLoop; // 0xa5c(0x04)
	int32_t CurrentBeatInTheLoop; // 0xa60(0x04)
	char pad_A64[0x4]; // 0xa64(0x04)
	double MinLaunchPower; // 0xa68(0x08)
	struct AActor* BGAToSpawn; // 0xa70(0x08)
	struct USoundBase* SoundActivate; // 0xa78(0x08)
	struct FVector SpawnScale; // 0xa80(0x18)
	double SpawnPosOffsetAlongNormal; // 0xa98(0x08)
	double SpawnPosZOffsetInWater; // 0xaa0(0x08)
	bool Spawned; // 0xaa8(0x01)
	bool SpawnOnCollision; // 0xaa9(0x01)
	char pad_AAA[0x6]; // 0xaaa(0x06)
	double MinDotWithUp; // 0xab0(0x08)
	bool DontSpawnOnVehicles; // 0xab8(0x01)
	char pad_AB9[0x7]; // 0xab9(0x07)
	struct USoundBase* Splash Sound; // 0xac0(0x08)
	struct AActor* SpawnedBGA; // 0xac8(0x08)
	double SpawnPosAdditionalZOffset; // 0xad0(0x08)
	bool UseImpactNormalForBGASpawnRotation; // 0xad8(0x01)
	char pad_AD9[0x7]; // 0xad9(0x07)
	struct FFortTargetFilter Filter; // 0xae0(0x38)

	void CheckForWater_(struct FVector CurrPos, struct AActor* HitActor, struct FVector& PosAboveWater); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.CheckForWater_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetClosestPoint(struct UPrimitiveComponent* Component, struct FVector StartingPoint, struct FVector& Point); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.GetClosestPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater, struct FHitResult Hit); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool WillBounceOffTarget(struct FHitResult& Hit); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.WillBounceOffTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Held Water Impact(); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_BGASpawner_Attach(int32_t EntryPoint); // Function B_Prj_Athena_BGASpawner_Attach.B_Prj_Athena_BGASpawner_Attach_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner_Attach // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

