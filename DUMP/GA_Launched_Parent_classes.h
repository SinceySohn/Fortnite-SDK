// BlueprintGeneratedClass GA_Launched_Parent.GA_Launched_Parent_C
// Size: 0xc90 (Inherited: 0xb20)
struct UGA_Launched_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UForceFeedbackEffect* ForcedFeedback; // 0xb28(0x08)
	struct ULegacyCameraShake* PlayerLaunchedCameraShakeTemplate; // 0xb30(0x08)
	struct FGameplayTag PlayerLaunchedGameplayCue; // 0xb38(0x04)
	struct FGameplayTag VehicleLaunchedGameplayCue; // 0xb3c(0x04)
	struct FScalableFloat Velocity; // 0xb40(0x28)
	struct FScalableFloat GravityScale; // 0xb68(0x28)
	struct FScalableFloat VehicleVelocityModifier; // 0xb90(0x28)
	struct FScalableFloat RedeployTime; // 0xbb8(0x28)
	double DefaultGravity; // 0xbe0(0x08)
	struct FName VehicleCenterOfMassSocketName; // 0xbe8(0x04)
	char pad_BEC[0x4]; // 0xbec(0x04)
	double VehicleDefaultMassValue; // 0xbf0(0x08)
	double VehicleLaunchFromCenterofMassZOffset; // 0xbf8(0x08)
	struct UGameplayEffect* GEAppliedImmunityToFallDamageTemplate; // 0xc00(0x08)
	struct UGameplayEffect* GEAppliedRedeployTemplate; // 0xc08(0x08)
	struct FTimerHandle RedeployPromptTimerHandle; // 0xc10(0x08)
	struct FTimerHandle EmergencyTimerHandle; // 0xc18(0x08)
	struct FScalableFloat EmergencyShutdownTime; // 0xc20(0x28)
	struct UGameplayEffect* GEAppliedLaunched; // 0xc48(0x08)
	struct FActiveGameplayEffectHandle GELaunchedAppliedHandle; // 0xc50(0x08)
	struct FGameplayTagContainer GTDefaultImmunityGrantedTag; // 0xc58(0x20)
	struct FActiveGameplayEffectHandle GERedeployHandle; // 0xc78(0x08)
	bool OverridesVel; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct FCameraLensInterfaceClassSupport CameraLensClass_PlayerLaunched; // 0xc88(0x08)

	void GetVehicleVelocityModifer(float& VehicleVelocityModifier); // Function GA_Launched_Parent.GA_Launched_Parent_C.GetVehicleVelocityModifer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetBaseVelocityLevel(double& Level); // Function GA_Launched_Parent.GA_Launched_Parent_C.GetBaseVelocityLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector Get Launch Toward Launch Target Angle(struct AActor* Target, struct AActor* Launcher, bool HorizontalOnly); // Function GA_Launched_Parent.GA_Launched_Parent_C.Get Launch Toward Launch Target Angle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void IsPlayerBeingLaunched(struct AActor* Actor, struct AFortPawn*& AsFort Pawn, bool& Valid); // Function GA_Launched_Parent.GA_Launched_Parent_C.IsPlayerBeingLaunched // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void IsVehicleBeingLaunched(struct AActor* Actor, bool& Valid, struct AFortAthenaVehicle*& AsFort Athena Vehicle); // Function GA_Launched_Parent.GA_Launched_Parent_C.IsVehicleBeingLaunched // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetFortActorFromInfo(struct AActor*& Actor, bool& Valid); // Function GA_Launched_Parent.GA_Launched_Parent_C.GetFortActorFromInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct UObject* GetSourceObject(); // Function GA_Launched_Parent.GA_Launched_Parent_C.GetSourceObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnChange_E60F4D3A46AA36D5B2FFFBA15F082EB9(enum class EMovementMode NewMovementMode); // Function GA_Launched_Parent.GA_Launched_Parent_C.OnChange_E60F4D3A46AA36D5B2FFFBA15F082EB9 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Launched_Parent.GA_Launched_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void AttemptLaunchVehicle(struct AFortAthenaVehicle* Vehicle); // Function GA_Launched_Parent.GA_Launched_Parent_C.AttemptLaunchVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttemptLaunchFortPawn(struct AFortPawn* FortPawn); // Function GA_Launched_Parent.GA_Launched_Parent_C.AttemptLaunchFortPawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyGameplayCueVehicleLaunch(); // Function GA_Launched_Parent.GA_Launched_Parent_C.ApplyGameplayCueVehicleLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyGameplayCuePlayerLaunch(); // Function GA_Launched_Parent.GA_Launched_Parent_C.ApplyGameplayCuePlayerLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindRedeployPromptNotfication(); // Function GA_Launched_Parent.GA_Launched_Parent_C.BindRedeployPromptNotfication // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RedeployPrompt(); // Function GA_Launched_Parent.GA_Launched_Parent_C.RedeployPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct FHitResult& Hit); // Function GA_Launched_Parent.GA_Launched_Parent_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyVisualFeedback(bool bEndAbility); // Function GA_Launched_Parent.GA_Launched_Parent_C.ApplyVisualFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EmergencyTimer(); // Function GA_Launched_Parent.GA_Launched_Parent_C.EmergencyTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceEndAbilityIgnoreLanded(); // Function GA_Launched_Parent.GA_Launched_Parent_C.ForceEndAbilityIgnoreLanded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Launched_Parent.GA_Launched_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ListenForWalking(); // Function GA_Launched_Parent.GA_Launched_Parent_C.ListenForWalking // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnParachute(); // Function GA_Launched_Parent.GA_Launched_Parent_C.OnParachute // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Launched_Parent(int32_t EntryPoint); // Function GA_Launched_Parent.GA_Launched_Parent_C.ExecuteUbergraph_GA_Launched_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

