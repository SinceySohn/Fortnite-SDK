// WidgetBlueprintGeneratedClass AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C
// Size: 0x434 (Inherited: 0x3e0)
struct UAthenaMOTDSimpleNewsWidget_C : UFortAthenaMOTDSimpleNewsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Intro; // 0x3e8(0x08)
	struct UImage* Backplate; // 0x3f0(0x08)
	struct UImage* GlowBackground; // 0x3f8(0x08)
	struct UImage* Image_Background; // 0x400(0x08)
	struct UImage* Image_Border; // 0x408(0x08)
	struct UImage* Image_ColorFade; // 0x410(0x08)
	struct USizeBox* SizeBoxButtonSize; // 0x418(0x08)
	struct FColor DarkDefaultColor; // 0x420(0x04)
	struct FColor LightDefaultColor; // 0x424(0x04)
	struct FColor PreviewDarkColor; // 0x428(0x04)
	bool TestPreviewColors; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct FColor PreviewLightColor; // 0x430(0x04)

	void SetDynamicColors(struct FColor Dark, struct FColor Light); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.SetDynamicColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPopulateNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32_t EntryPoint); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.ExecuteUbergraph_AthenaMOTDSimpleNewsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

