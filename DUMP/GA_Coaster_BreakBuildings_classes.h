// BlueprintGeneratedClass GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C
// Size: 0xc68 (Inherited: 0xb20)
struct UGA_Coaster_BreakBuildings_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* Player Pawn; // 0xb28(0x08)
	struct FVector HitLocation; // 0xb30(0x18)
	struct FVector HitNormal; // 0xb48(0x18)
	struct AOctopusVehicle_V2_C* Octopus Actor; // 0xb60(0x08)
	struct FScalableFloat Player Launch Disable HF; // 0xb68(0x28)
	struct FGameplayTag Hit Player Cue; // 0xb90(0x04)
	char pad_B94[0x4]; // 0xb94(0x04)
	struct FGameplayCueParameters GC Params Empty; // 0xb98(0xd0)

	void K2_ActivateAbility(); // Function GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BallerEventHit(struct FVector Location, struct FVector Normal, double Force, struct AActor* Hit Actor); // Function GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C.BallerEventHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Coaster_BreakBuildings(int32_t EntryPoint); // Function GA_Coaster_BreakBuildings.GA_Coaster_BreakBuildings_C.ExecuteUbergraph_GA_Coaster_BreakBuildings // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

