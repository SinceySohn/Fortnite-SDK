// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
// Size: 0x2b0 (Inherited: 0x268)
struct UErrorLlama_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* ; // 0x270(0x08)
	struct UMaterialInstanceDynamic* MID_Llama; // 0x278(0x08)
	bool bFlippedTexture; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FVector2D CurLookAt2D; // 0x288(0x10)
	enum class ECommonInputType CurInputType; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	double EyeInterpSpeed; // 0x2a0(0x08)
	double MaterialInputScale; // 0x2a8(0x08)

	void HandleInputTypeChanged(enum class ECommonInputType NewInputType); // Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ErrorLlama.ErrorLlama_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ErrorLlama.ErrorLlama_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RandomizeColor(); // Function ErrorLlama.ErrorLlama_C.RandomizeColor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleNormalizedInputDirection(struct FVector2D 2DInputVec); // Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ErrorLlama(int32_t EntryPoint); // Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

