// BlueprintGeneratedClass Tiered_Ammo_Athena.Tiered_Ammo_Athena_C
// Size: 0x1178 (Inherited: 0x10d8)
struct ATiered_Ammo_Athena_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d8(0x08)
	float Timeline_0_Time_5E13C6E9491F8EDA37F94EA9AA8C75B8; // 0x10e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5E13C6E9491F8EDA37F94EA9AA8C75B8; // 0x10e4(0x01)
	char pad_10E5[0x3]; // 0x10e5(0x03)
	struct UTimelineComponent* ; // 0x10e8(0x08)
	float MobileSelectedTL_LerpInteactoIcon_A5A509274549841DD24AFF8F04042949; // 0x10f0(0x04)
	float MobileSelectedTL_LerpObject_A5A509274549841DD24AFF8F04042949; // 0x10f4(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_A5A509274549841DD24AFF8F04042949; // 0x10f8(0x01)
	char pad_10F9[0x7]; // 0x10f9(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0x1100(0x08)
	struct UMaterialInterface* MobileInteractionMaterial; // 0x1108(0x08)
	struct UStaticMeshComponent* MobileInteractIcon; // 0x1110(0x08)
	struct FVector MobileInteractIconLocation; // 0x1118(0x18)
	struct FVector MobileInteractIconScale; // 0x1130(0x18)
	struct UParticleSystem* FX_Open; // 0x1148(0x08)
	double FX_OpenPitchOffset; // 0x1150(0x08)
	struct FVector FX_OpenOffsetLocation; // 0x1158(0x18)
	struct USoundBase* Sound_Open; // 0x1170(0x08)

	bool ShouldInvisiblePropsBeAllowed(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.ShouldInvisiblePropsBeAllowed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool IsTargetableByLinearMover(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.IsTargetableByLinearMover // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void SetVisibleMobileInteractIcon(bool Visible); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__FinishedFunc(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void MobileSelectedTL__UpdateFunc(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void EnableBacchusHighlight(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DisableBacchusHighlight(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginSearch(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.OnBeginSearch // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tiered_Ammo_Athena(int32_t EntryPoint); // Function Tiered_Ammo_Athena.Tiered_Ammo_Athena_C.ExecuteUbergraph_Tiered_Ammo_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

