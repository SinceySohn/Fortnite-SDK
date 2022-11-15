// BlueprintGeneratedClass Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C
// Size: 0xf30 (Inherited: 0xef0)
struct AAthena_Prop_BurstReaction_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct USceneComponent* ParticleTransformSource; // 0xef8(0x08)
	struct UParticleSystem* EmitterOnDamage; // 0xf00(0x08)
	struct UStaticMesh* MeshToReplaceOnDamage; // 0xf08(0x08)
	bool SpawnParticlesFromHitLocation; // 0xf10(0x01)
	bool OnlyOnce; // 0xf11(0x01)
	char pad_F12[0x6]; // 0xf12(0x06)
	double Emitter Scale X; // 0xf18(0x08)
	double Emitter Scale Y; // 0xf20(0x08)
	double Emitter Scale Z; // 0xf28(0x08)

	void ReceiveBeginPlay(); // Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamagedCustom(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.OnDamagedCustom // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FireEffect(struct FVector HitLocation); // Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.FireEffect // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_Prop_BurstReaction(int32_t EntryPoint); // Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.ExecuteUbergraph_Athena_Prop_BurstReaction // (Final|UbergraphFunction) // @ game+0xdef49c
};

