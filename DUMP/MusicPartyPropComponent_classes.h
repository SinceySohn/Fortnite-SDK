// BlueprintGeneratedClass MusicPartyPropComponent.MusicPartyPropComponent_C
// Size: 0x149 (Inherited: 0xa0)
struct UMusicPartyPropComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct USoundSourceBus* SoundToPlay; // 0xa8(0x08)
	struct UAudioComponent* AudioComponent; // 0xb0(0x08)
	struct USoundBase* OnSpeakerDamagedSound; // 0xb8(0x08)
	struct USoundBase* OnSpeakerDestroyedSound; // 0xc0(0x08)
	struct USoundBase* OnAllSpeakersDestroyedSound; // 0xc8(0x08)
	double AutoStopFadeOutTime; // 0xd0(0x08)
	struct FGameplayTag MusicEventTag; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct TSoftObjectPtr<ABuildingActor>> SpeakerActors; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnSpeakerRemoved; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnSpeakerDamaged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnAllSpeakersDestroyed; // 0x110(0x10)
	bool bAutoUpdateAudioPosition; // 0x120(0x01)
	bool bAutoUpdateAudioSpread; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct TArray<struct ABuildingActor*> SpeakerActorsResolved; // 0x128(0x10)
	struct AGameStateBase* GameState; // 0x138(0x08)
	struct UMusicPartyManagerComponent_C* ManagerComponent; // 0x140(0x08)
	bool bShouldBePlaying; // 0x148(0x01)

	void IsOwnedByBuildingActor(bool& Result); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.IsOwnedByBuildingActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupAutoActivate(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.SetupAutoActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SpeakerActorsResolved(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnRep_SpeakerActorsResolved // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateAudioAttenuation(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.UpdateAudioAttenuation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResolveSpeakerActors(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.ResolveSpeakerActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveSpeakerServer(struct ABuildingActor*& Speaker); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.RemoveSpeakerServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBuildingHealthChangedClient(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnBuildingHealthChangedClient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOwnerDeathEffectsClient(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnOwnerDeathEffectsClient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDiedServer(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnDiedServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagedServer(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnDamagedServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToSpeakerDestruction(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.BindToSpeakerDestruction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_96C85A044ED9A5029B7FE68338D3E70F(struct AGameStateBase* GameState); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnReady_96C85A044ED9A5029B7FE68338D3E70F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Party(struct UAudioComponent* Audio Component, float FadeInDuration); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.Start Party // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stop Party(double FadeOutDuration); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.Stop Party // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void On Speaker Damaged Rep(struct FVector Location); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.On Speaker Damaged Rep // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Speaker Removed Rep(struct FVector Location); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.On Speaker Removed Rep // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void On All Speakers Removed Rep(struct FVector Location); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.On All Speakers Removed Rep // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MusicPartyPropComponent(int32_t EntryPoint); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.ExecuteUbergraph_MusicPartyPropComponent // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnSpeakerDamaged__DelegateSignature(struct AActor* Speaker Actor); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnSpeakerDamaged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAllSpeakersDestroyed__DelegateSignature(struct AActor* Speaker Actor); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnAllSpeakersDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpeakerRemoved__DelegateSignature(struct AActor* Speaker Actor); // Function MusicPartyPropComponent.MusicPartyPropComponent_C.OnSpeakerRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

