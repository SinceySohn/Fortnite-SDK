// BlueprintGeneratedClass Apollo_BigBush.Apollo_BigBush_C
// Size: 0xf90 (Inherited: 0xef0)
struct AApollo_BigBush_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UShadowProxyMeshComponent_C* ShadowProxyMeshComponent; // 0xef8(0x08)
	struct UFortCollisionResponseSwapperComponent* FortCollisionResponseSwapper; // 0xf00(0x08)
	struct USphereComponent* OverlapSphere; // 0xf08(0x08)
	struct UGameplayEffect* GE_CornField_GC; // 0xf10(0x08)
	bool ShouldWobble; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	struct FVector PlayerVelocity; // 0xf20(0x18)
	struct UMaterialInstanceDynamic* Mid; // 0xf38(0x08)
	struct FString WinterDecoEvent; // 0xf40(0x10)
	struct TSoftObjectPtr<UStaticMesh> Winter Mesh; // 0xf50(0x28)
	double Snow Coverage Amount; // 0xf78(0x08)
	struct UGameplayEffect* GE BushTagger; // 0xf80(0x08)
	struct USoundLibrary* SoundLibrary; // 0xf88(0x08)

	void UserConstructionScript(); // Function Apollo_BigBush.Apollo_BigBush_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Apollo_BigBush.Apollo_BigBush_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MaterialWobble(struct AActor* Player); // Function Apollo_BigBush.Apollo_BigBush_C.MaterialWobble // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Apollo_BigBush.Apollo_BigBush_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Apollo_BigBush.Apollo_BigBush_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Apollo_BigBush.Apollo_BigBush_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Apollo_BigBush(int32_t EntryPoint); // Function Apollo_BigBush.Apollo_BigBush_C.ExecuteUbergraph_Apollo_BigBush // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

