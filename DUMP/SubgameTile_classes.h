// WidgetBlueprintGeneratedClass SubgameTile.SubgameTile_C
// Size: 0x1598 (Inherited: 0x1560)
struct USubgameTile_C : UFortSubgameTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1560(0x08)
	struct UWidgetAnimation* RevealCMSKeyArt; // 0x1568(0x08)
	struct UWidgetAnimation* UnFocused; // 0x1570(0x08)
	struct UWidgetAnimation* FocusedSecondary; // 0x1578(0x08)
	struct UWidgetAnimation* Focused; // 0x1580(0x08)
	struct UImage* FocusPulse; // 0x1588(0x08)
	struct UMaterialInstanceDynamic* PulseMID; // 0x1590(0x08)

	void PreConstruct(bool IsDesignTime); // Function SubgameTile.SubgameTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SubgameTile.SubgameTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SubgameTile.SubgameTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SubgameTile.SubgameTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SubgameTile(int32_t EntryPoint); // Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile // (Final|UbergraphFunction) // @ game+0xdef49c
};

