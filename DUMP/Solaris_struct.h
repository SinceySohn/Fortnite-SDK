// Enum Solaris.EVerseDigestVariant
enum class EVerseDigestVariant : uint8 {
	PublicOnly = 0,
	PublicAndEpicInternal = 1,
	EVerseDigestVariant_MAX = 2
};

// Enum Solaris.EVersePackageScope
enum class EVersePackageScope : uint8 {
	InternalAPI = 0,
	PublicAPI = 1,
	User = 2,
	EVersePackageScope_MAX = 3
};

// ScriptStruct Solaris.GenericElementType
// Size: 0x01 (Inherited: 0x00)
struct FGenericElementType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solaris.GenericKeyType
// Size: 0x01 (Inherited: 0x00)
struct FGenericKeyType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solaris.GenericValueType
// Size: 0x01 (Inherited: 0x00)
struct FGenericValueType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solaris.VersePackageContainerSettings
// Size: 0x38 (Inherited: 0x00)
struct FVersePackageContainerSettings {
	struct FString VersePath; // 0x00(0x10)
	enum class EVersePackageScope VerseScope; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> DependencyPackages; // 0x18(0x10)
	struct FString VniDestDir; // 0x28(0x10)
};

// ScriptStruct Solaris.VerseSourceFile
// Size: 0x20 (Inherited: 0x00)
struct FVerseSourceFile {
	struct FString Filename; // 0x00(0x10)
	struct TArray<char> Code; // 0x10(0x10)
};

// ScriptStruct Solaris.VersePackageContainer
// Size: 0x78 (Inherited: 0x00)
struct FVersePackageContainer {
	struct FString Name; // 0x00(0x10)
	struct FString ModuleId; // 0x10(0x10)
	struct FString DirPath; // 0x20(0x10)
	struct FVersePackageContainerSettings Settings; // 0x30(0x38)
	struct TArray<struct FVerseSourceFile> SourceFiles; // 0x68(0x10)
};

// ScriptStruct Solaris.VerseProjectContainer
// Size: 0x10 (Inherited: 0x00)
struct FVerseProjectContainer {
	struct TArray<struct FVersePackageContainer> Packages; // 0x00(0x10)
};

// ScriptStruct Solaris.akeType
// Size: 0x01 (Inherited: 0x00)
struct FakeType {
	char pad_0[0x1]; // 0x00(0x01)
};

