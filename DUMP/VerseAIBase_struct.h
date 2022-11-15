// SolarisGeneratedEnum VerseAIBase.action_result
enum class action_result : uint8 {
	success = 0,
	cancelled = 1,
	error = 2
};

// SolarisGeneratedEnum VerseAIBase.fort_loot_type
enum class fort_loot_type : uint8 {
	pickup = 0,
	chest = 1,
	supply_drop = 2,
	unknown = 3
};

// SolarisGeneratedEnum VerseAIBase.fort_navigate_result
enum class fort_navigate_result : uint8 {
	reached = 0,
	canceled = 1,
	unreachable = 2,
	error = 3
};

// SolarisGeneratedEnum VerseAIBase.fort_obstacle_status
enum class fort_obstacle_status : uint8 {
	incoming_obstacle = 0,
	blocked_by_obstacle = 1,
	trap_obstacle = 2
};

// SolarisGeneratedEnum VerseAIBase.fort_threat_status
enum class fort_threat_status : uint8 {
	seeing_threat = 0,
	lost_threat_line_of_sight = 1,
	alerted_by_threat = 2
};

// SolarisGeneratedEnum VerseAIBase.fort_weapon_type
enum class fort_weapon_type : uint8 {
	pistol = 0,
	shotgun = 1,
	rifle = 2,
	SMG = 3,
	sniper = 4,
	grenade_launcher = 5,
	rocket_launcher = 6,
	bow = 7,
	mini_gun = 8,
	LMG = 9,
	biplane_gun = 10,
	melee = 11
};

// VerseStruct VerseAIBase.fort_damage_info
// Size: 0x40 (Inherited: 0x00)
struct Ffort_damage_info {
	double __verse_0xBB2452F3_Damage; // 0x00(0x08)
	struct Ffort_threat_info __verse_0x16209150_DamageCauser; // 0x08(0x38)
};

// VerseStruct VerseAIBase.fort_loot_info
// Size: 0x28 (Inherited: 0x00)
struct Ffort_loot_info {
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x00(0x18)
	enum class fort_loot_type __verse_0x72E298E9_Type; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// VerseStruct VerseAIBase.fort_navigation_parameters
// Size: 0x10 (Inherited: 0x00)
struct Ffort_navigation_parameters {
	double __verse_0x48D1C52D_AcceptableRadius; // 0x00(0x08)
	char __verse_0x4835EE0D_AllowPartialPath : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// VerseStruct VerseAIBase.fort_obstacle_info
// Size: 0x28 (Inherited: 0x00)
struct Ffort_obstacle_info {
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x00(0x18)
	enum class fort_obstacle_status __verse_0xFA60180E_Status; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// VerseStruct VerseAIBase.fort_threat_info
// Size: 0x38 (Inherited: 0x00)
struct Ffort_threat_info {
	enum class fort_threat_status __verse_0xFA60180E_Status; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t __verse_0x555B2F95_Team; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
};

// VerseStruct VerseAIBase.fort_weapon_descriptor
// Size: 0x40 (Inherited: 0x00)
struct Ffort_weapon_descriptor {
	enum class fort_weapon_type __verse_0xDC4E2EF3_WeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double __verse_0x74DE9176_MidRange; // 0x08(0x08)
	double __verse_0xFBDF5A20_LongRange; // 0x10(0x08)
	double __verse_0x40EB5EBF_MaxRange; // 0x18(0x08)
	int64_t __verse_0xB3780369_TotalAmmo; // 0x20(0x08)
	int64_t __verse_0xAEE6FE8C_LoadedAmmo; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// VerseStruct VerseAIBase.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseAIBase.tuple_Lfort__character_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lfort__character_Mlogic_R {
	struct UObject* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseAIBase.tuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Ufort_navigation_target* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct VerseAIBase.tuple_Lvector3_Mfloat_Mfloat_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mfloat_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
};

