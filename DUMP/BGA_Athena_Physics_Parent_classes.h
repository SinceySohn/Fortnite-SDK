// BlueprintGeneratedClass BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C
// Size: 0xa08 (Inherited: 0x9d8)
struct ABGA_Athena_Physics_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UStaticMeshComponent* ParentMesh; // 0x9e0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x9e8(0x08)
	struct UFortPhysicsObjectComponent* FortPhysicsObject; // 0x9f0(0x08)
	struct AActor* LinkedActor; // 0x9f8(0x08)
	bool Rep_WakeUp; // 0xa00(0x01)
	enum class Enum_HeldObject_GenericWeights ObjectWeights; // 0xa01(0x01)
	char pad_A02[0x2]; // 0xa02(0x02)
	struct FGameplayTag GC_EnterWater; // 0xa04(0x04)

	void OnRep_Rep_WakeUp(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.OnRep_Rep_WakeUp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnterWater(struct FSphericalPontoon& Pontoon); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.OnEnterWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlaySplashGC(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.PlaySplashGC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_Physics_Parent(int32_t EntryPoint); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.ExecuteUbergraph_BGA_Athena_Physics_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

