// BlueprintGeneratedClass B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C
// Size: 0x10e0 (Inherited: 0x1039)
struct AB_SupplyDropRadio_Handheld_Item_C : AB_UtilityItem_Generic_Athena_C {
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UNonPlayerConversationComponent_C* NonPlayerConversationComponent; // 0x1048(0x08)
	struct ABP_SupplyDropRadioFlareActor_C* FlareActor; // 0x1050(0x08)
	bool bFlareThrown; // 0x1058(0x01)
	char pad_1059[0x7]; // 0x1059(0x07)
	struct FVector ServerThrowStartRelativeLocation; // 0x1060(0x18)
	struct FScalableFloat FlareThrowForwardDistance; // 0x1078(0x28)
	struct FScalableFloat FlareThrowSpeed; // 0x10a0(0x28)
	struct FVector ServerThrowStartRelativeLocationCrouched; // 0x10c8(0x18)

	void GetFlareActor(struct ABP_SupplyDropRadioFlareActor_C*& FlareActor); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.GetFlareActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ThrowFlare(); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.ThrowFlare // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PopFlare(); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.PopFlare // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_SupplyDropRadio_Handheld_Item(int32_t EntryPoint); // Function B_SupplyDropRadio_Handheld_Item.B_SupplyDropRadio_Handheld_Item_C.ExecuteUbergraph_B_SupplyDropRadio_Handheld_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

