// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// Size: 0x288 (Inherited: 0x268)
struct UWB_AudioAnalysis_UI_C : UFortAudioAnalysisDebugWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UVerticalBox* GraphBox; // 0x270(0x08)
	struct TArray<struct UWB_AudioAnalysis_FloatGraph_C*> Widgets; // 0x278(0x10)

	void AddScalarParameter(struct FAudioAnalysisParameterScalar& Param); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AddVectorParameter(struct FAudioAnalysisParameterVector& Param); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ClearParameters(); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

