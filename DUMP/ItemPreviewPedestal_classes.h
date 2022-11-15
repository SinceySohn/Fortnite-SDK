// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
// Size: 0x4f9 (Inherited: 0x4f0)
struct AItemPreviewPedestal_C : AFortCameraTargetPedestal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	bool Floor Enabled; // 0x4f8(0x01)

	void Remove Floor(struct AFortItemPreviewActor* Preview); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnItemDisplayed(enum class EFortItemType ItemType); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemPreviewPedestal(int32_t EntryPoint); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal // (Final|UbergraphFunction) // @ game+0xdef49c
};

