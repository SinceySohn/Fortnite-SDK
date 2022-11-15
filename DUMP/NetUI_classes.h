// Class NetUI.BadNetworkIndicator
// Size: 0x300 (Inherited: 0x2d0)
struct UBadNetworkIndicator : UFortHUDElementWidget {
	bool bEnabled; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MinimumDisplayTime; // 0x2d4(0x04)
	float UpdateTime; // 0x2d8(0x04)
	float InitialDelay; // 0x2dc(0x04)
	char pad_2E0[0x20]; // 0x2e0(0x20)

	void UpdateDisplay(); // Function NetUI.BadNetworkIndicator.UpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDisplay(); // Function NetUI.BadNetworkIndicator.ShouldDisplay // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1fb4
	bool HasSeverePing(); // Function NetUI.BadNetworkIndicator.HasSeverePing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1f90
	bool HasSeverePacketLoss(); // Function NetUI.BadNetworkIndicator.HasSeverePacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1f6c
	bool HasBadPing(); // Function NetUI.BadNetworkIndicator.HasBadPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1f48
	bool HasBadPacketLoss(); // Function NetUI.BadNetworkIndicator.HasBadPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1f24
	float GetPing(); // Function NetUI.BadNetworkIndicator.GetPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1efc
	float GetPacketLoss(); // Function NetUI.BadNetworkIndicator.GetPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fe1ed4
};

// Class NetUI.NetDebugWidget
// Size: 0x350 (Inherited: 0x268)
struct UNetDebugWidget : UUserWidget {
	struct UCommonTextBlock* PingUI; // 0x268(0x08)
	struct UCommonTextBlock* PacketInRateUI; // 0x270(0x08)
	struct UCommonTextBlock* PacketOutRateUI; // 0x278(0x08)
	struct UCommonTextBlock* PacketInLossUI; // 0x280(0x08)
	struct UCommonTextBlock* PacketOutLossUI; // 0x288(0x08)
	struct UCommonTextBlock* UpBandwidthUI; // 0x290(0x08)
	struct UCommonTextBlock* DownBandwidthUI; // 0x298(0x08)
	char pad_2A0[0xb0]; // 0x2a0(0xb0)

	void StopTimer(); // Function NetUI.NetDebugWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x29e0e04
	void StartTimer(); // Function NetUI.NetDebugWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x6fe1fd8
};

// Class NetUI.NetGraph
// Size: 0x2a0 (Inherited: 0x268)
struct UNetGraph : UUserWidget {
	struct FColor BackgroundColor; // 0x268(0x04)
	struct FColor PingLineColor; // 0x26c(0x04)
	struct FColor QueuedBunchesLineColor; // 0x270(0x04)
	struct FColor PacketLossLineColor; // 0x274(0x04)
	struct FVector2D DesiredSize; // 0x278(0x10)
	float MaxPingToGraph; // 0x288(0x04)
	char pad_28C[0x14]; // 0x28c(0x14)
};

