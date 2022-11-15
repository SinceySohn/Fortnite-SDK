// BlueprintGeneratedClass Prop_TirePile_Tower.Prop_TirePile_Tower_C
// Size: 0xf48 (Inherited: 0xef0)
struct AProp_TirePile_Tower_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UStaticMeshComponent* Jump_Collision; // 0xef8(0x08)
	bool Ceiling; // 0xf00(0x01)
	char pad_F01[0x7]; // 0xf01(0x07)
	double BounceHeight; // 0xf08(0x08)
	struct UForceFeedbackEffect* LaunchForceFeedback; // 0xf10(0x08)
	struct AFortPawn* OverlapPawn; // 0xf18(0x08)
	struct AFortPlayerController* OverlapController; // 0xf20(0x08)
	struct UGameplayEffect* GE_PlayerLaunched; // 0xf28(0x08)
	struct USoundBase* TireSound; // 0xf30(0x08)
	double BounceHeightObstructed; // 0xf38(0x08)
	double BounceHeightUnobstructed; // 0xf40(0x08)

	void BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Reset Bounce Sound(); // Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.Reset Bounce Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prop_TirePile_Tower(int32_t EntryPoint); // Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.ExecuteUbergraph_Prop_TirePile_Tower // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

