// BlueprintGeneratedClass Hotfix_Container_Parent.Hotfix_Container_Parent_C
// Size: 0x1198 (Inherited: 0x10d8)
struct AHotfix_Container_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d8(0x08)
	struct UArrowComponent* DropDirection; // 0x10e0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x10e8(0x08)
	float Timeline_Time_173429B44AAD05F71F54EDBE85B16DA7; // 0x10f0(0x04)
	enum class ETimelineDirection Timeline__Direction_173429B44AAD05F71F54EDBE85B16DA7; // 0x10f4(0x01)
	char pad_10F5[0x3]; // 0x10f5(0x03)
	struct UTimelineComponent* Timeline; // 0x10f8(0x08)
	struct FScalableFloat Row_ActorEnabled; // 0x1100(0x28)
	struct FScalableFloat Row_InteractEnabled; // 0x1128(0x28)
	struct FGameplayTag GC_Open; // 0x1150(0x04)
	bool ContainerAnimates; // 0x1154(0x01)
	char pad_1155[0x3]; // 0x1155(0x03)
	struct UParticleSystem* FX_CascadeOpen; // 0x1158(0x08)
	struct UNiagaraSystem* FX_NiagaraOpen; // 0x1160(0x08)
	struct FVector FX_OpenOffsetLocation; // 0x1168(0x18)
	double FX_OpenPitchOffset; // 0x1180(0x08)
	struct USoundBase* Sound_Open; // 0x1188(0x08)
	bool DisableLootOnDisableInteract; // 0x1190(0x01)
	char pad_1191[0x3]; // 0x1191(0x03)
	struct FName OpenAnimationParameterName; // 0x1194(0x04)

	void GetFXLocation(struct FVector& Location, struct FRotator& Rotation); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.GetFXLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayValidFx(struct FVector Location, struct FRotator Rotation); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.PlayValidFx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline__FinishedFunc(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline__UpdateFunc(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnReady_8BE6ADB6479A5EF3145F32B245E584C6(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnReady_8BE6ADB6479A5EF3145F32B245E584C6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void AnimateContainer(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.AnimateContainer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Hotfix_Container_Parent(int32_t EntryPoint); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ExecuteUbergraph_Hotfix_Container_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

