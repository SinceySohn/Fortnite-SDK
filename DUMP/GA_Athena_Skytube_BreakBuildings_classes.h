// BlueprintGeneratedClass GA_Athena_Skytube_BreakBuildings.GA_Athena_Skytube_BreakBuildings_C
// Size: 0xb60 (Inherited: 0xb20)
struct UGA_Athena_Skytube_BreakBuildings_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FVector HitLocation; // 0xb30(0x18)
	struct FVector HitNormal; // 0xb48(0x18)

	void PlayerCapsuleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GA_Athena_Skytube_BreakBuildings.GA_Athena_Skytube_BreakBuildings_C.PlayerCapsuleHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Skytube_BreakBuildings.GA_Athena_Skytube_BreakBuildings_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Skytube_BreakBuildings.GA_Athena_Skytube_BreakBuildings_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Skytube_BreakBuildings(int32_t EntryPoint); // Function GA_Athena_Skytube_BreakBuildings.GA_Athena_Skytube_BreakBuildings_C.ExecuteUbergraph_GA_Athena_Skytube_BreakBuildings // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

