// WidgetBlueprintGeneratedClass BladesMenu_XpBar.BladesMenu_XpBar_C
// Size: 0x2f4 (Inherited: 0x290)
struct UBladesMenu_XpBar_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Backing_Color; // 0x298(0x08)
	struct UImage* Backing_Darken; // 0x2a0(0x08)
	struct UImage* Backing_Outline; // 0x2a8(0x08)
	struct UImage* ; // 0x2b0(0x08)
	struct UImage* ; // 0x2b8(0x08)
	struct UImage* ; // 0x2c0(0x08)
	struct UImage* ; // 0x2c8(0x08)
	struct UImage* Image_RaceTrack; // 0x2d0(0x08)
	struct UBorder* RestedXPTextBox; // 0x2d8(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x2e0(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x2e8(0x08)
	int32_t Max BPLevel for Rewards; // 0x2f0(0x04)

	void Update Text(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLevelChanged(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnProgressUpdated(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSuperCharged(); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdatedRestedState(bool bIsRested); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.OnUpdatedRestedState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BladesMenu_XpBar(int32_t EntryPoint); // Function BladesMenu_XpBar.BladesMenu_XpBar_C.ExecuteUbergraph_BladesMenu_XpBar // (Final|UbergraphFunction) // @ game+0xdef49c
};

