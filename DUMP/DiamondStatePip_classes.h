// WidgetBlueprintGeneratedClass DiamondStatePip.DiamondStatePip_C
// Size: 0x2b2 (Inherited: 0x290)
struct UDiamondStatePip_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Selection; // 0x298(0x08)
	struct UImage* PIP; // 0x2a0(0x08)
	struct UImage* Pip_Outline; // 0x2a8(0x08)
	bool Is Hovered; // 0x2b0(0x01)
	bool Is Selected; // 0x2b1(0x01)

	void ResetState(); // Function DiamondStatePip.DiamondStatePip_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function DiamondStatePip.DiamondStatePip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetSelectedState(bool IsSelected); // Function DiamondStatePip.DiamondStatePip_C.SetSelectedState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHoverState(bool IsHovered); // Function DiamondStatePip.DiamondStatePip_C.SetHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_DiamondStatePip(int32_t EntryPoint); // Function DiamondStatePip.DiamondStatePip_C.ExecuteUbergraph_DiamondStatePip // (Final|UbergraphFunction) // @ game+0xdef49c
};

