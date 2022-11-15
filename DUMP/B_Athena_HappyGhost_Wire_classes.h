// BlueprintGeneratedClass B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C
// Size: 0x420 (Inherited: 0x310)
struct AB_Athena_HappyGhost_Wire_C : AFortHookGunRope {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* ItemSlot; // 0x318(0x08)
	struct UStaticMeshComponent* RopeProjectileMeshVis; // 0x320(0x08)
	float BounceOff_Spin_AECA7A624BECBBD8A035ADBE48C36D31; // 0x328(0x04)
	float BounceOff_BounceUp_AECA7A624BECBBD8A035ADBE48C36D31; // 0x32c(0x04)
	enum class ETimelineDirection BounceOff__Direction_AECA7A624BECBBD8A035ADBE48C36D31; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTimelineComponent* BounceOff; // 0x338(0x08)
	float Tight_NewTrack_0_F9036F1A48D1CCE19631248E34232E56; // 0x340(0x04)
	enum class ETimelineDirection Tight__Direction_F9036F1A48D1CCE19631248E34232E56; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct UTimelineComponent* Tight; // 0x348(0x08)
	float Reel_In_Tighten_8E08E4A046B5709C1097E5A983173D6B; // 0x350(0x04)
	float Reel_In_Reel_Lerp_Controller_8E08E4A046B5709C1097E5A983173D6B; // 0x354(0x04)
	enum class ETimelineDirection Reel_In__Direction_8E08E4A046B5709C1097E5A983173D6B; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UTimelineComponent* Reel In; // 0x360(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x368(0x08)
	struct USoundBase* ReelSound; // 0x370(0x08)
	struct USoundBase* ReattachSound; // 0x378(0x08)
	double ReelinPlayRate; // 0x380(0x08)
	struct FGameplayTag T_Stop; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UAnimMontage* ReelMontage; // 0x390(0x08)
	struct UAnimMontage* NoHitMontage; // 0x398(0x08)
	struct UAnimMontage* NoHitMontage_Female; // 0x3a0(0x08)
	double MontagePlayRate; // 0x3a8(0x08)
	bool HitPawnOrFish; // 0x3b0(0x01)
	bool HitWorld; // 0x3b1(0x01)
	bool HitDamagable; // 0x3b2(0x01)
	char pad_3B3[0x5]; // 0x3b3(0x05)
	struct FVector Bounce; // 0x3b8(0x18)
	struct FVector HitNormal; // 0x3d0(0x18)
	struct FGameplayTagContainer T_FlopperSpawn; // 0x3e8(0x20)
	struct USoundBase* Sound_Pickup; // 0x408(0x08)
	struct TArray<struct AFortPickup*> PickedUpPickups; // 0x410(0x10)

	void Reel In__FinishedFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.Reel In__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Reel In__UpdateFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.Reel In__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__FinishedFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.Tight__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__UpdateFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.Tight__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BounceOff__FinishedFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.BounceOff__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BounceOff__UpdateFunc(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.BounceOff__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void End Reel(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.End Reel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TightenRope(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.TightenRope // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayMontage(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DropAndDestroy(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.DropAndDestroy // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReelFinished(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.ReelFinished // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReelFinishedClientOnly(); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.ReelFinishedClientOnly // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachNonFishingPickups(struct AFortPickup*& InputPin); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.AttachNonFishingPickups // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_HappyGhost_Wire(int32_t EntryPoint); // Function B_Athena_HappyGhost_Wire.B_Athena_HappyGhost_Wire_C.ExecuteUbergraph_B_Athena_HappyGhost_Wire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

