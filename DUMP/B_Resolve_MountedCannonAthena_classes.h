// BlueprintGeneratedClass B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C
// Size: 0x1880 (Inherited: 0x1751)
struct AB_Resolve_MountedCannonAthena_C : AB_Ranged_GenericMountedCannon_C {
	char pad_1751[0x7]; // 0x1751(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x08)
	struct UParticleSystemComponent* P_FiringDelay; // 0x1760(0x08)
	struct UGameplayEffect* GE Launched Player; // 0x1768(0x08)
	struct FScalableFloat DefaultPlayerLaunchSpeed; // 0x1770(0x28)
	double IgnoreBarrelDuration; // 0x1798(0x08)
	struct USoundBase* ReloadStartSound; // 0x17a0(0x08)
	struct USoundBase* ReloadEndSound; // 0x17a8(0x08)
	struct TArray<struct FAudioParameter> AudioParameters; // 0x17b0(0x10)
	struct USoundBase* FireEmptySound; // 0x17c0(0x08)
	struct UGameplayAbility* GA_GliderRedeploy; // 0x17c8(0x08)
	struct UNiagaraSystem* MuzzleFireVFX; // 0x17d0(0x08)
	struct UCameraShakeBase* FireCameraShake; // 0x17d8(0x08)
	struct UFXSystemAsset* MuzzleFlashFX; // 0x17e0(0x08)
	struct AMountedCannon__v2_C* MountedCannon; // 0x17e8(0x08)
	double TraceDistance; // 0x17f0(0x08)
	struct FScalableFloat IgnoreActorsDistance; // 0x17f8(0x28)
	struct FScalableFloat IgnoreActorsDuration; // 0x1820(0x28)
	struct AFortProjectileBase* ProjectileHardRef; // 0x1848(0x08)
	bool bLaunchingPawn; // 0x1850(0x01)
	char pad_1851[0x7]; // 0x1851(0x07)
	struct FScalableFloat Row_CanFireNormalProjectile; // 0x1858(0x28)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.GetActorSoundParams // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void IgnoreActorsLinkedToCannon(struct AFortPlayerPawn* PlayerPawn); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.IgnoreActorsLinkedToCannon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLaunchSpeed(double& DesiredSpeed); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.GetLaunchSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedCooling(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnFinishedCooling // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLaunchPawn(struct AFortPlayerPawn* Pawn, struct FVector LaunchDir); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnLaunchPawn // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLocalFailedToFireWhenOverheated(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnLocalFailedToFireWhenOverheated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CloseOutOfAmmoGate(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.CloseOutOfAmmoGate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OpenOutOfAmmoGate(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OpenOutOfAmmoGate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHostVehicleSetup(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnHostVehicleSetup // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPreLaunchPawn(struct AFortPlayerPawn* Pawn, struct FVector LaunchDir); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnPreLaunchPawn // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void IgnoreNearbyCollision(struct AFortPlayerPawn* Pawn, struct FVector LaunchDirection); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.IgnoreNearbyCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLocalTargetingChanged_Event(bool bIsTargeting); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.OnLocalTargetingChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Resolve_MountedCannonAthena(int32_t EntryPoint); // Function B_Resolve_MountedCannonAthena.B_Resolve_MountedCannonAthena_C.ExecuteUbergraph_B_Resolve_MountedCannonAthena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

