// Enum GameplayInteractionsModule.EGameplayTaskActuationResult
enum class EGameplayTaskActuationResult : uint8 {
	None = 0,
	RequestFailed = 1,
	Failed = 2,
	Succeeded = 3,
	EGameplayTaskActuationResult_MAX = 4
};

// Enum GameplayInteractionsModule.EGameplayTransitionResult
enum class EGameplayTransitionResult : uint8 {
	Cancelled = 0,
	Succeeded = 1,
	Failed = 2,
	EGameplayTransitionResult_MAX = 3
};

// Enum GameplayInteractionsModule.EGameplayInteractionAbortReason
enum class EGameplayInteractionAbortReason : uint8 {
	Unset = 0,
	ExternalAbort = 1,
	InternalAbort = 2,
	EGameplayInteractionAbortReason_MAX = 3
};

// Enum GameplayInteractionsModule.EGameplayTaskMoveToIntent
enum class EGameplayTaskMoveToIntent : uint8 {
	Stop = 0,
	KeepMoving = 1,
	EGameplayTaskMoveToIntent_MAX = 2
};

// Enum GameplayInteractionsModule.EPlayContextualAnimExitMode
enum class EPlayContextualAnimExitMode : uint8 {
	DefaultExit = 0,
	FastExit = 1,
	Teleport = 2,
	EPlayContextualAnimExitMode_MAX = 3
};

// Enum GameplayInteractionsModule.EPlayContextualAnimStatus
enum class EPlayContextualAnimStatus : uint8 {
	Unset = 0,
	Playing = 1,
	DonePlaying = 2,
	Failed = 3,
	EPlayContextualAnimStatus_MAX = 4
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationStateBase
// Size: 0x28 (Inherited: 0x00)
struct FGameplayActuationStateBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActuationName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector NavigationLocation; // 0x10(0x18)
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationPredictedLocation
// Size: 0x30 (Inherited: 0x00)
struct FGameplayActuationPredictedLocation {
	struct FVector Location; // 0x00(0x18)
	struct FVector3f Direction; // 0x18(0x0c)
	float Time; // 0x24(0x04)
	float Speed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationState_Moving
// Size: 0x88 (Inherited: 0x28)
struct FGameplayActuationState_Moving : FGameplayActuationStateBase {
	struct FVector3f HeadingDirection; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FGameplayActuationPredictedLocation Prediction; // 0x38(0x30)
	char pad_68[0x20]; // 0x68(0x20)
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationState_Standing
// Size: 0x88 (Inherited: 0x88)
struct FGameplayActuationState_Standing : FGameplayActuationState_Moving {
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationState_MovingTransition
// Size: 0x88 (Inherited: 0x88)
struct FGameplayActuationState_MovingTransition : FGameplayActuationState_Moving {
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTransitionDesc {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayInteractionsModule.ContextualAnimStateTreeTaskInstanceData
// Size: 0x38 (Inherited: 0x00)
struct FContextualAnimStateTreeTaskInstanceData {
	struct AActor* Actor; // 0x00(0x08)
	struct AActor* InteractableObject; // 0x08(0x08)
	struct UContextualAnimSceneAsset* ContextualAnimAsset; // 0x10(0x08)
	struct UGameplayTask_PlayContextualAnim* Task; // 0x18(0x08)
	float Duration; // 0x20(0x04)
	float Time; // 0x24(0x04)
	struct FName InteractorRole; // 0x28(0x04)
	struct FName InteractableObjectRole; // 0x2c(0x04)
	struct FGameplayInteractionAbortContext AbortContext; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayInteractionsModule.GameplayInteractionAbortContext
// Size: 0x01 (Inherited: 0x00)
struct FGameplayInteractionAbortContext {
	enum class EGameplayInteractionAbortReason Reason; // 0x00(0x01)
};

// ScriptStruct GameplayInteractionsModule.GameplayInteractionStateTreeTask
// Size: 0x20 (Inherited: 0x20)
struct FGameplayInteractionStateTreeTask : FStateTreeTaskBase {
};

// ScriptStruct GameplayInteractionsModule.ContextualAnimStateTreeTask
// Size: 0x30 (Inherited: 0x20)
struct FContextualAnimStateTreeTask : FGameplayInteractionStateTreeTask {
	struct FName Section; // 0x20(0x04)
	struct FName ExitSection; // 0x24(0x04)
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayInteractionsModule.GameplayInteractionContext
// Size: 0x60 (Inherited: 0x00)
struct FGameplayInteractionContext {
	struct FStateTreeInstanceData StateTreeInstanceData; // 0x00(0x30)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0x30(0x10)
	struct FGameplayInteractionAbortContext AbortContext; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct AActor* ContextActor; // 0x48(0x08)
	struct AActor* SmartObjectActor; // 0x50(0x08)
	struct UGameplayInteractionSmartObjectBehaviorDefinition* Definition; // 0x58(0x08)
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc_MoveToStand
// Size: 0x08 (Inherited: 0x08)
struct FGameplayTransitionDesc_MoveToStand : FGameplayTransitionDesc {
};

// ScriptStruct GameplayInteractionsModule.GameplayActuationState_ContextualAnim
// Size: 0x58 (Inherited: 0x28)
struct FGameplayActuationState_ContextualAnim : FGameplayActuationStateBase {
	struct FName InteractorRole; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AActor* InteractableObject; // 0x30(0x08)
	struct FName InteractableObjectRole; // 0x38(0x04)
	struct FName SectionName; // 0x3c(0x04)
	struct FName ExitSectionName; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UContextualAnimSceneAsset* SceneAsset; // 0x48(0x08)
	struct UContextualAnimSceneInstance* SceneInstance; // 0x50(0x08)
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc_EnterContextualAnim
// Size: 0x08 (Inherited: 0x08)
struct FGameplayTransitionDesc_EnterContextualAnim : FGameplayTransitionDesc {
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc_ExitContextualAnim
// Size: 0x08 (Inherited: 0x08)
struct FGameplayTransitionDesc_ExitContextualAnim : FGameplayTransitionDesc {
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc_StandToMove
// Size: 0x08 (Inherited: 0x08)
struct FGameplayTransitionDesc_StandToMove : FGameplayTransitionDesc {
};

// ScriptStruct GameplayInteractionsModule.GameplayTransitionDesc_SuddenTurn
// Size: 0x08 (Inherited: 0x08)
struct FGameplayTransitionDesc_SuddenTurn : FGameplayTransitionDesc {
};

// ScriptStruct GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FPlayMontageStateTreeTaskInstanceData {
	struct AActor* Actor; // 0x00(0x08)
	float ComputedDuration; // 0x08(0x04)
	float Time; // 0x0c(0x04)
};

// ScriptStruct GameplayInteractionsModule.PlayMontageStateTreeTask
// Size: 0x28 (Inherited: 0x20)
struct FPlayMontageStateTreeTask : FGameplayInteractionStateTreeTask {
	struct UAnimMontage* Montage; // 0x20(0x08)
};

