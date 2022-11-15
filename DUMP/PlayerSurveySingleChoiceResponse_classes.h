// WidgetBlueprintGeneratedClass PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
// Size: 0x438 (Inherited: 0x3f8)
struct UPlayerSurveySingleChoiceResponse_C : UFortPlayerSurveySingleChoiceResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UOverlay* Overlay_OrthogonalIndicator; // 0x400(0x08)
	struct UOverlay* Overlay_VerticalIndicator; // 0x408(0x08)
	struct UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x410(0x08)
	struct UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x418(0x08)
	struct USizeBox* SizeBox_Responses; // 0x420(0x08)
	double BaseColumnWidth; // 0x428(0x08)
	double AdditionalColumnWidth; // 0x430(0x08)

	void SetNumberOfResponses(int32_t NumberOfResponses); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.SetNumberOfResponses // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32_t EntryPoint); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.ExecuteUbergraph_PlayerSurveySingleChoiceResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

