// WidgetBlueprintGeneratedClass SoloButton_ViewQuest.SoloButton_ViewQuest_C
// Size: 0x1490 (Inherited: 0x1440)
struct USoloButton_ViewQuest_C : UFortAthenaViewQuestsButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* ViewQuest_Hover; // 0x1448(0x08)
	struct UWidgetAnimation* NewQuestPulse_Pressed; // 0x1450(0x08)
	struct UWidgetAnimation* NewQuestPulse_Hover; // 0x1458(0x08)
	struct UWidgetAnimation* NewQuestPulse; // 0x1460(0x08)
	struct UImage* ButtonBacking; // 0x1468(0x08)
	struct UImage* Image_NewQuestBorder; // 0x1470(0x08)
	struct UScaleBox* InputActionIconScale; // 0x1478(0x08)
	struct UImage* Pulse; // 0x1480(0x08)
	struct UCommonTextBlock* ViewQuestText; // 0x1488(0x08)

	void UpdateInputActionIconScale(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.UpdateInputActionIconScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleUnseenQuestsChanged(bool bHasUnseenQuests); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.HandleUnseenQuestsChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SoloButton_ViewQuest(int32_t EntryPoint); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.ExecuteUbergraph_SoloButton_ViewQuest // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

