// WidgetBlueprintGeneratedClass LetoBorder.LetoBorder_C
// Size: 0x2d0 (Inherited: 0x298)
struct ULetoBorder_C : UFortLetoLayoutBorder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UBorder* BorderBottom; // 0x2a0(0x08)
	struct UBorder* BorderLeft; // 0x2a8(0x08)
	struct UBorder* BorderNameplate; // 0x2b0(0x08)
	struct UBorder* BorderRight; // 0x2b8(0x08)
	struct UBorder* BorderTop; // 0x2c0(0x08)
	struct USafeZone* ; // 0x2c8(0x08)

	void UpdateBorderWidth(float HalfBorderWidth); // Function LetoBorder.LetoBorder_C.UpdateBorderWidth // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LetoBorder(int32_t EntryPoint); // Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder // (Final|UbergraphFunction) // @ game+0xdef49c
};

