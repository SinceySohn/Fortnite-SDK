// WidgetBlueprintGeneratedClass AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C
// Size: 0x301 (Inherited: 0x2b0)
struct UAthenaExclusiveRewardBanner_C : UAthenaExclusiveRewardBanner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* InitializeOffScreen; // 0x2b8(0x08)
	struct UWidgetAnimation* Outro; // 0x2c0(0x08)
	struct UWidgetAnimation* AnimatePulse; // 0x2c8(0x08)
	struct UWidgetAnimation* Intro; // 0x2d0(0x08)
	struct UImage* Backing; // 0x2d8(0x08)
	struct UImage* BottomAngle; // 0x2e0(0x08)
	struct UOverlay* IconOvr; // 0x2e8(0x08)
	struct UImage* Pulse; // 0x2f0(0x08)
	struct UImage* TopAngle; // 0x2f8(0x08)
	bool Shown; // 0x300(0x01)

	void OnClearBanner(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnClearBanner // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void (); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C. // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitBannerIcon(struct UTexture2D* RewardIcon); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnInitBannerIcon // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitBanner(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnInitBanner // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaExclusiveRewardBanner(int32_t EntryPoint); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.ExecuteUbergraph_AthenaExclusiveRewardBanner // (Final|UbergraphFunction) // @ game+0xdef49c
};

