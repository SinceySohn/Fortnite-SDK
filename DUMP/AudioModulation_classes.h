// Class AudioModulation.AudioModulationStyle
// Size: 0x28 (Inherited: 0x28)
struct UAudioModulationStyle : UBlueprintFunctionLibrary {

	struct FColor GetPatchColor(); // Function AudioModulation.AudioModulationStyle.GetPatchColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6df8840
	struct FColor GetParameterColor(); // Function AudioModulation.AudioModulationStyle.GetParameterColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6df8820
	struct FColor GetModulationGeneratorColor(); // Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6df8800
	struct FColor GetControlBusMixColor(); // Function AudioModulation.AudioModulationStyle.GetControlBusMixColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6df87e0
	struct FColor GetControlBusColor(); // Function AudioModulation.AudioModulationStyle.GetControlBusColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x6df87c0
};

// Class AudioModulation.AudioModulationSettings
// Size: 0x40 (Inherited: 0x30)
struct UAudioModulationSettings : UDeveloperSettings {
	struct TArray<struct FSoftObjectPath> Parameters; // 0x30(0x10)
};

// Class AudioModulation.AudioModulationStatics
// Size: 0x28 (Inherited: 0x28)
struct UAudioModulationStatics : UBlueprintFunctionLibrary {

	void UpdateModulator(struct UObject* WorldContextObject, struct USoundModulatorBase* Modulator); // Function AudioModulation.AudioModulationStatics.UpdateModulator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df9360
	void UpdateMixFromObject(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix, float FadeTime); // Function AudioModulation.AudioModulationStatics.UpdateMixFromObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df923c
	void UpdateMixByFilter(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix, struct FString AddressFilter, struct USoundModulationParameter* ParamClassFilter, struct USoundModulationParameter* ParamFilter, float Value, float FadeTime); // Function AudioModulation.AudioModulationStatics.UpdateMixByFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8efc
	void UpdateMix(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix, struct TArray<struct FSoundControlBusMixStage> Stages, float FadeTime); // Function AudioModulation.AudioModulationStatics.UpdateMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8d28
	void SetGlobalBusMixValue(struct UObject* WorldContextObject, struct USoundControlBus* Bus, float Value, float FadeTime); // Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8b7c
	void SaveMixToProfile(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix, int32_t ProfileIndex); // Function AudioModulation.AudioModulationStatics.SaveMixToProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8a6c
	struct TArray<struct FSoundControlBusMixStage> LoadMixFromProfile(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex); // Function AudioModulation.AudioModulationStatics.LoadMixFromProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8860
	void DeactivateGenerator(struct UObject* WorldContextObject, struct USoundModulationGenerator* Generator); // Function AudioModulation.AudioModulationStatics.DeactivateGenerator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8680
	void DeactivateBusMix(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix); // Function AudioModulation.AudioModulationStatics.DeactivateBusMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df85b4
	void DeactivateBus(struct UObject* WorldContextObject, struct USoundControlBus* Bus); // Function AudioModulation.AudioModulationStatics.DeactivateBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df84e8
	struct FSoundControlBusMixStage CreateBusMixStage(struct UObject* WorldContextObject, struct USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime); // Function AudioModulation.AudioModulationStatics.CreateBusMixStage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df82e0
	struct USoundControlBusMix* CreateBusMix(struct UObject* WorldContextObject, struct FName Name, struct TArray<struct FSoundControlBusMixStage> Stages, bool Activate); // Function AudioModulation.AudioModulationStatics.CreateBusMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df814c
	struct USoundControlBus* CreateBus(struct UObject* WorldContextObject, struct FName Name, struct USoundModulationParameter* Parameter, bool Activate); // Function AudioModulation.AudioModulationStatics.CreateBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df8014
	void ClearGlobalBusMixValue(struct UObject* WorldContextObject, struct USoundControlBus* Bus, float FadeTime); // Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df7ef0
	void ClearAllGlobalBusMixValues(struct UObject* WorldContextObject, float FadeTime); // Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df7e38
	void ActivateGenerator(struct UObject* WorldContextObject, struct USoundModulationGenerator* Generator); // Function AudioModulation.AudioModulationStatics.ActivateGenerator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df7d58
	void ActivateBusMix(struct UObject* WorldContextObject, struct USoundControlBusMix* Mix); // Function AudioModulation.AudioModulationStatics.ActivateBusMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df7c8c
	void ActivateBus(struct UObject* WorldContextObject, struct USoundControlBus* Bus); // Function AudioModulation.AudioModulationStatics.ActivateBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6df7bc0
};

