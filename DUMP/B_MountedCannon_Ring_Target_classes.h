// BlueprintGeneratedClass B_MountedCannon_Ring_Target.B_MountedCannon_Ring_Target_C
// Size: 0x2a8 (Inherited: 0x288)
struct AB_MountedCannon_Ring_Target_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetComponent* Widget; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UW_MountedCannon_PingTarget_Ring_C* RingWidget; // 0x2a0(0x08)

	void SetColor(struct FLinearColor InColor); // Function B_MountedCannon_Ring_Target.B_MountedCannon_Ring_Target_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSize(double Size); // Function B_MountedCannon_Ring_Target.B_MountedCannon_Ring_Target_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_MountedCannon_Ring_Target.B_MountedCannon_Ring_Target_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_MountedCannon_Ring_Target(int32_t EntryPoint); // Function B_MountedCannon_Ring_Target.B_MountedCannon_Ring_Target_C.ExecuteUbergraph_B_MountedCannon_Ring_Target // (Final|UbergraphFunction) // @ game+0xdef49c
};

