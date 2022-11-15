// Enum EventScreenBase.EEventScreenView
enum class EEventScreenView : uint8 {
	None = 0,
	LandingPage = 1,
	RewardPreview = 2,
	MoreInfo = 3,
	PurchaseReward = 4,
	LoadError = 5,
	EEventScreenView_MAX = 6
};

// ScriptStruct EventScreenBase.EventScreenCMSResourceGroupOverride
// Size: 0x18 (Inherited: 0x00)
struct FEventScreenCMSResourceGroupOverride {
	int32_t ResourceValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KeyArtOverrideURL; // 0x08(0x10)
};

// ScriptStruct EventScreenBase.EventScreenCMSData
// Size: 0x1c0 (Inherited: 0x00)
struct FEventScreenCMSData {
	struct FString EventCMSId; // 0x00(0x10)
	struct FText EventName; // 0x10(0x18)
	struct FText EventDescription; // 0x28(0x18)
	struct FText ResourceHeader; // 0x40(0x18)
	struct FText StarterHeader; // 0x58(0x18)
	struct FText CompletionHeader; // 0x70(0x18)
	struct FText EventCTA; // 0x88(0x18)
	struct FText EventCTACompleted; // 0xa0(0x18)
	struct FString CTAIconURL; // 0xb8(0x10)
	struct FString KeyArtURL; // 0xc8(0x10)
	struct FLinearColor EventBackgroundColor1; // 0xd8(0x10)
	struct FLinearColor EventBackgroundColor2; // 0xe8(0x10)
	struct FLinearColor RewardBackgroundColor1; // 0xf8(0x10)
	struct FLinearColor RewardBackgroundColor2; // 0x108(0x10)
	struct FLinearColor RewardBackgroundColor3; // 0x118(0x10)
	struct FLinearColor AccentColor; // 0x128(0x10)
	struct FText MoreInfoHeader; // 0x138(0x18)
	struct FText MoreInfoSubHeader; // 0x150(0x18)
	struct FText MoreInfoBody; // 0x168(0x18)
	struct FText MoreInfoLegal; // 0x180(0x18)
	struct FText PurchaseLegal; // 0x198(0x18)
	struct TArray<struct FEventScreenCMSResourceGroupOverride> ResourceGroupOverrides; // 0x1b0(0x10)
};

// ScriptStruct EventScreenBase.EventScreenCMSGroup
// Size: 0x10 (Inherited: 0x00)
struct FEventScreenCMSGroup {
	struct TArray<struct FEventScreenCMSData> EventScreens; // 0x00(0x10)
};

// ScriptStruct EventScreenBase.SharedEventTrackerModuleData
// Size: 0x08 (Inherited: 0x00)
struct FSharedEventTrackerModuleData {
	struct URichTextBlockDecorator* RichTextDecorator; // 0x00(0x08)
};

