// BlueprintGeneratedClass GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C
// Size: 0xb69 (Inherited: 0xb20)
struct UGA_Athena_Blob_Enter_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FGameplayTag Tag_RemoveBalloons; // 0xb30(0x04)
	struct FName HolsterId; // 0xb34(0x04)
	struct UFortCameraMode* CameraMode_EnterBlob; // 0xb38(0x08)
	bool ForceHolsterWeapon; // 0xb40(0x01)
	bool ForceRemoveBalloons; // 0xb41(0x01)
	bool ForceCancelBuilding; // 0xb42(0x01)
	bool AllowActivationDuringSkydive; // 0xb43(0x01)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct FGameplayTagContainer Tags_PreventEnterBlobMode; // 0xb48(0x20)
	bool ForceDropHeldObjects; // 0xb68(0x01)

	void GetValidController(bool& IsValid, struct AFortPlayerController*& PlayerController, struct AAIController*& AIController, bool& isPlayer); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.GetValidController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CanActivateAbilityPostActivate(bool& CanActivate); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.CanActivateAbilityPostActivate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Completed_FB0533144A094DDE7241869B7AEE6B0D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.Completed_FB0533144A094DDE7241869B7AEE6B0D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_FB0533144A094DDE7241869B7AEE6B0D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.Cancelled_FB0533144A094DDE7241869B7AEE6B0D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_FB0533144A094DDE7241869B7AEE6B0D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.Triggered_FB0533144A094DDE7241869B7AEE6B0D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetCameraModeEnabled(bool Enabled); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.SetCameraModeEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MontageTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.MontageTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCancelled(); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.MontageCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MontageCompleted(); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.MontageCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DropHeldObject(); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.DropHeldObject // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CannotActivatePostActivate(); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.CannotActivatePostActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_Blob_Enter(int32_t EntryPoint); // Function GA_Athena_Blob_Enter.GA_Athena_Blob_Enter_C.ExecuteUbergraph_GA_Athena_Blob_Enter // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

