// BlueprintGeneratedClass B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C
// Size: 0x1bb (Inherited: 0xb0)
struct UB_Lackluster_ApplyChrome_C : UApplyChromeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct FB_Lackluster_ChromeMaterialStruct> ChromeMaterialStruct; // 0xb8(0x10)
	struct TArray<struct UMeshComponent*> PredefinedMeshComponents; // 0xc8(0x10)
	struct TArray<struct FB_Lackluster_OriginalMaterialStruct> OriginalMaterialStruct; // 0xd8(0x10)
	enum class B_Lackluster_ActorTypes OwnerActorType; // 0xe8(0x01)
	enum class B_Lackluster_ChromeTypes ChromeType; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct TMap<struct FName, double> ContainerMaterialScalarParamMap; // 0xf0(0x50)
	struct TMap<struct FName, struct FLinearColor> ContainerMaterialVectorParamMap; // 0x140(0x50)
	bool bHadEndPlay; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct FLacklusterMaterialData> NativeChromeMaterialStructs; // 0x198(0x10)
	struct TArray<struct FLacklusterOriginalMaterialData> NativeOriginalMaterialStructs; // 0x1a8(0x10)
	enum class ELacklusterChromeType NativeChromeType; // 0x1b8(0x01)
	enum class ELacklusterActorType NativeActorType; // 0x1b9(0x01)
	bool bChromeMaterialsInitialized; // 0x1ba(0x01)

	void RestoreOriginalMaterials(); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.RestoreOriginalMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetOwnerActorType(enum class B_Lackluster_ActorTypes& ActorType); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.GetOwnerActorType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnReady_D73F987F4261F5FB7BF61DB26FCAE1E5(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.OnReady_D73F987F4261F5FB7BF61DB26FCAE1E5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChrome(enum class B_Lackluster_ChromeTypes ChromeType, enum class ELacklusterChromeType NativeChromeType); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.ApplyChrome // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RestoreMaterials(); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.RestoreMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitChromeMaterials(); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.InitChromeMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyMe(); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.DestroyMe // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Lackluster_ApplyChrome(int32_t EntryPoint); // Function B_Lackluster_ApplyChrome.B_Lackluster_ApplyChrome_C.ExecuteUbergraph_B_Lackluster_ApplyChrome // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

