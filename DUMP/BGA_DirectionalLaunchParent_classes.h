// BlueprintGeneratedClass BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C
// Size: 0xb80 (Inherited: 0x9d8)
struct ABGA_DirectionalLaunchParent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct USplineComponent* VisualPath_EDITOR; // 0x9e0(0x08)
	struct USphereComponent* Sphere; // 0x9e8(0x08)
	struct UArrowComponent* LaunchDirection; // 0x9f0(0x08)
	double DefaultGravity; // 0x9f8(0x08)
	struct AActor* ParentActor; // 0xa00(0x08)
	struct FScalableFloat HardEnabled; // 0xa08(0x28)
	struct FScalableFloat SoftEnabled; // 0xa30(0x28)
	struct FScalableFloat PlayerDeployEnabled; // 0xa58(0x28)
	bool bEnableVehicleLaunch; // 0xa80(0x01)
	char pad_A81[0x7]; // 0xa81(0x07)
	struct UFortGameplayAbility* AbilityGrantedOnPlayerLaunched; // 0xa88(0x08)
	struct UFortGameplayAbility* AbilityGrantedOnVehicleLaunched; // 0xa90(0x08)
	struct UObject* DefinedParentClass; // 0xa98(0x08)
	struct FGameplayTag GELaunchAppliedTemp; // 0xaa0(0x04)
	char pad_AA4[0x4]; // 0xaa4(0x04)
	struct UGameplayEffect* GEAppliedLaunchedTemplate; // 0xaa8(0x08)
	struct FScalableFloat GravityScale; // 0xab0(0x28)
	struct FScalableFloat LaunchVelocity; // 0xad8(0x28)
	struct UGameplayEffect* GEOverrideLaunchTemplate; // 0xb00(0x08)
	bool OverridesVel; // 0xb08(0x01)
	char pad_B09[0x7]; // 0xb09(0x07)
	struct FScalableFloat VelocityOverride; // 0xb10(0x28)
	struct FScalableFloat OriginalLaunchVelocity; // 0xb38(0x28)
	struct FGameplayTag TagToCheckForVelocityOverride; // 0xb60(0x04)
	bool OverrideVelocityBasedOnTag; // 0xb64(0x01)
	bool LaunchesIndirectionOfUser; // 0xb65(0x01)
	bool LaunchDirectionOfUserIsHorizontalOnly; // 0xb66(0x01)
	char pad_B67[0x1]; // 0xb67(0x01)
	struct USoundBase* SFX_PlayerLaunched_local_2D; // 0xb68(0x08)
	struct USoundBase* SFX_NPC_Launched_Local_3D ; // 0xb70(0x08)
	struct USoundBase* SFX_Veh_Launched_Local_3D; // 0xb78(0x08)

	bool ValidateAbilityParentClass(struct UObject* TestClass); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.ValidateAbilityParentClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayFXForVehicle(struct AFortAthenaVehicle* Vehicle); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.PlayFXForVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get VehicleCenterOfMassLocationAndMassValue(struct TScriptInterface<IFortVehicleInterface> Target, struct FVector& Location, double& MassValue); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.Get VehicleCenterOfMassLocationAndMassValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsHardEnabled(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.IsHardEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsPlayerDeployEnabled(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.IsPlayerDeployEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsSoftEnabled(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.IsSoftEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void JustPlayer(struct AActor* InActor, struct AFortPawn*& AsFort Pawn, bool& Valid); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.JustPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayerInVehicleOrJustVehicle(struct AActor* InActor, bool& Valid, struct AFortAthenaVehicle*& AsFort Athena Vehicle); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.PlayerInVehicleOrJustVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_BFB404DE4A75178049271E803AA282E6(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.OnReady_BFB404DE4A75178049271E803AA282E6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayerLaunched(struct AFortPawn* Player); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.PlayerLaunched // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void VehicleLaunched(struct AFortAthenaVehicle* Vehicle); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.VehicleLaunched // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SoftDeactivation(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.SoftDeactivation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LauncherEnabled(); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.LauncherEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlayFXOnClient(struct AFortPawn* Pawn); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.PlayFXOnClient // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_DirectionalLaunchParent(int32_t EntryPoint); // Function BGA_DirectionalLaunchParent.BGA_DirectionalLaunchParent_C.ExecuteUbergraph_BGA_DirectionalLaunchParent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

