// Class LatencyUI.LatencyGraph
// Size: 0x2b0 (Inherited: 0x268)
struct ULatencyGraph : UUserWidget {
	struct FColor TotalLatencyLineColor; // 0x268(0x04)
	struct FColor GameLatencyLineColor; // 0x26c(0x04)
	struct FColor RenderLatencyLineColor; // 0x270(0x04)
	struct FColor DriverLatencyLineColor; // 0x274(0x04)
	struct FColor OSWorkQueueLatencyLineColor; // 0x278(0x04)
	struct FColor GPURenderLatencyLineColor; // 0x27c(0x04)
	struct FColor BackgroundColor; // 0x280(0x04)
	float MaxLatencyToGraph; // 0x284(0x04)
	struct FVector2D DesiredSize; // 0x288(0x10)
	char pad_298[0x18]; // 0x298(0x18)
};

// Class LatencyUI.LatencyWidget
// Size: 0x360 (Inherited: 0x268)
struct ULatencyWidget : UUserWidget {
	char pad_268[0x8]; // 0x268(0x08)
	struct UCommonTextBlock* TotalLatencyUI; // 0x270(0x08)
	struct UCommonTextBlock* GameLatencyUI; // 0x278(0x08)
	struct UCommonTextBlock* RenderLatencyUI; // 0x280(0x08)
	struct UCommonTextBlock* OSWorkLatencyUI; // 0x288(0x08)
	struct UCommonTextBlock* DriverLatencyUI; // 0x290(0x08)
	struct UCommonTextBlock* GPURenderLatencyUI; // 0x298(0x08)
	struct UCommonTextBlock* TweakLatencyUI; // 0x2a0(0x08)
	char pad_2A8[0xb8]; // 0x2a8(0xb8)

	void StopTimer(); // Function LatencyUI.LatencyWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x71fde60
	void StartTimer(); // Function LatencyUI.LatencyWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x71fde48
};

