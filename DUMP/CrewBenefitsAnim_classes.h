// WidgetBlueprintGeneratedClass CrewBenefitsAnim.CrewBenefitsAnim_C
// Size: 0x460 (Inherited: 0x3e0)
struct UCrewBenefitsAnim_C : USubscriptionWelcomePreMessage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Intro; // 0x3e8(0x08)
	struct UImage* Image_arcs; // 0x3f0(0x08)
	struct UImage* Image_Arcs2; // 0x3f8(0x08)
	struct UImage* Image_Arcs3; // 0x400(0x08)
	struct UImage* Image_Arcs4; // 0x408(0x08)
	struct UImage* Image_BG_Crown; // 0x410(0x08)
	struct UImage* Image_BGPattern; // 0x418(0x08)
	struct UImage* Image_Blackout; // 0x420(0x08)
	struct UImage* Image_Cross; // 0x428(0x08)
	struct UImage* Image_FireAdd; // 0x430(0x08)
	struct UImage* Image_FireSolid; // 0x438(0x08)
	struct UImage* Image_Glow; // 0x440(0x08)
	struct UImage* Image_HazardGlow; // 0x448(0x08)
	struct UImage* Image_Lightning1; // 0x450(0x08)
	struct UImage* ; // 0x458(0x08)

	void EventPlayIntro(); // Function CrewBenefitsAnim.CrewBenefitsAnim_C.EventPlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CrewBenefitsAnim(int32_t EntryPoint); // Function CrewBenefitsAnim.CrewBenefitsAnim_C.ExecuteUbergraph_CrewBenefitsAnim // (Final|UbergraphFunction) // @ game+0xdef49c
};

