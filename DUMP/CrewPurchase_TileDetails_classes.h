// WidgetBlueprintGeneratedClass CrewPurchase_TileDetails.CrewPurchase_TileDetails_C
// Size: 0x2f1 (Inherited: 0x2d8)
struct UCrewPurchase_TileDetails_C : UCrewTileDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* Intro; // 0x2e0(0x08)
	struct USpacer* Spacer_LocShim; // 0x2e8(0x08)
	bool DevTestLoc; // 0x2f0(0x01)

	void EventIntro(); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CrewPurchase_TileDetails(int32_t EntryPoint); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.ExecuteUbergraph_CrewPurchase_TileDetails // (Final|UbergraphFunction) // @ game+0xdef49c
};

