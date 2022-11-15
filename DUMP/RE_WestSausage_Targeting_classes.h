// WidgetBlueprintGeneratedClass RE_WestSausage_Targeting.RE_WestSausage_Targeting_C
// Size: 0x302 (Inherited: 0x290)
struct URE_WestSausage_Targeting_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* ; // 0x298(0x08)
	struct UOverlay* Overlay_LockedOn; // 0x2a0(0x08)
	struct UOverlay* Reticle; // 0x2a8(0x08)
	struct ULockedOnReticleWidget_C* Reticle_LockedOn; // 0x2b0(0x08)
	struct UWrapBox* ; // 0x2b8(0x08)
	struct FVector TargetPosition; // 0x2c0(0x18)
	bool Locked On; // 0x2d8(0x01)
	bool Attached; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct AActor* Player; // 0x2e0(0x08)
	bool Cached_AboverOverloadThreshold; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FVector2D PosInViewport; // 0x2f0(0x10)
	bool Cast Hit Something; // 0x300(0x01)
	bool AbleToUse; // 0x301(0x01)

	void UpdateChargeCircle(double Scale X); // Function RE_WestSausage_Targeting.RE_WestSausage_Targeting_C.UpdateChargeCircle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RE_WestSausage_Targeting(int32_t EntryPoint); // Function RE_WestSausage_Targeting.RE_WestSausage_Targeting_C.ExecuteUbergraph_RE_WestSausage_Targeting // (Final|UbergraphFunction) // @ game+0xdef49c
};

