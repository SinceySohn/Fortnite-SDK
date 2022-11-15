// BlueprintGeneratedClass GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C
// Size: 0xb68 (Inherited: 0xb20)
struct UGA_Coaster_EjectOctopus_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FVector HitLocation; // 0xb28(0x18)
	struct FVector HitNormal; // 0xb40(0x18)
	struct AActor* Octopus Actor; // 0xb58(0x08)
	struct FTimerHandle Driverless Check Timer Handle; // 0xb60(0x08)

	void Still Riding Coaster(struct AActor* Actor, bool& Still Riding); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.Still Riding Coaster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void LaunchVehicle(); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.LaunchVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Driverless Check(); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.Driverless Check // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Coaster_EjectOctopus(int32_t EntryPoint); // Function GA_Coaster_EjectOctopus.GA_Coaster_EjectOctopus_C.ExecuteUbergraph_GA_Coaster_EjectOctopus // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

