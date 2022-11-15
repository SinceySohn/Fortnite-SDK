// Enum LinkId.ELinkCodeUserInputError
enum class ELinkCodeUserInputError : uint8 {
	InvalidMnemonicCharacter = 0,
	InvalidMnemonicLength = 1,
	InvalidVersionFormat = 2,
	NoError = 3,
	ELinkCodeUserInputError_MAX = 4
};

// ScriptStruct LinkId.OnlineLinkId
// Size: 0x18 (Inherited: 0x00)
struct FOnlineLinkId {
	struct FString Mnemonic; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

