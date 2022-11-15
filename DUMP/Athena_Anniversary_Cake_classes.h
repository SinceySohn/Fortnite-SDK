// BlueprintGeneratedClass Athena_Anniversary_Cake.Athena_Anniversary_Cake_C
// Size: 0xf08 (Inherited: 0xef0)
struct AAthena_Anniversary_Cake_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UNiagaraComponent* NS_BirthdayCake_CandleFlame; // 0xef8(0x08)
	struct UCapsuleComponent* CakeDanceZone; // 0xf00(0x08)

	void Remove Dance Zone GE(struct AActor* Actor Leaving Zone); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.Remove Dance Zone GE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Add Dance Zone GE(struct AActor* Actor Entering Zone); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.Add Dance Zone GE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWorldReady(); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CakeDanceZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.BndEvt__CakeDanceZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_Anniversary_Cake(int32_t EntryPoint); // Function Athena_Anniversary_Cake.Athena_Anniversary_Cake_C.ExecuteUbergraph_Athena_Anniversary_Cake // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

