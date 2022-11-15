// BlueprintGeneratedClass GCN_SpicySake_PlayerBoost.GCN_SpicySake_PlayerBoost_C
// Size: 0x580 (Inherited: 0x528)
struct AGCN_SpicySake_PlayerBoost_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct APlayerController* GCPlayerController; // 0x530(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0x538(0x08)
	struct USoundBase* BoostSound; // 0x540(0x08)
	struct UAudioComponent* BoostAudioComponent; // 0x548(0x08)
	struct USoundBase* BoostEndSound; // 0x550(0x08)
	struct FScalableFloat TetheredBoostDuration; // 0x558(0x28)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_SpicySake_PlayerBoost.GCN_SpicySake_PlayerBoost_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteBoostLogic(); // Function GCN_SpicySake_PlayerBoost.GCN_SpicySake_PlayerBoost_C.ExecuteBoostLogic // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostEndEvent(); // Function GCN_SpicySake_PlayerBoost.GCN_SpicySake_PlayerBoost_C.BoostEndEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_SpicySake_PlayerBoost(int32_t EntryPoint); // Function GCN_SpicySake_PlayerBoost.GCN_SpicySake_PlayerBoost_C.ExecuteUbergraph_GCN_SpicySake_PlayerBoost // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

