// WidgetBlueprintGeneratedClass Athena_ProgressModal.Athena_ProgressModal_C
// Size: 0x3f0 (Inherited: 0x3b8)
struct UAthena_ProgressModal_C : UAthenaProgressModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* Intro; // 0x3c0(0x08)
	struct UImage* ; // 0x3c8(0x08)
	struct UImage* Image_Separator_Down; // 0x3d0(0x08)
	struct UImage* Image_Separator_Up; // 0x3d8(0x08)
	struct ULightbox_C* Lightbox; // 0x3e0(0x08)
	struct UImage* ProgressSpinner; // 0x3e8(0x08)

	void BP_OnActivated(); // Function Athena_ProgressModal.Athena_ProgressModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_ProgressModal(int32_t EntryPoint); // Function Athena_ProgressModal.Athena_ProgressModal_C.ExecuteUbergraph_Athena_ProgressModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

