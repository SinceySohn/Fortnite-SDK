// BlueprintGeneratedClass B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C
// Size: 0xad0 (Inherited: 0xa3a)
struct AB_Prj_ThrownConsumable_C : AB_Prj_ThrownConsumable_Parent_C {
	char pad_A3A[0x6]; // 0xa3a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa48(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0xa50(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0xa58(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa60(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0xa68(0x08)
	struct UParticleSystem* P_Explosion; // 0xa70(0x08)
	double ExplosionRadius; // 0xa78(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xa80(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xa88(0x08)
	struct ULegacyCameraShake* ExplosionCameraShake; // 0xa90(0x08)
	struct USoundBase* Cue_GrenadeFuseSound; // 0xa98(0x08)
	struct USoundBase* Cue_CloseSound; // 0xaa0(0x08)
	struct USoundBase* Cue_DistantSound; // 0xaa8(0x08)
	struct USoundBase* Cue_Bounce; // 0xab0(0x08)
	struct FRotator ExplosionRotation; // 0xab8(0x18)

	void UserConstructionScript(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ResetSimulatedComponents(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ResetSimulatedComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_ThrownConsumable(int32_t EntryPoint); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

