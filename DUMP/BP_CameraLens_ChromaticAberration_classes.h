// BlueprintGeneratedClass BP_CameraLens_ChromaticAberration.BP_CameraLens_ChromaticAberration_C
// Size: 0x3b0 (Inherited: 0x370)
struct ABP_CameraLens_ChromaticAberration_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UNiagaraComponent* NS_ChromePlayer_Blob_CameraVFX; // 0x378(0x08)
	struct UPostProcessComponent* PostProcess_MotionBlur; // 0x380(0x08)
	struct UPostProcessComponent* PostProcess; // 0x388(0x08)
	float Time_NewTrack_1_0BA12E3F4879AACEB76DBF92A53D1C1C; // 0x390(0x04)
	float Time_NewTrack_0_0BA12E3F4879AACEB76DBF92A53D1C1C; // 0x394(0x04)
	enum class ETimelineDirection Time__Direction_0BA12E3F4879AACEB76DBF92A53D1C1C; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UTimelineComponent* Time; // 0x3a0(0x08)
	struct UMaterialInstanceDynamic* DM; // 0x3a8(0x08)

	void Time__FinishedFunc(); // Function BP_CameraLens_ChromaticAberration.BP_CameraLens_ChromaticAberration_C.Time__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Time__UpdateFunc(); // Function BP_CameraLens_ChromaticAberration.BP_CameraLens_ChromaticAberration_C.Time__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_CameraLens_ChromaticAberration.BP_CameraLens_ChromaticAberration_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_CameraLens_ChromaticAberration(int32_t EntryPoint); // Function BP_CameraLens_ChromaticAberration.BP_CameraLens_ChromaticAberration_C.ExecuteUbergraph_BP_CameraLens_ChromaticAberration // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

