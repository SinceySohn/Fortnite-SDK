// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// Size: 0xb90 (Inherited: 0xb40)
struct UGA_Trap_FloorJumpPad_C : UGA_TrapGeneric_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb40(0x08)
	struct AFortPlayerPawn* PlayerJumping; // 0xb48(0x08)
	struct FGameplayTag TC_LaunchTag; // 0xb50(0x04)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct TArray<struct AActor*> OverlappingTargets; // 0xb58(0x10)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0xb68(0x28)

	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Cancelled_E91C59AB43D826926CE5CEAA22E84570 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Targeted_E91C59AB43D826926CE5CEAA22E84570 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayPlayerFX(struct AFortPlayerPawn* Player); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.PlayPlayerFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32_t EntryPoint); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.ExecuteUbergraph_GA_Trap_FloorJumpPad // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

