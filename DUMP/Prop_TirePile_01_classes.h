// BlueprintGeneratedClass Prop_TirePile_01.Prop_TirePile_01_C
// Size: 0xfa8 (Inherited: 0xef0)
struct AProp_TirePile_01_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UBuildingActorLootDropOnDeathComponent_C* BuildingActorLootDropOnDeathComponent; // 0xef8(0x08)
	struct UStaticMeshComponent* Jump_Collision; // 0xf00(0x08)
	double BounceHeight; // 0xf08(0x08)
	double JumpHeight; // 0xf10(0x08)
	double FinalBounceJumpHeight; // 0xf18(0x08)
	struct UForceFeedbackEffect* LaunchForceFeedback; // 0xf20(0x08)
	struct AFortPawn* OverlapPawn; // 0xf28(0x08)
	struct AFortPlayerController* OverlapController; // 0xf30(0x08)
	struct UGameplayEffect* GE_PlayerLaunched; // 0xf38(0x08)
	struct USoundBase* TireSound; // 0xf40(0x08)
	double NoCeilingBounceHeight; // 0xf48(0x08)
	double Final Bounce X Vector; // 0xf50(0x08)
	double Final Bounce Y Vector; // 0xf58(0x08)
	double OrientationMultiplier; // 0xf60(0x08)
	bool BBouncingProjectile; // 0xf68(0x01)
	char pad_F69[0x7]; // 0xf69(0x07)
	struct FVector BounceLocation; // 0xf70(0x18)
	double MinNonPawnVelocity; // 0xf88(0x08)
	double MaxNonPawnVelocity; // 0xf90(0x08)
	double ProjectileLaunchDistanceMultiplier; // 0xf98(0x08)
	double BounceXYVelocityMofifier; // 0xfa0(0x08)

	struct FVector CheckJumpingOrientation(); // Function Prop_TirePile_01.Prop_TirePile_01_C.CheckJumpingOrientation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void CeilingCheck(bool& Success); // Function Prop_TirePile_01.Prop_TirePile_01_C.CeilingCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Prop_TirePile_01.Prop_TirePile_01_C.BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Reset Bounce Sound(); // Function Prop_TirePile_01.Prop_TirePile_01_C.Reset Bounce Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CustomEvent(); // Function Prop_TirePile_01.Prop_TirePile_01_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MakeWobbleEffect(struct FVector Center); // Function Prop_TirePile_01.Prop_TirePile_01_C.MakeWobbleEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prop_TirePile_01(int32_t EntryPoint); // Function Prop_TirePile_01.Prop_TirePile_01_C.ExecuteUbergraph_Prop_TirePile_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

