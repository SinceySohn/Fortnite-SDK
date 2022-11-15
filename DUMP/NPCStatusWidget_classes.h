// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// Size: 0x3a8 (Inherited: 0x340)
struct UNPCStatusWidget_C : UNPCStatusWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Health; // 0x348(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Shield; // 0x350(0x08)
	struct UOverlay* Overlay_BarsPrefix; // 0x358(0x08)
	struct UVerticalBox* VerticalBox_BarExtensions; // 0x360(0x08)
	struct FTimerHandle VisibiltyTimer; // 0x368(0x08)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x370(0x10)
	double StatusWidgetVisibleDuration; // 0x380(0x08)
	double CurrentHealthPercent; // 0x388(0x08)
	double CurrentShieldPercent; // 0x390(0x08)
	bool KeepVisibilityOn; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct AFortPawn* FortPawn; // 0x3a0(0x08)

	void EventUpdateStatus(double Health, double Shield, bool ShowShield); // Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventHideStatus(); // Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration); // Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetKeepVisibilityOn(bool KeepVisibilityOn); // Function NPCStatusWidget.NPCStatusWidget_C.SetKeepVisibilityOn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryCallEventHideByTimer(); // Function NPCStatusWidget.NPCStatusWidget_C.TryCallEventHideByTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_HandlePlaylistExtensionWidgetCreated(struct UUserWidget* Widget, enum class EUIExtensionSlot SlotType); // Function NPCStatusWidget.NPCStatusWidget_C.BP_HandlePlaylistExtensionWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function NPCStatusWidget.NPCStatusWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnFocused(); // Function NPCStatusWidget.NPCStatusWidget_C.OnPawnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPCStatusWidget(int32_t EntryPoint); // Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void VisibilityChanged__DelegateSignature(bool bVisible); // Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

