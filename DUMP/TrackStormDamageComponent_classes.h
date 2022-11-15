// BlueprintGeneratedClass TrackStormDamageComponent.TrackStormDamageComponent_C
// Size: 0x1b0 (Inherited: 0xa0)
struct UTrackStormDamageComponent_C : UPlayerStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FGameplayTag OutsideSafeZoneDamageTag; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	double fCummulativeStormDamageForMatch; // 0xb0(0x08)
	struct FScalableFloat fStormSicknessWarningLevel; // 0xb8(0x28)
	struct FScalableFloat fStormSicknessInflictionThreshold; // 0xe0(0x28)
	bool bPlayerWarned; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct AFortPlayerPawn* FortPlayerPawn; // 0x110(0x08)
	struct UGameplayEffect* GE_StormSickness; // 0x118(0x08)
	bool bPlayerHasStormSickness; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FScalableFloat fStormSicknessKillThreshold; // 0x128(0x28)
	struct FScalableFloat bStormSicknessEnabled; // 0x150(0x28)
	struct FActiveGameplayEffectHandle SicknessEffect; // 0x178(0x08)
	struct AFortMinigame* StoredMinigame; // 0x180(0x08)
	struct FScalableFloat bAllowResetWarnAndSicknessOnDeath; // 0x188(0x28)

	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int32_t& InOutPriority); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.BuildDataRegistryResolverScope // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetStormSicknessMutator(struct AFortMinigame* Minigame, struct ACreativeMutator_StormSicknessControl_C*& Mutator); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.GetStormSicknessMutator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_fCummulativeStormDamageForMatch(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.OnRep_fCummulativeStormDamageForMatch // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_C6BD086B4F38F4C74BBEAAA52D6D6ABB(struct FGameplayEventData Payload); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.EventReceived_C6BD086B4F38F4C74BBEAAA52D6D6ABB // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckStormSicknessWarning(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.CheckStormSicknessWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckAddStormSickness(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.CheckAddStormSickness // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SendStormSicknessGameplayEvent(struct FGameplayEventData Gameplay Event Data); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.SendStormSicknessGameplayEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KillSwitch(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.KillSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyStormSickness(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ApplyStormSickness // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisplayStormSicknessWarning(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.DisplayStormSicknessWarning // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function TrackStormDamageComponent.TrackStormDamageComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ResetAbility(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ResetAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset(bool ResetWarnAndSickness); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetWarn(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ResetWarn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UnbindMinigame(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.UnbindMinigame // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.OnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOptionsUpdated(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.OnOptionsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetAll(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ResetAll // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetDeathEventBind(); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ResetDeathEventBind // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TrackStormDamageComponent(int32_t EntryPoint); // Function TrackStormDamageComponent.TrackStormDamageComponent_C.ExecuteUbergraph_TrackStormDamageComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

