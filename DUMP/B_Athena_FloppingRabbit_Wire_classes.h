// BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C
// Size: 0x448 (Inherited: 0x310)
struct AB_Athena_FloppingRabbit_Wire_C : AFortHookGunRope {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* HookOffset; // 0x318(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x320(0x08)
	struct UStaticMeshComponent* Hook; // 0x328(0x08)
	struct USceneComponent* ItemSocket; // 0x330(0x08)
	float Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x338(0x04)
	enum class ETimelineDirection Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UTimelineComponent* Tight; // 0x340(0x08)
	float Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8; // 0x348(0x04)
	float Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8; // 0x34c(0x04)
	enum class ETimelineDirection Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UTimelineComponent* Reel In; // 0x358(0x08)
	struct APrj_Athena_FloppingRabbit_C* Projectile Actor; // 0x360(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x368(0x08)
	struct USoundBase* ReelSound; // 0x370(0x08)
	struct USoundBase* ReattachSound; // 0x378(0x08)
	struct FGameplayTag RopeActiveTag; // 0x380(0x04)
	struct FGameplayTag BlockIncomingPickups; // 0x384(0x04)
	struct FGameplayTagContainer Change Equipment Tag; // 0x388(0x20)
	double ReelinPlayRate; // 0x3a8(0x08)
	struct FGameplayTag T_Stop; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UAnimMontage* ReelMontage; // 0x3b8(0x08)
	bool Toss; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FVector HookRelativeStartingLoc; // 0x3c8(0x18)
	struct FRotator HookRelativeStartingRot; // 0x3e0(0x18)
	bool CatchParticleOn; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UAnimMontage* ReelWeaponMontage; // 0x400(0x08)
	struct FGameplayTagContainer T_FlopperSpawn; // 0x408(0x20)
	struct USoundBase* Sound_Pickup; // 0x428(0x08)
	struct TArray<struct AFortPickup*> PickedUpPickups; // 0x430(0x10)
	double RopeWidth; // 0x440(0x08)

	void OnRep_CatchParticleOn(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnRep_CatchParticleOn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reel In__FinishedFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Reel In__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Reel In__UpdateFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Reel In__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__FinishedFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Tight__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__UpdateFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Tight__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TightenRope(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.TightenRope // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayMontage(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.PlayMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropAndDestroy(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.DropAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachNonFishingPickups(struct AFortPickup*& InputPin); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.AttachNonFishingPickups // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartReeling(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.StartReeling // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ActivateProjectileMovmentComponent(struct UActorComponent* Target); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ActivateProjectileMovmentComponent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_FloppingRabbit_Wire(int32_t EntryPoint); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ExecuteUbergraph_B_Athena_FloppingRabbit_Wire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

