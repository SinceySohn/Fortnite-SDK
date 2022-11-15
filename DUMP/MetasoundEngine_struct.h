// Enum MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8 {
	Error = 0,
	Warning = 1,
	Info = 2,
	EMetaSoundMessageLevel_MAX = 3
};

// Enum MetasoundEngine.EMetasoundSourceAudioFormat
enum class EMetasoundSourceAudioFormat : uint8 {
	Mono = 0,
	Stereo = 1,
	COUNT = 2,
	EMetasoundSourceAudioFormat_MAX = 3
};

// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// Size: 0x18 (Inherited: 0x00)
struct FDefaultMetaSoundAssetAutoUpdateSettings {
	struct FSoftObjectPath MetaSound; // 0x00(0x18)
};

// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
// Size: 0x10 (Inherited: 0x00)
struct FMetaSoundAssetDirectory {
	struct FDirectoryPath Directory; // 0x00(0x10)
};

// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
// Size: 0x30 (Inherited: 0x00)
struct FMetaSoundAsyncAssetDependencies {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* MetaSound; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
};

