// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// Size: 0x4300 (Inherited: 0x4220)
struct APlayerPawn_Generic_Parent_C : AFortPlayerPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4220(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x4228(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x4238(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x4248(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x4258(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x4268(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x4278(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x4288(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x4298(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x42a0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x42b0(0x10)
	int32_t WaterCounter; // 0x42c0(0x04)
	char pad_42C4[0x4]; // 0x42c4(0x04)
	struct AActor* CurrentWaterMeshActor; // 0x42c8(0x08)
	bool IsInWater; // 0x42d0(0x01)
	char pad_42D1[0x7]; // 0x42d1(0x07)
	double Time when you'll be able to splash again; // 0x42d8(0x08)
	struct FMulticastInlineDelegate OnOverlapWaterVolume; // 0x42e0(0x10)
	struct TArray<struct FCharacterPartMidArrayStruct> PawnPartMaterials; // 0x42f0(0x10)

	void Find Stored Char Part Materials(enum class EFortCustomPartType PartType, bool& Found, int32_t& Index, struct TArray<struct UMaterialInstanceDynamic*>& MIDs); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Find Stored Char Part Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Entered Water Volume(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Player Creates a Splash(struct FTransform& NewTransform); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReinitializeWeaponMaterials(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, struct AFortPlayerPawn* Pawn, struct AActor* Water); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

