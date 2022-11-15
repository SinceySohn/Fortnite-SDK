// BlueprintGeneratedClass Artemis_Custom_KillVolume.Artemis_Custom_KillVolume_C
// Size: 0x2e8 (Inherited: 0x288)
struct AArtemis_Custom_KillVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* CustomCollisionVolume; // 0x290(0x08)
	struct UGameplayEffect* Environment Damage GE; // 0x298(0x08)
	struct FScalableFloat Environment_Damage; // 0x2a0(0x28)
	struct FGameplayTagContainer TC_IgnoreActorsWithTags; // 0x2c8(0x20)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Artemis_Custom_KillVolume.Artemis_Custom_KillVolume_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SM_S16_Sm_Tower_Exterior_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Artemis_Custom_KillVolume.Artemis_Custom_KillVolume_C.BndEvt__SM_S16_Sm_Tower_Exterior_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Artemis_Custom_KillVolume(int32_t EntryPoint); // Function Artemis_Custom_KillVolume.Artemis_Custom_KillVolume_C.ExecuteUbergraph_Artemis_Custom_KillVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

