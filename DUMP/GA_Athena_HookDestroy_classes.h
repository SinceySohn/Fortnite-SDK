// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// Size: 0xbd5 (Inherited: 0xb20)
struct UGA_Athena_HookDestroy_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	double CleanedAngle; // 0xb30(0x08)
	struct TArray<struct FToyAngleSelectorInfo> LaunchAngleVariations; // 0xb38(0x10)
	struct UAnimMontage* TravelMontage; // 0xb48(0x08)
	bool Debug; // 0xb50(0x01)
	char pad_B51[0x7]; // 0xb51(0x07)
	struct AB_Hookgun_Athena_C* WeaponActor; // 0xb58(0x08)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xb60(0x20)
	struct FGameplayTag RopeActiveTag; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct UObject* NullMontage; // 0xb88(0x08)
	bool GliderGrappler; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)
	double BadgerGrapeDelayFailsafe; // 0xb98(0x08)
	struct FGameplayTag DestroyEvent; // 0xba0(0x04)
	struct FGameplayTag Event_GrapplerHit; // 0xba4(0x04)
	struct FGameplayTag Event_GrapplerReturn; // 0xba8(0x04)
	char pad_BAC[0x4]; // 0xbac(0x04)
	struct FGameplayTagContainer T_HoverboardMontage; // 0xbb0(0x20)
	float Failsafe Duration Const; // 0xbd0(0x04)
	bool bChangeEquipmentTagsBlocked; // 0xbd4(0x01)

	void OnRep_BadgerGrapeDelayFailsafe(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_BadgerGrapeDelayFailsafe // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PickGrappleMontage(double PitchAngle, struct FName& SectionName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_AmmoReserves(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_3FEADD91456C78D266936684DE918289(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_1B71851D49048B6433DA75B0D6007B6E(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_1B71851D49048B6433DA75B0D6007B6E // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSync_A7AA33494F9F686A79A026809EAEF410(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnSync_A7AA33494F9F686A79A026809EAEF410 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ResetDoOnce(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ResetDoOnce // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32_t EntryPoint); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

