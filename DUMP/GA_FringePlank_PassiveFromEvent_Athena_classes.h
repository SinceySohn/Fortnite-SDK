// BlueprintGeneratedClass GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C
// Size: 0xb40 (Inherited: 0xb20)
struct UGA_FringePlank_PassiveFromEvent_Athena_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AB_FringePlank_Generic_Athena_C* Weapon; // 0xb28(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb30(0x08)
	struct USoundBase* OutOfChargesSound; // 0xb38(0x08)

	void OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC(struct FGameplayTag NotifyTag); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena(int32_t EntryPoint); // Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

