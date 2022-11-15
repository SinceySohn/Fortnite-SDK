// WidgetBlueprintGeneratedClass SiderbarSupervisedSettingsTooltip.SiderbarSupervisedSettingsTooltip_C
// Size: 0x440 (Inherited: 0x408)
struct USiderbarSupervisedSettingsTooltip_C : UFortSidebarOnboardTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Outro; // 0x410(0x08)
	struct UWidgetAnimation* Pulse; // 0x418(0x08)
	struct UCommonRichTextBlock* ; // 0x420(0x08)
	struct UCommonRichTextBlock* ; // 0x428(0x08)
	struct UImage* Image_Arrow; // 0x430(0x08)
	struct UImage* ImageBurst; // 0x438(0x08)

	void Finished_9A4EF2E647B5B62CF2E0AA8CDBD2E514(); // Function SiderbarSupervisedSettingsTooltip.SiderbarSupervisedSettingsTooltip_C.Finished_9A4EF2E647B5B62CF2E0AA8CDBD2E514 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnShowTooltip(); // Function SiderbarSupervisedSettingsTooltip.SiderbarSupervisedSettingsTooltip_C.OnShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEndTooltip(); // Function SiderbarSupervisedSettingsTooltip.SiderbarSupervisedSettingsTooltip_C.OnEndTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SiderbarSupervisedSettingsTooltip(int32_t EntryPoint); // Function SiderbarSupervisedSettingsTooltip.SiderbarSupervisedSettingsTooltip_C.ExecuteUbergraph_SiderbarSupervisedSettingsTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

