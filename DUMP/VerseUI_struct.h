// SolarisGeneratedEnum VerseUI.horizontal_alignment
enum class horizontal_alignment : uint8 {
	Center = 0,
	Left = 1,
	Right = 2,
	Fill = 3
};

// SolarisGeneratedEnum VerseUI.Orientation
enum class Orientation : uint8 {
	Horizontal = 0,
	Vertical = 1
};

// SolarisGeneratedEnum VerseUI.vertical_alignment
enum class vertical_alignment : uint8 {
	Center = 0,
	Top = 1,
	Bottom = 2,
	Fill = 3
};

// SolarisGeneratedEnum VerseUI.widget_visibility
enum class widget_visibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2
};

// VerseStruct VerseUI.anchors
// Size: 0x20 (Inherited: 0x00)
struct Fanchors {
	struct Fvector2 __verse_0x91692725_Minimum; // 0x00(0x10)
	struct Fvector2 __verse_0xDF63CF93_Maximum; // 0x10(0x10)
};

// VerseStruct VerseUI.button_slot
// Size: 0x30 (Inherited: 0x00)
struct Fbutton_slot {
	struct UWidget* __verse_0xA5B83AD1_Widget; // 0x00(0x08)
	enum class horizontal_alignment __verse_0xF13651F1_HorizontalAlignment; // 0x08(0x01)
	enum class vertical_alignment __verse_0xA83057DE_VerticalAlignment; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct Fmargin __verse_0x7F718DF5_Padding; // 0x10(0x20)
};

// VerseStruct VerseUI.canvas_slot
// Size: 0x68 (Inherited: 0x00)
struct Fcanvas_slot {
	struct Fanchors __verse_0x6C624651_Anchors; // 0x00(0x20)
	struct Fmargin __verse_0xAE9C7630_Offsets; // 0x20(0x20)
	char __verse_0x270727B9_SizeToContent : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct Fvector2 __verse_0xE9839A38_Alignment; // 0x48(0x10)
	int64_t __verse_0xEB688892_ZOrder; // 0x58(0x08)
	struct UWidget* __verse_0xA5B83AD1_Widget; // 0x60(0x08)
};

// VerseStruct VerseUI.margin
// Size: 0x20 (Inherited: 0x00)
struct Fmargin {
	double __verse_0x88EBCF27_Left; // 0x00(0x08)
	double __verse_0x97B55C26_Top; // 0x08(0x08)
	double __verse_0x296C864F_Right; // 0x10(0x08)
	double __verse_0x7AA421E3_Bottom; // 0x18(0x08)
};

// VerseStruct VerseUI.positioned_canvas_slot
// Size: 0x30 (Inherited: 0x00)
struct Fpositioned_canvas_slot {
	struct Fvector2 __verse_0xA82B0967_Position; // 0x00(0x10)
	struct Fvector2 __verse_0xE9839A38_Alignment; // 0x10(0x10)
	int64_t __verse_0xEB688892_ZOrder; // 0x20(0x08)
	struct UWidget* __verse_0xA5B83AD1_Widget; // 0x28(0x08)
};

// VerseStruct VerseUI.positioned_sized_canvas_slot
// Size: 0x40 (Inherited: 0x00)
struct Fpositioned_sized_canvas_slot {
	struct Fvector2 __verse_0xA82B0967_Position; // 0x00(0x10)
	struct Fvector2 __verse_0x33EBB989_Size; // 0x10(0x10)
	struct Fvector2 __verse_0xE9839A38_Alignment; // 0x20(0x10)
	int64_t __verse_0xEB688892_ZOrder; // 0x30(0x08)
	struct UWidget* __verse_0xA5B83AD1_Widget; // 0x38(0x08)
};

// VerseStruct VerseUI.stack_box_slot
// Size: 0x40 (Inherited: 0x00)
struct Fstack_box_slot {
	struct UWidget* __verse_0xA5B83AD1_Widget; // 0x00(0x08)
	enum class horizontal_alignment __verse_0xF13651F1_HorizontalAlignment; // 0x08(0x01)
	enum class vertical_alignment __verse_0xA83057DE_VerticalAlignment; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct Fmargin __verse_0x7F718DF5_Padding; // 0x10(0x20)
	OptionProperty __verse_0x3F3ECCC9_Distribution; // 0x30(0x09)
	char pad_39[0x7]; // 0x39(0x07)
};

// VerseStruct VerseUI.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseUI.tuple_Lwidget_M_QZOrder_Nint_20_3d_20_2e_2e_2e_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_Lwidget_M_QZOrder_Nint_20_3d_20_2e_2e_2e_R {
	struct UWidget* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x09)
};

// VerseStruct VerseUI.widget_message
// Size: 0x10 (Inherited: 0x00)
struct Fwidget_message {
	struct UPlayer* __verse_0xE5E3B371_Player; // 0x00(0x08)
	struct UWidget* __verse_0xB1B721CE_Source; // 0x08(0x08)
};

