// BlueprintGeneratedClass GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C
// Size: 0x9a0 (Inherited: 0x960)
struct AGCNL_MegaStorm_DamageRing_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float Timeline_1_StormDamage_20EF97A841793BC1BC17A38E68D1694B; // 0x968(0x04)
	enum class ETimelineDirection Timeline_1__Direction_20EF97A841793BC1BC17A38E68D1694B; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* ; // 0x970(0x08)
	float Timeline_0_StormDamage_217AB728482679C9E1B9D281A03AF2D6; // 0x978(0x04)
	enum class ETimelineDirection Timeline_0__Direction_217AB728482679C9E1B9D281A03AF2D6; // 0x97c(0x01)
	char pad_97D[0x3]; // 0x97d(0x03)
	struct UTimelineComponent* ; // 0x980(0x08)
	struct UParticleSystemComponent* StormDamageFX; // 0x988(0x08)
	double RawMagnitude; // 0x990(0x08)
	struct USoundBase* OnDamageSound; // 0x998(0x08)

	void Timeline_0__FinishedFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__FinishedFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__UpdateFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Reset(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_MegaStorm_DamageRing(int32_t EntryPoint); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

