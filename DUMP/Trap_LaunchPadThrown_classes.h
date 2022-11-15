// BlueprintGeneratedClass Trap_LaunchPadThrown.Trap_LaunchPadThrown_C
// Size: 0x11f8 (Inherited: 0x11c0)
struct ATrap_LaunchPadThrown_C : ATrap_Floor_Player_Launch_Pad_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11c0(0x08)
	struct AActor* LinkedActor; // 0x11c8(0x08)
	struct FGameplayTagContainer Physics Object Tags; // 0x11d0(0x20)
	struct UNiagaraSystem* PS_LaunchFX; // 0x11f0(0x08)

	void Mark(); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.Mark // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPlaced(); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void When Hit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.When Hit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void TriggerLaunchEffects(struct AFortPawn* Pawn); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.TriggerLaunchEffects // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Trap_LaunchPadThrown_S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.BndEvt__Trap_LaunchPadThrown_S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Event Vehicle Trigger FX(); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.Event Vehicle Trigger FX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Trap_LaunchPadThrown(int32_t EntryPoint); // Function Trap_LaunchPadThrown.Trap_LaunchPadThrown_C.ExecuteUbergraph_Trap_LaunchPadThrown // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

