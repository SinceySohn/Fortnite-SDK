// WidgetBlueprintGeneratedClass ContentOnDemand.ContentOnDemand_C
// Size: 0x390 (Inherited: 0x358)
struct UContentOnDemand_C : UFortContentOnDemand {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct UWidgetAnimation* Outro; // 0x368(0x08)
	struct UImage* Check; // 0x370(0x08)
	struct UCommonTextBlock* Text_Downloaded; // 0x378(0x08)
	struct UCommonTextBlock* Text_Downloading; // 0x380(0x08)
	int32_t LastNotifiedNumDownload; // 0x388(0x04)
	int32_t LastDisplayedNumDownload; // 0x38c(0x04)

	void OnUpdatedState(int32_t NumActiveDownloads, int32_t NumErrors); // Function ContentOnDemand.ContentOnDemand_C.OnUpdatedState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ContentOnDemand.ContentOnDemand_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ContentOnDemand(int32_t EntryPoint); // Function ContentOnDemand.ContentOnDemand_C.ExecuteUbergraph_ContentOnDemand // (Final|UbergraphFunction) // @ game+0xdef49c
};

