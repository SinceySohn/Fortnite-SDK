// WidgetBlueprintGeneratedClass ProgressiveStageListView.ProgressiveStageListView_C
// Size: 0x418 (Inherited: 0x3f8)
struct UProgressiveStageListView_C : UFortProgressiveStageList {
	struct UProgressiveStageWidget_C* ProgressiveStageList; // 0x3f8(0x08)
	struct UProgressiveStageWidget_C* ; // 0x400(0x08)
	struct UProgressiveStageWidget_C* ; // 0x408(0x08)
	struct UVerticalBox* VBox_StagesContainer; // 0x410(0x08)

	struct UWidget* On Stage Widget Custom Boundary(enum class EUINavigation Navigation); // Function ProgressiveStageListView.ProgressiveStageListView_C.On Stage Widget Custom Boundary // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Subscribed Visuals(bool Is Subscribed); // Function ProgressiveStageListView.ProgressiveStageListView_C.Update Subscribed Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearStageWidgets(); // Function ProgressiveStageListView.ProgressiveStageListView_C.ClearStageWidgets // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UFortProgressiveStageWidget* AddStageWidget(); // Function ProgressiveStageListView.ProgressiveStageListView_C.AddStageWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

