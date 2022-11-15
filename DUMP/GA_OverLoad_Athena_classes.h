// BlueprintGeneratedClass GA_OverLoad_Athena.GA_OverLoad_Athena_C
// Size: 0x1018 (Inherited: 0xc58)
struct UGA_OverLoad_Athena_C : UGAT_GenericTriggeredAbility_Perk_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc58(0x08)
	struct FGameplayTagContainer TC_FireEvent; // 0xc60(0x20)
	struct FGameplayTagContainer TC_OverloadStack; // 0xc80(0x20)
	struct FGameplayTagContainer TC_Startup_T02; // 0xca0(0x20)
	struct UGameplayEffect* GE_DamageMult; // 0xcc0(0x08)
	struct FGameplayTagContainer Reload Tag; // 0xcc8(0x20)
	struct AFortPlayerPawn* PlayerPawn; // 0xce8(0x08)
	int32_t Max Ammo; // 0xcf0(0x04)
	int32_t Current Ammo; // 0xcf4(0x04)
	struct FFortBurstEffectData Burst Effect; // 0xcf8(0x140)
	struct FGameplayCueParameters Cue Parameters; // 0xe38(0xd0)
	struct AB_Shotgun_OverLoad_Athena_C* As B Shotgun Reload Charge Athena; // 0xf08(0x08)
	int32_t Stacks; // 0xf10(0x04)
	char pad_F14[0x4]; // 0xf14(0x04)
	struct FGameplayTagContainer Gameplay Tag Container; // 0xf18(0x20)
	bool ReloadTrue; // 0xf38(0x01)
	char pad_F39[0x7]; // 0xf39(0x07)
	struct FGameplayTagContainer Fired Tag; // 0xf40(0x20)
	bool FireTrue; // 0xf60(0x01)
	char pad_F61[0x7]; // 0xf61(0x07)
	struct FGameplayEventData Event Data; // 0xf68(0xb0)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_OverLoad_Athena.GA_OverLoad_Athena_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_OverLoad_Athena.GA_OverLoad_Athena_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_OverLoad_Athena(int32_t EntryPoint); // Function GA_OverLoad_Athena.GA_OverLoad_Athena_C.ExecuteUbergraph_GA_OverLoad_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

