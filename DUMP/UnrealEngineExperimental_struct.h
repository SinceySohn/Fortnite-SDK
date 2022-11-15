// Enum UnrealEngineExperimental.EScriptDiagnosticMessageType
enum class EScriptDiagnosticMessageType : uint8 {
	Debug = 0,
	Verbose = 1,
	Normal = 2,
	Warning = 3,
	Error = 4,
	EScriptDiagnosticMessageType_MAX = 5
};

// ScriptStruct UnrealEngineExperimental.ScriptDiagnosticSourceLocation
// Size: 0x20 (Inherited: 0x00)
struct FScriptDiagnosticSourceLocation {
	struct FString FilePath; // 0x00(0x10)
	struct FIntPoint RowSpan; // 0x10(0x08)
	struct FIntPoint ColSpan; // 0x18(0x08)
};

// ScriptStruct UnrealEngineExperimental.ScriptDiagnosticMessage
// Size: 0x58 (Inherited: 0x00)
struct FScriptDiagnosticMessage {
	enum class EScriptDiagnosticMessageType MessageType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime Timestamp; // 0x08(0x08)
	struct FString Channel; // 0x10(0x10)
	struct FText MessageStr; // 0x20(0x18)
	struct FScriptDiagnosticSourceLocation SourceLocation; // 0x38(0x20)
};

// ScriptStruct UnrealEngineExperimental.ScriptScreenLogMessage
// Size: 0x60 (Inherited: 0x58)
struct FScriptScreenLogMessage : FScriptDiagnosticMessage {
	struct FColor ScreenColor; // 0x58(0x04)
	float DisplayDuration; // 0x5c(0x04)
};

