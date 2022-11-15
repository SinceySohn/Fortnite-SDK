// SolarisGeneratedEnum CompanionAI.command_type
enum class command_type : uint8 {
	go_to = 0,
	back_to_me = 1,
	back_to_default = 2,
	hold_position = 3,
	revive = 4,
	invalid = 5
};

// SolarisGeneratedEnum CompanionAI.entity_type
enum class entity_type : uint8 {
	pawn = 0,
	pickup = 1,
	weapon = 2,
	container = 3,
	player_built_actor = 4,
	building_actor = 5,
	undefined = 6
};

// VerseStruct CompanionAI.ping_info
// Size: 0x38 (Inherited: 0x00)
struct Fping_info {
	enum class command_type __verse_0x72E298E9_Type; // 0x00(0x01)
	enum class entity_type __verse_0x6CF7C7E8_EntityType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	char __verse_0x0FA78E7E_LocationOnHorizontalSurface : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	OptionProperty __verse_0x459049A1_Target; // 0x28(0x08)
	OptionProperty __verse_0xFD64D7AA_Emitter; // 0x30(0x08)
};

// VerseStruct CompanionAI.tuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x20(0x10)
	VerseStringProperty __verse_0xF64C4596_Elem3; // 0x30(0x10)
};

// VerseStruct CompanionAI.tuple_L_Kchar_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct CompanionAI.tuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x19)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x30(0x09)
};

// VerseStruct CompanionAI.tuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x09)
	char pad_19[0x7]; // 0x19(0x07)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x20(0x19)
};

// VerseStruct CompanionAI.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct CompanionAI.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct CompanionAI.tuple_Lfloat_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct CompanionAI.tuple_Lfort__character_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lfort__character_Mfloat_R {
	struct UObject* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct CompanionAI.tuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Ufort_navigation_target* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct CompanionAI.tuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_R {
	struct Ufort_navigation_target* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct CompanionAI.tuple_Lfort__obstacle__info_Mentity_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lfort__obstacle__info_Mentity_R {
	struct Ffort_obstacle_info __verse_0x18E3F084_Elem0; // 0x00(0x28)
	struct UEntity* __verse_0x7D844C3C_Elem1; // 0x28(0x08)
};

// VerseStruct CompanionAI.tuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct CompanionAI.tuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct CompanionAI.tuple_Lvector3_M_Qfalse_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R
// Size: 0x31 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Qfalse_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x02)
	char __verse_0x932BF92E_Elem2 : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x20(0x11)
};

// VerseStruct CompanionAI.tuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	char __verse_0x932BF92E_Elem2 : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x28(0x11)
};

// VerseStruct CompanionAI.tuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R
// Size: 0x39 (Inherited: 0x00)
struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	char __verse_0x932BF92E_Elem2 : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x28(0x11)
};

// VerseStruct CompanionAI.tuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x61 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x49)
};

// VerseStruct CompanionAI.tuple_Lvector3_M_QParams_Nsphere__draw__params_R
// Size: 0x61 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x49)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Mcolor_R
// Size: 0x38 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mcolor_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	struct FColor __verse_0x932BF92E_Elem2; // 0x20(0x18)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Mentity_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mentity_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	struct UEntity* __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Mfloat_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mfloat_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

// VerseStruct CompanionAI.tuple_Lvector3_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
};

