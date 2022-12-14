// Enum Hotfix.EHotfixResult
enum class EHotfixResult : uint8 {
	Failed = 0,
	Success = 1,
	SuccessNoChange = 2,
	SuccessNeedsReload = 3,
	SuccessNeedsRelaunch = 4,
	EHotfixResult_MAX = 5
};

// Enum Hotfix.EUpdateState
enum class EUpdateState : uint8 {
	UpdateIdle = 0,
	UpdatePending = 1,
	CheckingForPatch = 2,
	DetectingPlatformEnvironment = 3,
	CheckingForHotfix = 4,
	WaitingOnInitialLoad = 5,
	InitialLoadComplete = 6,
	UpdateComplete = 7,
	EUpdateState_MAX = 8
};

// Enum Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8 {
	UpdateUnknown = 0,
	UpdateSuccess = 1,
	UpdateSuccess_NoChange = 2,
	UpdateSuccess_NeedsReload = 3,
	UpdateSuccess_NeedsRelaunch = 4,
	UpdateSuccess_NeedsPatch = 5,
	UpdateFailure_PatchCheck = 6,
	UpdateFailure_HotfixCheck = 7,
	UpdateFailure_NotLoggedIn = 8,
	EUpdateCompletionStatus_MAX = 9
};

// ScriptStruct Hotfix.UpdateContextDefinition
// Size: 0x68 (Inherited: 0x00)
struct FUpdateContextDefinition {
	struct FString Name; // 0x00(0x10)
	bool bEnabled; // 0x10(0x01)
	bool bCheckAvailabilityOnly; // 0x11(0x01)
	bool bPatchCheckEnabled; // 0x12(0x01)
	bool bPlatformEnvironmentDetectionEnabled; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSet<struct FString> AdditionalTags; // 0x18(0x50)
};

