// BlueprintGeneratedClass ChromeSoundComponent.ChromeSoundComponent_C
// Size: 0x230 (Inherited: 0xa0)
struct UChromeSoundComponent_C : UChromeSoundComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UAudioComponent* ChromeAudioLoop; // 0xa8(0x08)
	struct USoundBase* ChromeSound; // 0xb0(0x08)
	struct USceneComponent* Attach to Component; // 0xb8(0x08)
	struct FVector ComponentLocation; // 0xc0(0x18)
	struct FTimerHandle HandleAudioLoop; // 0xd8(0x08)
	struct AFortAthenaVehicle* Vehicle; // 0xe0(0x08)
	enum class ChromeAudioAssetType AssetType; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct AActor* ActorType; // 0xf0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xf8(0x08)
	struct ANPC_Pawn_Wildlife_Parent_C* Wildlife; // 0x100(0x08)
	struct ATiered_Chest_Athena_C* RegularChest; // 0x108(0x08)
	struct ATiered_Chest_Athena_Parent_C* TieredChestParent; // 0x110(0x08)
	bool IsChromeBlobPlayer; // 0x118(0x01)
	bool IsChromeBasePlayer; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct FTimerHandle HandleBlobStateAudio; // 0x120(0x08)
	double PlayerBlobVelocitySpeed; // 0x128(0x08)
	struct ABuildingActor* BuildingActor; // 0x130(0x08)
	struct UAudioComponent* BuildingPhaseableAudio; // 0x138(0x08)
	struct USoundEffectSourcePresetChain* ChromeChestSourceEffectChain; // 0x140(0x08)
	struct USoundMix* PlayerChromeMix; // 0x148(0x08)
	struct USoundMix* PlayerChromeBlobMix; // 0x150(0x08)
	bool ApplyChrome; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct USoundBase* EnterBlobStateSound; // 0x160(0x08)
	struct USoundBase* ExitBlobStateSound; // 0x168(0x08)
	double ListenerPositionParam; // 0x170(0x08)
	double CurrentListenerValue; // 0x178(0x08)
	enum class B_Lackluster_ChromeTypes ChromeType; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct USoundEffectSourcePresetChain* EmoteSourceEffectChain; // 0x188(0x08)
	struct USoundEffectSourcePresetChain* WildlifeSourceEffectChain; // 0x190(0x08)
	struct USoundLibrary* BaseLib; // 0x198(0x08)
	struct USoundLibrary* BlobLib; // 0x1a0(0x08)
	struct UAudioComponent* PlayerChromeActivateAudio; // 0x1a8(0x08)
	struct UAudioComponent* VehiclePartHealAudio; // 0x1b0(0x08)
	struct FVector VehicleSoundLocation; // 0x1b8(0x18)
	bool BuildingChromeApplied; // 0x1d0(0x01)
	bool VehicleChromeApplied; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)
	struct FSoundIndicatorIconPicker Icon Override; // 0x1d8(0x28)
	struct ABuildingGameplayActor* Building Gameplay Actor; // 0x200(0x08)
	struct FScalableFloat BlobAudioVisualizerDistanceMultiplier; // 0x208(0x28)

	void Chrome Building Gameplay Actor(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Building Gameplay Actor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Building Gameplay Actor Death(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function ChromeSoundComponent.ChromeSoundComponent_C.Building Gameplay Actor Death // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Play Chrome Library(bool Add Lib); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Play Chrome Library // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Audio Visualizer Overrride Icon(bool Activate); // Function ChromeSoundComponent.ChromeSoundComponent_C.Audio Visualizer Overrride Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Chest Overrides(struct AActor* ChestActor); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Chest Overrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Chest Audio Loop(struct UAudioComponent* AudioComponent); // Function ChromeSoundComponent.ChromeSoundComponent_C.Play Chest Audio Loop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stop Building Audio(struct AActor* BuildingActor); // Function ChromeSoundComponent.ChromeSoundComponent_C.Stop Building Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Player Emote Effects(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Update Player Emote Effects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Blob Listener Perspective(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Blob Listener Perspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Audio Comp Team Affiliation(struct UAudioComponent* AudioComponent); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Audio Comp Team Affiliation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Pawn Died(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function ChromeSoundComponent.ChromeSoundComponent_C.On Pawn Died // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Chrome Blob State(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Update Chrome Blob State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Chrome Base State(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Update Chrome Base State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Remove Chrome Blob Audio(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Remove Chrome Blob Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Blob State Audio(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Start Blob State Audio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Player Mix State(struct USoundMix* InSoundMixModifier, bool IsActivated, struct USoundMix*& OutMix); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Player Mix State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Pawn Exit Vehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function ChromeSoundComponent.ChromeSoundComponent_C.Pawn Exit Vehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Pawn Enter Vehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function ChromeSoundComponent.ChromeSoundComponent_C.Pawn Enter Vehicle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Vehicle Chrome Parameter(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Update Vehicle Chrome Parameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Building Heal(struct ABuildingSMActor* BuildingSMActor); // Function ChromeSoundComponent.ChromeSoundComponent_C.Start Building Heal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Chrome Building(struct AActor* TargetActor); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Building // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Blob State Movement(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Blob State Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Chrome Player(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Chrome Chest(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Chest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void End VehicleTimer(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function ChromeSoundComponent.ChromeSoundComponent_C.End VehicleTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Chrome Wildlife(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Wildlife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Chrome Audio Actor(struct AActor* Actor, bool Add, enum class B_Lackluster_ChromeTypes ChromeType); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Chrome Audio Actor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Variable Data(enum class ChromeAudioAssetType AssetType, struct USoundBase* Chrome Sound, struct USceneComponent* Attach to Component, struct FVector ComponentLocation); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Variable Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Vehicle Movement Audio(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Vehicle Movement Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Chrome Audio Attach(struct USoundBase* ChromeSound, struct USceneComponent* AttachToComponent, struct FVector Location); // Function ChromeSoundComponent.ChromeSoundComponent_C.Spawn Chrome Audio Attach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Actor Type(struct AActor* ActorType, enum class ChromeAudioAssetType& AssetType); // Function ChromeSoundComponent.ChromeSoundComponent_C.Set Actor Type // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Chrome Vehicle(); // Function ChromeSoundComponent.ChromeSoundComponent_C.Chrome Vehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupChromeAudio(struct AActor* Actor, bool bAdd, enum class ELacklusterChromeType ChromeType); // Function ChromeSoundComponent.ChromeSoundComponent_C.SetupChromeAudio // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChromeSoundComponent(int32_t EntryPoint); // Function ChromeSoundComponent.ChromeSoundComponent_C.ExecuteUbergraph_ChromeSoundComponent // (Final|UbergraphFunction) // @ game+0xdef49c
};

