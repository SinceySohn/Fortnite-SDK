// BlueprintGeneratedClass GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C
// Size: 0xb70 (Inherited: 0xb20)
struct UGA_Athena_HappyGhost_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_Active; // 0xb28(0x08)
	struct FGameplayTagContainer T_Active; // 0xb30(0x20)
	struct AB_HappyGhost_Athena_C* Weapon; // 0xb50(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb58(0x08)
	double FailsafeDelay; // 0xb60(0x08)
	struct USoundBase* OutOfChargesSound; // 0xb68(0x08)

	void OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525(struct FName NotifyName); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525(struct FName NotifyName); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525(struct FName NotifyName); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525(struct FName NotifyName); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_7857FA3D409C8FB0381EC7B9126A8525(struct FName NotifyName); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.OnCompleted_7857FA3D409C8FB0381EC7B9126A8525 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ForceEnd(); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.ForceEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HappyGhost_Passive(int32_t EntryPoint); // Function GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C.ExecuteUbergraph_GA_Athena_HappyGhost_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

