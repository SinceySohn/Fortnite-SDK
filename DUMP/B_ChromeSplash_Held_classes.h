// BlueprintGeneratedClass B_ChromeSplash_Held.B_ChromeSplash_Held_C
// Size: 0x1060 (Inherited: 0x1039)
struct AB_ChromeSplash_Held_C : AB_ConsumableSmall_Athena_C {
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UNiagaraComponent* NS_Chrome_Splash_Pickup; // 0x1048(0x08)
	struct UStaticMeshComponent* SM_Chrome_Splash_Gadget; // 0x1050(0x08)
	struct UAudioComponent* SplashAmbAudio; // 0x1058(0x08)

	void Update Splash Ambient Loop(bool PlayAudio); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.Update Splash Ambient Loop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.ReceiveParticleData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_ChromeSplash_Held(int32_t EntryPoint); // Function B_ChromeSplash_Held.B_ChromeSplash_Held_C.ExecuteUbergraph_B_ChromeSplash_Held // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

