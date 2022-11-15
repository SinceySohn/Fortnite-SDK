// WidgetBlueprintGeneratedClass PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C
// Size: 0x1400 (Inherited: 0x13f0)
struct UPlayerSurveyRatingChoice_C : UFortPlayerSurveyRatingChoiceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13f0(0x08)
	struct UCommonActionWidget* InputActionWidget_Select; // 0x13f8(0x08)

	void GetCurrentButtonBrush(struct FSlateBrush& CurrentBrush); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateInputActionRenderOpacity(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTextStyle(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSurveyResetChoice(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnSurveyResetChoice // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerSurveyRatingChoice(int32_t EntryPoint); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice // (Final|UbergraphFunction) // @ game+0xdef49c
};

