// WidgetBlueprintGeneratedClass ProgressiveSetList.ProgressiveSetList_C
// Size: 0x438 (Inherited: 0x428)
struct UProgressiveSetList_C : UFortProgressiveSetList {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UFortDynamicEntryBox* EntryBox_SetTiles; // 0x430(0x08)

	struct UFortProgressiveSetTile* AddSetTile(); // Function ProgressiveSetList.ProgressiveSetList_C.AddSetTile // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearSetTiles(); // Function ProgressiveSetList.ProgressiveSetList_C.ClearSetTiles // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveSetList(int32_t EntryPoint); // Function ProgressiveSetList.ProgressiveSetList_C.ExecuteUbergraph_ProgressiveSetList // (Final|UbergraphFunction) // @ game+0xdef49c
};

