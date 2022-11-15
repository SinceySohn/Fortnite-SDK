// BlueprintGeneratedClass InteriorAudioComponent_Chrome.InteriorAudioComponent_Chrome_C
// Size: 0xf4 (Inherited: 0xb0)
struct UInteriorAudioComponent_Chrome_C : UInteriorAudioComponent_C {
	struct FName ChromeTag; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector> OneshotLocations; // 0xb8(0x10)
	struct FTimerHandle AmbientOneshotTimerHandle; // 0xc8(0x08)
	struct TArray<struct USoundBase*> OneShotSounds; // 0xd0(0x10)
	struct FVector2D RandomTimeRange; // 0xe0(0x10)
	struct FGameplayTag ChromeAmbientTag; // 0xf0(0x04)

	void TryPlayOneshot(); // Function InteriorAudioComponent_Chrome.InteriorAudioComponent_Chrome_C.TryPlayOneshot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetRandomTime(double& Time); // Function InteriorAudioComponent_Chrome.InteriorAudioComponent_Chrome_C.GetRandomTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Update(struct FInteriorAudioScanResults& ScanResults); // Function InteriorAudioComponent_Chrome.InteriorAudioComponent_Chrome_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

