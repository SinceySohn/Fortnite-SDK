// WidgetBlueprintGeneratedClass FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C
// Size: 0x2d8 (Inherited: 0x2a0)
struct UFortAutoRunNotificationWidget_C : UFortAutoRunNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* Outro; // 0x2a8(0x08)
	struct UWidgetAnimation* Intro; // 0x2b0(0x08)
	struct UFortLazyImage* Image_Background; // 0x2b8(0x08)
	struct UImage* Image_Run; // 0x2c0(0x08)
	struct UOverlay* ; // 0x2c8(0x08)
	struct UCommonTextBlock* Text; // 0x2d0(0x08)

	void OnAutoRunEnabled(bool bAutoRunEnabled); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.OnAutoRunEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortAutoRunNotificationWidget(int32_t EntryPoint); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.ExecuteUbergraph_FortAutoRunNotificationWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

