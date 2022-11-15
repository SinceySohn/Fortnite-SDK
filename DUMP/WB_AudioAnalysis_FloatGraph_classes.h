// WidgetBlueprintGeneratedClass WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
// Size: 0x2e8 (Inherited: 0x268)
struct UWB_AudioAnalysis_FloatGraph_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* ; // 0x270(0x08)
	struct UTextBlock* Label_; // 0x278(0x08)
	struct UProgressBar* ProgressBar; // 0x280(0x08)
	struct UTextBlock* Value; // 0x288(0x08)
	struct FVector2D Position; // 0x290(0x10)
	struct FVector2D Size; // 0x2a0(0x10)
	bool calculated; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FName Parameter; // 0x2b4(0x04)
	struct TArray<struct FVector2D> Points; // 0x2b8(0x10)
	int32_t numPoints; // 0x2c8(0x04)
	struct FLinearColor Color; // 0x2cc(0x10)
	int32_t VectorIndex; // 0x2dc(0x04)
	struct UMaterialParameterCollection* Collection; // 0x2e0(0x08)

	void OnPaint(struct FPaintContext& Context); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void calcWidgetSize(struct FGeometry geom); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Value(double Value); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Initialize MPC(struct FName Parameter, struct UMaterialParameterCollection* Collection, int32_t VectorIndex); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

