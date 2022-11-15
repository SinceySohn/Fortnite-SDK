// Class AudioMotorSim.AudioMotorModelComponent
// Size: 0x100 (Inherited: 0xa0)
struct UAudioMotorModelComponent : UActorComponent {
	struct TArray<struct FMotorSimEntry> SimComponents; // 0xa0(0x10)
	struct TArray<struct TScriptInterface<IAudioMotorSimOutput>> AudioComponents; // 0xb0(0x10)
	char pad_C0[0x40]; // 0xc0(0x40)

	void Update(struct FAudioMotorSimInputContext Input); // Function AudioMotorSim.AudioMotorModelComponent.Update // (Native|Public|BlueprintCallable) // @ game+0x696888c
	void StopOutput(); // Function AudioMotorSim.AudioMotorModelComponent.StopOutput // (Native|Public|BlueprintCallable) // @ game+0x1c84e6c
	void StartOutput(); // Function AudioMotorSim.AudioMotorModelComponent.StartOutput // (Native|Public|BlueprintCallable) // @ game+0xe8fb7c
	void Reset(); // Function AudioMotorSim.AudioMotorModelComponent.Reset // (Native|Public|BlueprintCallable) // @ game+0x6968874
	void RemoveMotorSimComponent(struct TScriptInterface<IAudioMotorSim> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x69687e4
	void RemoveMotorAudioComponent(struct TScriptInterface<IAudioMotorSimOutput> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x696873c
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo(); // Function AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6968718
	float GetRpm(); // Function AudioMotorSim.AudioMotorModelComponent.GetRpm // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6968700
	int32_t GetGear(); // Function AudioMotorSim.AudioMotorModelComponent.GetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e65aec
	struct FAudioMotorSimInputContext GetCachedInputData(); // Function AudioMotorSim.AudioMotorModelComponent.GetCachedInputData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2867a8c
	void AddMotorSimComponent(struct TScriptInterface<IAudioMotorSim> InComponent, int32_t SortOrder); // Function AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x219d610
	void AddMotorAudioComponent(struct TScriptInterface<IAudioMotorSimOutput> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x249c9fc
};

// Class AudioMotorSim.AudioMotorSim
// Size: 0x28 (Inherited: 0x28)
struct UAudioMotorSim : UInterface {
};

// Class AudioMotorSim.AudioMotorSimComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UAudioMotorSimComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class AudioMotorSim.AudioMotorSimOutput
// Size: 0x28 (Inherited: 0x28)
struct UAudioMotorSimOutput : UInterface {
};