// Class AudioModulation.SoundModulationGenerator
// Size: 0x30 (Inherited: 0x30)
struct USoundModulationGenerator : USoundModulatorBase {
};

// Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
// Size: 0x50 (Inherited: 0x30)
struct USoundModulationGeneratorEnvelopeFollower : USoundModulationGenerator {
	struct FEnvelopeFollowerGeneratorParams Params; // 0x30(0x20)
};

// Class AudioModulation.SoundModulationGeneratorLFO
// Size: 0x48 (Inherited: 0x30)
struct USoundModulationGeneratorLFO : USoundModulationGenerator {
	struct FSoundModulationLFOParams Params; // 0x30(0x14)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AudioModulation.SoundControlBus
// Size: 0x60 (Inherited: 0x30)
struct USoundControlBus : USoundModulatorBase {
	bool bBypass; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Address; // 0x38(0x10)
	struct TArray<struct USoundModulationGenerator*> Generators; // 0x48(0x10)
	struct USoundModulationParameter* Parameter; // 0x58(0x08)
};

// Class AudioModulation.SoundControlBusMix
// Size: 0x40 (Inherited: 0x28)
struct USoundControlBusMix : UObject {
	uint32_t ProfileIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FSoundControlBusMixStage> MixStages; // 0x30(0x10)

	void SoloMix(); // Function AudioModulation.SoundControlBusMix.SoloMix // (Final|Native|Protected) // @ game+0x6df8cec
	void SaveMixToProfile(); // Function AudioModulation.SoundControlBusMix.SaveMixToProfile // (Final|Native|Protected) // @ game+0x6df8b64
	void LoadMixFromProfile(); // Function AudioModulation.SoundControlBusMix.LoadMixFromProfile // (Final|Native|Protected) // @ game+0x6df8a38
	void DeactivateMix(); // Function AudioModulation.SoundControlBusMix.DeactivateMix // (Final|Native|Protected) // @ game+0x6df8784
	void DeactivateAllMixes(); // Function AudioModulation.SoundControlBusMix.DeactivateAllMixes // (Final|Native|Protected) // @ game+0x6df84ac
	void ActivateMix(); // Function AudioModulation.SoundControlBusMix.ActivateMix // (Final|Native|Protected) // @ game+0x6df7e24
};

// Class AudioModulation.SoundModulationParameter
// Size: 0x38 (Inherited: 0x28)
struct USoundModulationParameter : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FSoundModulationParameterSettings Settings; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AudioModulation.SoundModulationParameterScaled
// Size: 0x40 (Inherited: 0x38)
struct USoundModulationParameterScaled : USoundModulationParameter {
	float UnitMin; // 0x38(0x04)
	float UnitMax; // 0x3c(0x04)
};

// Class AudioModulation.SoundModulationParameterFrequencyBase
// Size: 0x38 (Inherited: 0x38)
struct USoundModulationParameterFrequencyBase : USoundModulationParameter {
};

// Class AudioModulation.SoundModulationParameterFrequency
// Size: 0x40 (Inherited: 0x38)
struct USoundModulationParameterFrequency : USoundModulationParameterFrequencyBase {
	float UnitMin; // 0x38(0x04)
	float UnitMax; // 0x3c(0x04)
};

// Class AudioModulation.SoundModulationParameterFilterFrequency
// Size: 0x38 (Inherited: 0x38)
struct USoundModulationParameterFilterFrequency : USoundModulationParameterFrequencyBase {
};

// Class AudioModulation.SoundModulationParameterLPFFrequency
// Size: 0x38 (Inherited: 0x38)
struct USoundModulationParameterLPFFrequency : USoundModulationParameterFilterFrequency {
};

// Class AudioModulation.SoundModulationParameterHPFFrequency
// Size: 0x38 (Inherited: 0x38)
struct USoundModulationParameterHPFFrequency : USoundModulationParameterFilterFrequency {
};

// Class AudioModulation.SoundModulationParameterBipolar
// Size: 0x40 (Inherited: 0x38)
struct USoundModulationParameterBipolar : USoundModulationParameter {
	float UnitRange; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioModulation.SoundModulationParameterVolume
// Size: 0x40 (Inherited: 0x38)
struct USoundModulationParameterVolume : USoundModulationParameter {
	float MinVolume; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioModulation.SoundModulationPatch
// Size: 0x50 (Inherited: 0x30)
struct USoundModulationPatch : USoundModulatorBase {
	struct FSoundControlModulationPatch PatchSettings; // 0x30(0x20)
};

