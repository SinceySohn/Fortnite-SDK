// WidgetBlueprintGeneratedClass SocialScreen.SocialScreen_C
// Size: 0x531 (Inherited: 0x4e8)
struct USocialScreen_C : UAthenaSocialScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* RiftFadeIn; // 0x4f0(0x08)
	struct USizeBox* BottomButtonsSB; // 0x4f8(0x08)
	struct UImage* Image_DefaultBackground; // 0x500(0x08)
	struct USafeZone* ; // 0x508(0x08)
	struct USafeZone* ; // 0x510(0x08)
	struct USizeBox* SizeBox_ViewCareer; // 0x518(0x08)
	struct FDataTableRowHandle Input_ShowCareerScreen; // 0x520(0x10)
	bool AutoPlayVideo; // 0x530(0x01)

	void Show Career Screen Event(bool& bPassThrough); // Function SocialScreen.SocialScreen_C.Show Career Screen Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SocialScreen.SocialScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function SocialScreen.SocialScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialScreen(int32_t EntryPoint); // Function SocialScreen.SocialScreen_C.ExecuteUbergraph_SocialScreen // (Final|UbergraphFunction) // @ game+0xdef49c
};

