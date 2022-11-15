// BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C
// Size: 0xa68 (Inherited: 0x960)
struct AGCN_Loop_Ice_Wheels_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double Duration; // 0x968(0x08)
	double ExpirationTellDuration; // 0x970(0x08)
	struct FTimerHandle ExpireTellDelayTimer; // 0x978(0x08)
	struct FTimerHandle ExpirationSoundTimer; // 0x980(0x08)
	struct FScalableFloat DataTellDuration; // 0x988(0x28)
	double ExpirationSoundPeriod; // 0x9b0(0x08)
	double Crack; // 0x9b8(0x08)
	struct TArray<struct UParticleSystemComponent*> LoopingEmitters; // 0x9c0(0x10)
	struct UFortCollisionAudioComponent* CollisionAudioComp; // 0x9d0(0x08)
	struct TArray<struct UAudioComponent*> SpawnedAudioComps; // 0x9d8(0x10)
	bool ShoppingCart; // 0x9e8(0x01)
	char pad_9E9[0x7]; // 0x9e9(0x07)
	struct TArray<struct FName> CannonSocketsBack; // 0x9f0(0x10)
	struct TArray<struct FName> CannonSocketFront; // 0xa00(0x10)
	struct TArray<struct FName> GolfSockets; // 0xa10(0x10)
	struct TArray<struct FName> ShoppingSockets; // 0xa20(0x10)
	struct TArray<struct FName> PlaneSockets; // 0xa30(0x10)
	struct FTimerHandle Timer_SoundModulation; // 0xa40(0x08)
	struct TScriptInterface<IFortVehicleInterface> TargetVehicleInterface; // 0xa48(0x10)
	struct TArray<struct FName> ValetSockets; // 0xa58(0x10)

	void SpawnEmittersAttachedToWheels(struct TArray<struct FName>& Sockets, struct USceneComponent* AttachToComponent, bool NoOffsets, struct UParticleSystem* EmitterTemplate, double ScaleMult, struct TArray<struct UParticleSystemComponent*>& SpawnedEmitters1); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.SpawnEmittersAttachedToWheels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BeginExpireTell(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.BeginExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearExpireTell(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExpireWarningTick(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExpireWarningTick // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Event ModulateSound(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.Event ModulateSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels(int32_t EntryPoint); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

