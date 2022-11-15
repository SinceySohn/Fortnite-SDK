// BlueprintGeneratedClass Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C
// Size: 0xf38 (Inherited: 0xef0)
struct ANightmare_JunglePlantGroup_A_01_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UFortCollisionResponseSwapperComponent* FortCollisionResponseSwapper; // 0xef8(0x08)
	struct USphereComponent* OverlapSphere; // 0xf00(0x08)
	struct UGameplayEffect* GE_CornField_GC; // 0xf08(0x08)
	bool ShouldWobble; // 0xf10(0x01)
	char pad_F11[0x7]; // 0xf11(0x07)
	struct FVector PlayerVelocity; // 0xf18(0x18)
	struct UMaterialInstanceDynamic* Mid; // 0xf30(0x08)

	void ReceiveBeginPlay(); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MaterialWobble(struct AActor* Player); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.MaterialWobble // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Nightmare_JunglePlantGroup_A_01(int32_t EntryPoint); // Function Nightmare_JunglePlantGroup_A_01.Nightmare_JunglePlantGroup_A_01_C.ExecuteUbergraph_Nightmare_JunglePlantGroup_A_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

