// BlueprintGeneratedClass Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C
// Size: 0x11b8 (Inherited: 0x1108)
struct AFloor_Player_Launch_Pad_Parent_C : AFortLauncherAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1108(0x08)
	struct UParticleSystemComponent* P_Athena_LaunchPad_temp; // 0x1110(0x08)
	struct USceneComponent* PlacementSoundLocation; // 0x1118(0x08)
	struct UStaticMeshComponent* S_Athena_Launchpad_Collision; // 0x1120(0x08)
	struct USceneComponent* Scene1; // 0x1128(0x08)
	struct USoundCue* Trap_Placed_Sound; // 0x1130(0x08)
	struct USoundCue* Trap_Active_Sound; // 0x1138(0x08)
	struct USoundCue* Trap_Fire_Sound; // 0x1140(0x08)
	struct USoundCue* Trap_Reload_Sound; // 0x1148(0x08)
	struct USoundCue* Trap_Explode_Sound; // 0x1150(0x08)
	struct USoundBase* VehicleActivate_3P_Sound; // 0x1158(0x08)
	struct FScalableFloat VehiclePitchMagnitude; // 0x1160(0x28)
	struct FScalableFloat VehicleZ_LaunchMagnitude; // 0x1188(0x28)
	struct USoundCue* Trap_Launch_3P_Sound; // 0x11b0(0x08)

	struct FVector CalculateVehiclePitchDirection(struct AFortAthenaVehicle* Vehicle, double PitchMagnitude); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.CalculateVehiclePitchDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnReloadEnd(); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.OnReloadEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlaced(); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFinishedBuilding(); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Traps.ReloadBegin(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Traps.ActivateTrap(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOutOfDurability(); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.OnOutOfDurability // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TriggerLaunchEffects(struct AFortPawn* Pawn); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.TriggerLaunchEffects // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Floor_Player_Launch_Pad_Parent_S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.BndEvt__Floor_Player_Launch_Pad_Parent_S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Floor_Player_Launch_Pad_Parent(int32_t EntryPoint); // Function Floor_Player_Launch_Pad_Parent.Floor_Player_Launch_Pad_Parent_C.ExecuteUbergraph_Floor_Player_Launch_Pad_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

