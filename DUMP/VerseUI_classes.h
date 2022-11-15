// VerseClass VerseUI.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseUI.player_ui
// Size: 0x108 (Inherited: 0xe8)
struct Uplayer_ui : UVersePlayerUIEntityComponent {
	VerseFunctionProperty __verse_0xBB4F7AF1__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nint_R; // 0xe8(0x10)
	VerseFunctionProperty __verse_0x6D7C39E6__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R; // 0xf8(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R(struct UWidget* __verse_0xB2CDDD72_Argument); // Function VerseUI.player_ui._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R // (Native|Public|BlueprintCallable) // @ game+0x63f453c
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nint_R(struct Ftuple_Lwidget_M_QZOrder_Nint_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseUI.player_ui._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x63f4534
	void $InitInstance(); // Function VerseUI.player_ui.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.player_ui.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.player_ui.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseUI.UI
// Size: 0x28 (Inherited: 0x28)
struct UUI : UObject {

	OptionProperty _L_2fEpicGames_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseUI.UI._L_2fEpicGames_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63f4584
	struct Fwidget_message widget_message$Factory(); // Function VerseUI.UI.widget_message$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Fstack_box_slot stack_box_slot$Factory(); // Function VerseUI.UI.stack_box_slot$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fbutton_slot button_slot$Factory(); // Function VerseUI.UI.button_slot$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fpositioned_sized_canvas_slot positioned_sized_canvas_slot$Factory(); // Function VerseUI.UI.positioned_sized_canvas_slot$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fpositioned_canvas_slot positioned_canvas_slot$Factory(); // Function VerseUI.UI.positioned_canvas_slot$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fcanvas_slot canvas_slot$Factory(); // Function VerseUI.UI.canvas_slot$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	struct Fmargin margin$Factory(); // Function VerseUI.UI.margin$Factory // (Static|HasOutParms) // @ game+0xdef49c
	struct Fanchors anchors$Factory(); // Function VerseUI.UI.anchors$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.UI.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseUI.Widget
// Size: 0x70 (Inherited: 0x30)
struct UWidget : UVerseWidgetNativeBase {
	char pad_30[0x10]; // 0x30(0x10)
	VerseFunctionProperty __verse_0xF12B4CC9__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	VerseFunctionProperty __verse_0xA7AA54A3__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled; // 0x60(0x10)
	VerseFunctionProperty __verse_0xAC82A494__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R; // 0x50(0x10)
	VerseFunctionProperty __verse_0x452A6C7D__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R; // 0x30(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R(enum class widget_visibility __verse_0xB2CDDD72_Argument); // Function VerseUI.Widget._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R // (Native|Public|BlueprintCallable) // @ game+0x63f457c
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseUI.Widget._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63f4574
	char _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseUI.Widget._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63f456c
	enum class widget_visibility _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseUI.Widget._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63f4564
	void $InitInstance(); // Function VerseUI.Widget.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.Widget.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.Widget.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseUI.Button
// Size: 0xb8 (Inherited: 0x70)
struct UButton : UWidget {
	char pad_70[0x10]; // 0x70(0x10)
	struct Fbutton_slot __verse_0x9693E4CD_Slot; // 0x80(0x30)
	struct UObject* __verse_0x6373195D_OnClick; // 0xb0(0x08)
	VerseFunctionProperty __verse_0x9B071A3E__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fbutton_N_RSetSlot_L_Nbutton__slot_R; // 0x70(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fbutton_N_RSetSlot_L_Nbutton__slot_R(struct Fbutton_slot __verse_0xB2CDDD72_Argument); // Function VerseUI.Button._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fbutton_N_RSetSlot_L_Nbutton__slot_R // (Native|Public|BlueprintCallable) // @ game+0x63f450c
	void $InitInstance(); // Function VerseUI.Button.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.Button.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.Button.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseUI.Canvas
// Size: 0xc0 (Inherited: 0x70)
struct UCanvas : UWidget {
	char pad_70[0x40]; // 0x70(0x40)
	struct TArray<struct Fcanvas_slot> __verse_0x5AE077E0_Slots; // 0xb0(0x10)
	VerseFunctionProperty __verse_0xE10E3FA4__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__canvas__slot_R; // 0x80(0x10)
	VerseFunctionProperty __verse_0xDDD0DE92__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__sized__canvas__slot_R; // 0x90(0x10)
	VerseFunctionProperty __verse_0x9F17D489__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R; // 0x70(0x10)
	VerseFunctionProperty __verse_0x421EABFD__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R; // 0xa0(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R(struct UWidget* __verse_0xB2CDDD72_Argument); // Function VerseUI.Canvas._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R // (Native|Public|BlueprintCallable) // @ game+0x63f452c
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R(struct Fcanvas_slot __verse_0xB2CDDD72_Argument); // Function VerseUI.Canvas._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R // (Native|Public|BlueprintCallable) // @ game+0x63f4514
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__sized__canvas__slot_R(struct Fpositioned_sized_canvas_slot __verse_0xB2CDDD72_Argument); // Function VerseUI.Canvas._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__sized__canvas__slot_R // (Native|Public|BlueprintCallable) // @ game+0x63f4524
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__canvas__slot_R(struct Fpositioned_canvas_slot __verse_0xB2CDDD72_Argument); // Function VerseUI.Canvas._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Npositioned__canvas__slot_R // (Native|Public|BlueprintCallable) // @ game+0x63f451c
	void $InitInstance(); // Function VerseUI.Canvas.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.Canvas.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.Canvas.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseUI.stack_box
// Size: 0xa8 (Inherited: 0x70)
struct Ustack_box : UWidget {
	char pad_70[0x20]; // 0x70(0x20)
	struct TArray<struct Fstack_box_slot> __verse_0x5AE077E0_Slots; // 0x90(0x10)
	enum class Orientation __verse_0x4DFAB8C8_Orientation; // 0xa0(0x01)
	VerseFunctionProperty __verse_0xB044A531__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R; // 0x70(0x10)
	VerseFunctionProperty __verse_0x9CEE338E__L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R; // 0x80(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R(struct UWidget* __verse_0xB2CDDD72_Argument); // Function VerseUI.stack_box._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R // (Native|Public|BlueprintCallable) // @ game+0x63f454c
	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R(struct Fstack_box_slot __verse_0xB2CDDD72_Argument); // Function VerseUI.stack_box._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R // (Native|Public|BlueprintCallable) // @ game+0x63f4544
	void $InitInstance(); // Function VerseUI.stack_box.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.stack_box.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.stack_box.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseUI.text_block_internal
// Size: 0xa0 (Inherited: 0x70)
struct Utext_block_internal : UWidget {
	char pad_70[0x20]; // 0x70(0x20)
	VerseStringProperty __verse_0xEDB05B46_DefaultText; // 0x90(0x10)
	VerseFunctionProperty __verse_0x260DB920__L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RGetText; // 0x80(0x10)
	VerseFunctionProperty __verse_0x6B58E98B__L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RSetText_L_N_Kchar_R; // 0x70(0x10)

	void _L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RSetText_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseUI.text_block_internal._L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RSetText_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x63f455c
	VerseStringProperty _L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RGetText(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseUI.text_block_internal._L_2fEpicGames_2ecom_2fTemporary_2fUI_2ftext__block__internal_N_RGetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63f4554
	void $InitInstance(); // Function VerseUI.text_block_internal.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseUI.text_block_internal.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseUI.text_block_internal.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

