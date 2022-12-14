// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameInterpolationProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0x158 (Inherited: 0x28)
struct ULiveLinkVirtualSubject : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ULiveLinkRole* Role; // 0x30(0x08)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x38(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; // 0x48(0x10)
	bool bRebroadcastSubject; // 0x58(0x01)
	char pad_59[0xff]; // 0x59(0xff)
};

// Class LiveLinkInterface.LiveLinkSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkSourceFactory : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0xa8 (Inherited: 0x28)
struct ULiveLinkSourceSettings : UObject {
	enum class ELiveLinkSourceMode Mode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30(0x60)
	struct FString ConnectionString; // 0x90(0x10)
	struct ULiveLinkSourceFactory* Factory; // 0xa0(0x08)
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFramePreProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkFrameTranslator : UObject {
};

// Class LiveLinkInterface.LiveLinkController
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkController : UObject {
};

// Class LiveLinkInterface.LiveLinkRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkRole : UObject {
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0xf8 (Inherited: 0xa8)
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa8(0x50)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x68 (Inherited: 0x28)
struct ULiveLinkSubjectSettings : UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38(0x08)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; // 0x40(0x10)
	struct ULiveLinkRole* Role; // 0x50(0x08)
	struct FFrameRate FrameRate; // 0x58(0x08)
	bool bRebroadcastSubject; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class LiveLinkInterface.LiveLinkBasicRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkLightRole
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

