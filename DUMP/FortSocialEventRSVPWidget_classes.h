// WidgetBlueprintGeneratedClass FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
// Size: 0x291 (Inherited: 0x268)
struct UFortSocialEventRSVPWidget_C : UFortSocialEventRSVPWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UOverlay* Overlay_AdditionalEvents; // 0x270(0x08)
	struct UCommonTextBlock* Text_AdditionalEvents; // 0x278(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x280(0x08)
	struct UCommonTextBlock* Text_MonthDay; // 0x288(0x08)
	enum class ESlateVisibility In Visibility; // 0x290(0x01)

	void Construct(); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRefreshDisplay(struct FText& EventName, struct FText& Date, struct FText& AdditionalEvents); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortSocialEventRSVPWidget(int32_t EntryPoint); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

