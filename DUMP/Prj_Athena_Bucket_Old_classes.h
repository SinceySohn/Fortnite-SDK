// BlueprintGeneratedClass Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C
// Size: 0xb10 (Inherited: 0xad0)
struct APrj_Athena_Bucket_Old_C : AB_Prj_ThrownConsumable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xad0(0x08)
	struct UFortWorldItemDefinition* ItemToSpawn; // 0xad8(0x08)
	bool TurnOffFX; // 0xae0(0x01)
	char pad_AE1[0x7]; // 0xae1(0x07)
	struct USoundBase* HitMarkerSound; // 0xae8(0x08)
	struct USoundBase* ThrowIndicator_SoundRef; // 0xaf0(0x08)
	bool ShouldSpawnItem; // 0xaf8(0x01)
	char pad_AF9[0x7]; // 0xaf9(0x07)
	struct USoundBase* ; // 0xb00(0x08)
	double ImpactSpawnOffset; // 0xb08(0x08)

	void OnRep_TurnOffFX(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnRep_TurnOffFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PlayHitSound(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.PlayHitSound // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Held Water Impact(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_Bucket_Old(int32_t EntryPoint); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ExecuteUbergraph_Prj_Athena_Bucket_Old // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

