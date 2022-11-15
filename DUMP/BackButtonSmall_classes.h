// WidgetBlueprintGeneratedClass BackButtonSmall.BackButtonSmall_C
// Size: 0x1408 (Inherited: 0x13e0)
struct UBackButtonSmall_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x13e8(0x08)
	struct UCommonActionWidget* ; // 0x13f0(0x08)
	struct UHorizontalBox* ; // 0x13f8(0x08)
	struct UFortMobileImage* Image_Arrow; // 0x1400(0x08)

	void OnInitialized(); // Function BackButtonSmall.BackButtonSmall_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BackButtonSmall(int32_t EntryPoint); // Function BackButtonSmall.BackButtonSmall_C.ExecuteUbergraph_BackButtonSmall // (Final|UbergraphFunction) // @ game+0xdef49c
};

