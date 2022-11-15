// BlueprintGeneratedClass CBGA_Parent_Physics.CBGA_Parent_Physics_C
// Size: 0xd30 (Inherited: 0xbc8)
struct ACBGA_Parent_Physics_C : ACBGA_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbc8(0x08)
	struct UFortPhysicsObjectComponent* FortPhysicsObject; // 0xbd0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xbd8(0x08)
	struct FVector GravImpact_Loc; // 0xbe0(0x18)
	struct FVector GravHitNormal; // 0xbf8(0x18)
	bool bResumeSimulation; // 0xc10(0x01)
	bool ResumeGravSimOnBegin; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct FHitResult NullHit; // 0xc18(0xe0)
	bool RepCollision; // 0xcf8(0x01)
	char pad_CF9[0x7]; // 0xcf9(0x07)
	struct UParticleSystem* HitgroundFX; // 0xd00(0x08)
	struct USoundBase* HitgroundSound; // 0xd08(0x08)
	struct UParticleSystem* SpawnFX; // 0xd10(0x08)
	struct USoundBase* SpawnSound; // 0xd18(0x08)
	bool SpawnCollision; // 0xd20(0x01)
	char pad_D21[0x7]; // 0xd21(0x07)
	struct AActor* LinkedActor; // 0xd28(0x08)

	void OnRep_RepCollision(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.OnRep_RepCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bResumeSimulation(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.OnRep_bResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBinding(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.HandleBinding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Impulse(double DelayBeforeImpulse, double DelayBeforeCollision, struct FVector ImpulseOrigin, struct FVector ImpulseAmount, bool SetCollisionAfterImpulse); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.Impulse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayHitFX(struct FVector Location, struct FRotator Rotation); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.PlayHitFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnFXSounds(); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.SpawnFXSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnAwakeChanged(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.OnAwakeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CBGA_Parent_Physics(int32_t EntryPoint); // Function CBGA_Parent_Physics.CBGA_Parent_Physics_C.ExecuteUbergraph_CBGA_Parent_Physics // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

