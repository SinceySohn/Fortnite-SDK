// BlueprintGeneratedClass BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C
// Size: 0xee0 (Inherited: 0xec0)
struct ABGA_Athena_SCMachine_Redux_C : ABGA_Athena_SCMachine_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xec0(0x08)
	struct UNiagaraComponent* NS_Redux_Portal_Closing; // 0xec8(0x08)
	struct UParticleSystem* P_SpawnRift; // 0xed0(0x08)
	double Rift Play Rate; // 0xed8(0x08)

	void SpawnRift(struct AFortPawn* InFortPawn); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.SpawnRift // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Rift(); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.Reset Rift // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnMachineStateChanged(); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.OnSpawnMachineStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleActorCountChanged(int32_t InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.HandleActorCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_SCMachine_Redux(int32_t EntryPoint); // Function BGA_Athena_SCMachine_Redux.BGA_Athena_SCMachine_Redux_C.ExecuteUbergraph_BGA_Athena_SCMachine_Redux // (Final|UbergraphFunction) // @ game+0xdef49c
};

