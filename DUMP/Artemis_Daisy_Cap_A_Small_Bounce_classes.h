// BlueprintGeneratedClass Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C
// Size: 0x1084 (Inherited: 0xef0)
struct AArtemis_Daisy_Cap_A_Small_Bounce_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xef8(0x08)
	struct UAudioComponent* AudioAmbLoop; // 0xf00(0x08)
	struct USphereComponent* PlayerBlockingCollision; // 0xf08(0x08)
	struct UNiagaraComponent* NS_Daisy_Mushroom_LightBeam; // 0xf10(0x08)
	struct UStaticMeshComponent* Jump_Collision; // 0xf18(0x08)
	float Timeline_TintColor_942C857B40CD88E33427BC9BC4E902E5; // 0xf20(0x04)
	float Timeline_FadeOut_942C857B40CD88E33427BC9BC4E902E5; // 0xf24(0x04)
	enum class ETimelineDirection Timeline__Direction_942C857B40CD88E33427BC9BC4E902E5; // 0xf28(0x01)
	char pad_F29[0x7]; // 0xf29(0x07)
	struct UTimelineComponent* Timeline; // 0xf30(0x08)
	float MaterialEmissive_FadeIn_34AAA5744175A9D98D8B0C8730493B9D; // 0xf38(0x04)
	float MaterialEmissive_TintColor_34AAA5744175A9D98D8B0C8730493B9D; // 0xf3c(0x04)
	enum class ETimelineDirection MaterialEmissive__Direction_34AAA5744175A9D98D8B0C8730493B9D; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	struct UTimelineComponent* MaterialEmissive; // 0xf48(0x08)
	float Bounce_Emissive_Scale_Z_B05F57B94DD98DE15F23BBB460A74175; // 0xf50(0x04)
	float Bounce_Emissive_Scale_XY_B05F57B94DD98DE15F23BBB460A74175; // 0xf54(0x04)
	float Bounce_Emissive_Emissive_Mult_B05F57B94DD98DE15F23BBB460A74175; // 0xf58(0x04)
	enum class ETimelineDirection Bounce_Emissive__Direction_B05F57B94DD98DE15F23BBB460A74175; // 0xf5c(0x01)
	char pad_F5D[0x3]; // 0xf5d(0x03)
	struct UTimelineComponent* Bounce Emissive; // 0xf60(0x08)
	double BounceHeight; // 0xf68(0x08)
	double FinalBounceJumpHeight; // 0xf70(0x08)
	struct UForceFeedbackEffect* LaunchForceFeedback; // 0xf78(0x08)
	struct AFortPawn* OverlapPawn; // 0xf80(0x08)
	struct AFortPlayerController* OverlapController; // 0xf88(0x08)
	struct UGameplayEffect* GE_PlayerLaunched; // 0xf90(0x08)
	struct USoundBase* LilypadSound; // 0xf98(0x08)
	enum class DaisyBouceHeightsEnum BouceHeights; // 0xfa0(0x01)
	char pad_FA1[0x7]; // 0xfa1(0x07)
	double DaisyBouceHeight; // 0xfa8(0x08)
	double ForwardVectorAddition; // 0xfb0(0x08)
	struct UGameplayEffect* GE_ApplyHealOverTime; // 0xfb8(0x08)
	struct FGameplayTag GC_TriggeredBounce; // 0xfc0(0x04)
	char pad_FC4[0x4]; // 0xfc4(0x04)
	struct FScalableFloat BounceHeight_2Floors; // 0xfc8(0x28)
	struct FScalableFloat BounceHeight_4Floors; // 0xff0(0x28)
	double FX_NSAdjust; // 0x1018(0x08)
	struct FGameplayTag PlayerLaunched; // 0x1020(0x04)
	char pad_1024[0x4]; // 0x1024(0x04)
	struct AFortPawn* HealTarget; // 0x1028(0x08)
	struct FVector OrigScale; // 0x1030(0x18)
	struct UGameplayEffect* GE_FallDamageImmunity; // 0x1048(0x08)
	bool HealOnCooldown; // 0x1050(0x01)
	char pad_1051[0x7]; // 0x1051(0x07)
	struct FScalableFloat HealCooldownDuration; // 0x1058(0x28)
	struct FGameplayTag Event Tag; // 0x1080(0x04)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CeilingCheck(bool& Success); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.CeilingCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Bounce Emissive__FinishedFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.Bounce Emissive__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Bounce Emissive__UpdateFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.Bounce Emissive__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void MaterialEmissive__FinishedFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.MaterialEmissive__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MaterialEmissive__UpdateFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.MaterialEmissive__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline__FinishedFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline__UpdateFunc(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BounceAnim(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.BounceAnim // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ResetMinMaxScales(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ResetMinMaxScales // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetHealCooldown(); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ResetHealCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHeal(struct UAbilitySystemComponent* AbilitySystem); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.HandleHeal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleAmbientFX(bool Active); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ToggleAmbientFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Artemis_Daisy_Cap_A_Small_Bounce(int32_t EntryPoint); // Function Artemis_Daisy_Cap_A_Small_Bounce.Artemis_Daisy_Cap_A_Small_Bounce_C.ExecuteUbergraph_Artemis_Daisy_Cap_A_Small_Bounce // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

