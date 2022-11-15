// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
// Size: 0xe82 (Inherited: 0xb48)
struct AB_Prj_Hook_Athena_C : AFortAttachableProjectileDeprecated {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xb50(0x08)
	struct UStaticMeshComponent* projectileMesh; // 0xb58(0x08)
	struct AFortPawn* Target; // 0xb60(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb68(0x08)
	bool HookStopped; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct FVector HitLocation; // 0xb78(0x18)
	bool AirControl; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)
	struct USoundBase* Sound_Stick; // 0xb98(0x08)
	struct USoundBase* Sound_StuckToPlayer; // 0xba0(0x08)
	double DistanceFromInstigator; // 0xba8(0x08)
	struct USoundBase* Sound_Water; // 0xbb0(0x08)
	struct USoundBase* TravelSound; // 0xbb8(0x08)
	struct TArray<struct FToyAngleSelectorInfo> LaunchAngleVariations; // 0xbc0(0x10)
	struct AB_Hookgun_Athena_C* Weapon Actor; // 0xbd0(0x08)
	struct AB_HookGunRope_C* Rope; // 0xbd8(0x08)
	struct FVector PreLaunchVelocity; // 0xbe0(0x18)
	double FireAImPitch; // 0xbf8(0x08)
	double DownPitchMin; // 0xc00(0x08)
	double DownPitchMax; // 0xc08(0x08)
	double AdditionalZ; // 0xc10(0x08)
	struct USoundBase* Sound_YankBack; // 0xc18(0x08)
	struct USoundBase* Sound_RopeDestroy; // 0xc20(0x08)
	struct FGameplayTag RopeActiveTag; // 0xc28(0x04)
	struct FGameplayTag BlockIncomingPickups; // 0xc2c(0x04)
	struct FVector ImpactNormal; // 0xc30(0x18)
	struct USoundBase* Sound_Stick2D; // 0xc48(0x08)
	double Offset Distance from Physics Mesh; // 0xc50(0x08)
	double OffsetDistanceFromBone; // 0xc58(0x08)
	struct AActor* StruckActor; // 0xc60(0x08)
	struct FVector Momentum; // 0xc68(0x18)
	bool Launchpad; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct FVector VehicleVelocity; // 0xc88(0x18)
	bool ConsumesAmmo; // 0xca0(0x01)
	bool bInHoverboard; // 0xca1(0x01)
	char pad_CA2[0x6]; // 0xca2(0x06)
	double Lifespan on Hit; // 0xca8(0x08)
	bool GliderGrappler; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct FGameplayTagContainer TC_VehicleIgnorePull; // 0xcb8(0x20)
	struct UGameplayEffect* GE_RopeActive; // 0xcd8(0x08)
	struct FGameplayTag Event_Returned; // 0xce0(0x04)
	struct FGameplayTag Event_GrappleHit; // 0xce4(0x04)
	struct FGameplayTagContainer T_QuestTag; // 0xce8(0x20)
	struct UAnimMontage* Anim_GrappleHoverboard; // 0xd08(0x08)
	struct UAnimMontage* Anim_Grapple; // 0xd10(0x08)
	struct UParticleSystem* FX_WaterImpact; // 0xd18(0x08)
	struct UParticleSystem* FX_Reattach; // 0xd20(0x08)
	double ArcGravityOverride; // 0xd28(0x08)
	bool DoesCrouchCheck; // 0xd30(0x01)
	bool HasMinUpwardLaunchVelocity; // 0xd31(0x01)
	char pad_D32[0x6]; // 0xd32(0x06)
	double MinUpwardLaunchVelocity; // 0xd38(0x08)
	struct ULegacyCameraShake* CamShake_Grapple; // 0xd40(0x08)
	struct FVector LaunchVelocity; // 0xd48(0x18)
	struct FScalableFloat Row_PlayerArc; // 0xd60(0x28)
	struct FScalableFloat Row_VehicleArc; // 0xd88(0x28)
	struct FScalableFloat Row_JackleArc; // 0xdb0(0x28)
	struct FScalableFloat Row_VehicleForceMultiplier; // 0xdd8(0x28)
	struct FScalableFloat Row_JackleForceMultiplier; // 0xe00(0x28)
	struct FScalableFloat Speed; // 0xe28(0x28)
	struct FScalableFloat LifeSpan; // 0xe50(0x28)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass; // 0xe78(0x08)
	bool ShouldCompenstateForGravity; // 0xe80(0x01)
	bool PullToPawnWhileInVehicle; // 0xe81(0x01)

	void HandleStuckPhysicsObject(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckPhysicsObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	double GetOverrideGravity(double OverrideGravityValue); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetOverrideGravity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	double GetVehicleLaunchMult(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	double GetVehicleArc(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector MomentumCheck(struct FVector A, struct FVector A2); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GiveQuestCredit(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnRope(struct AFortPlayerPawn* PlayerPawn, struct AB_HookGunRope_C*& RopeSpawned); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void JackalCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleLaunch(bool& JumpPadding?); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Momentum(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMomentum(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleStuckProjectiles(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_StruckActor(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleStuckSupplyDrop(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleStuckBuilding(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleStuckVehicle(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSticks(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PickGrappleMontage(double PitchAngle, bool InHoverboard, struct FName& SectionName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PickGrappleMontageSection(double PitchAngle, struct FName& SectionName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_HookStopped(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Target(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateYankForce(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IncapacitateTarget(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHits(struct FHitResult Hit, struct AActor*& Target); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayStickSounds(struct FVector Location, struct AActor* HitActor); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Travel(struct FVector HitLocation); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WeaponCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void GrappleVehicle(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LaunchCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Grapple(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Hook_Athena(int32_t EntryPoint); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

