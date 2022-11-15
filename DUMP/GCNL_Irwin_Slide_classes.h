// BlueprintGeneratedClass GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
// Size: 0x978 (Inherited: 0x960)
struct AGCNL_Irwin_Slide_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct USoundBase* SlideSound; // 0x968(0x08)
	struct UAudioComponent* SlidingSoundComponent; // 0x970(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint); // Function GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.ExecuteUbergraph_GCNL_Irwin_Slide // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

