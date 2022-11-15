// BlueprintGeneratedClass GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C
// Size: 0xb30 (Inherited: 0xb20)
struct UGA_Athena_RemoveEffect_WhenNotFalling_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPawn* Pawn; // 0xb28(0x08)

	void OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C.OnMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFallingStatusChanged(bool IsFalling); // Function GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C.OnFallingStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_RemoveEffect_WhenNotFalling_Parent(int32_t EntryPoint); // Function GA_Athena_RemoveEffect_WhenNotFalling_Parent.GA_Athena_RemoveEffect_WhenNotFalling_Parent_C.ExecuteUbergraph_GA_Athena_RemoveEffect_WhenNotFalling_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

