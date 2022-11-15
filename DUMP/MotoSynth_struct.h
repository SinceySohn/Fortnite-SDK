// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size: 0x138 (Inherited: 0x00)
struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D SynthToneVolumeRange; // 0x08(0x10)
	struct FVector2D SynthToneFilterFrequencyRange; // 0x18(0x10)
	bool bSynthToneEnvelopeEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FVector2D SynthToneAttackTimeMsecRange; // 0x30(0x10)
	struct FVector2D SynthToneAttackCurveRange; // 0x40(0x10)
	struct FVector2D SynthToneDecayTimeMsecRange; // 0x50(0x10)
	struct FVector2D SynthToneDecayCurveRange; // 0x60(0x10)
	int32_t SynthOctaveShift; // 0x70(0x04)
	bool bNoiseEnabled; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D NoiseVolumeRange; // 0x78(0x10)
	bool bNoiseEnvelopeEnabled; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FVector2D NoiseLPFRange; // 0x90(0x10)
	struct FVector2D NoiseAttackTimeMsecRange; // 0xa0(0x10)
	struct FVector2D NoiseAttackCurveRange; // 0xb0(0x10)
	struct FVector2D NoiseDecayTimeMsecRange; // 0xc0(0x10)
	struct FVector2D NoiseDecayCurveRange; // 0xd0(0x10)
	bool bGranularEngineEnabled; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float GranularEngineVolume; // 0xe4(0x04)
	float GranularEnginePitchScale; // 0xe8(0x04)
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0xec(0x04)
	int32_t NumGrainTableEntriesPerGrain; // 0xf0(0x04)
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0xf4(0x04)
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UMotoSynthSource* AccelerationSource; // 0x100(0x08)
	struct UMotoSynthSource* DecelerationSource; // 0x108(0x08)
	bool bStereoWidenerEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float StereoDelayMsec; // 0x114(0x04)
	float StereoFeedback; // 0x118(0x04)
	float StereoWidenerWetlevel; // 0x11c(0x04)
	float StereoWidenerDryLevel; // 0x120(0x04)
	float StereoWidenerDelayRatio; // 0x124(0x04)
	bool bStereoWidenerFilterEnabled; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float StereoWidenerFilterFrequency; // 0x12c(0x04)
	float StereoWidenerFilterQ; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct MotoSynth.GrainTableEntry
// Size: 0x08 (Inherited: 0x00)
struct FGrainTableEntry {
	int32_t SampleIndex; // 0x00(0x04)
	float RPM; // 0x04(0x04)
};

