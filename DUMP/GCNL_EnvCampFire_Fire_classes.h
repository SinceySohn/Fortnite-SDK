// BlueprintGeneratedClass GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C
// Size: 0xa28 (Inherited: 0x960)
struct AGCNL_EnvCampFire_Fire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float Timeline_0_NewTrack_0_6ACE24B04365BE77BA45D9886552EEB2; // 0x968(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6ACE24B04365BE77BA45D9886552EEB2; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* ; // 0x970(0x08)
	float StokeTimeline_NewTrack_0_574CB0A140C5FB4D93DF818152F2BE6D; // 0x978(0x04)
	enum class ETimelineDirection StokeTimeline__Direction_574CB0A140C5FB4D93DF818152F2BE6D; // 0x97c(0x01)
	char pad_97D[0x3]; // 0x97d(0x03)
	struct UTimelineComponent* StokeTimeline; // 0x980(0x08)
	float Darken_Logs_Lerp_Control_8B15C9BD454B1B355EEA4D88228A7E96; // 0x988(0x04)
	enum class ETimelineDirection Darken_Logs__Direction_8B15C9BD454B1B355EEA4D88228A7E96; // 0x98c(0x01)
	char pad_98D[0x3]; // 0x98d(0x03)
	struct UTimelineComponent* Darken Logs; // 0x990(0x08)
	struct FScalableFloat Row_TickInterval; // 0x998(0x28)
	struct FScalableFloat Row_MaxHeals; // 0x9c0(0x28)
	struct UNiagaraComponent* Fx Variable; // 0x9e8(0x08)
	bool HasPlayed; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct TScriptInterface<ICampfire_Interface_C> ParentCampfire; // 0x9f8(0x10)
	struct TArray<struct UAudioComponent*> Audio Components; // 0xa08(0x10)
	struct USoundBase* AssetSoundCue; // 0xa18(0x08)
	struct USoundBase* AssetMetaSound; // 0xa20(0x08)

	void ConfigureSound(struct TArray<struct UAudioComponent*>& Audio Components); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ConfigureSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Darken Logs__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Darken Logs__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void StokeTimeline__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void StokeTimeline__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StokeCheckLoop(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeCheckLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_EnvCampFire_Fire(int32_t EntryPoint); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ExecuteUbergraph_GCNL_EnvCampFire_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

