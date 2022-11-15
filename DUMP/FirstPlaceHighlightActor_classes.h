// BlueprintGeneratedClass FirstPlaceHighlightActor.FirstPlaceHighlightActor_C
// Size: 0x2b8 (Inherited: 0x2a0)
struct AFirstPlaceHighlightActor_C : AFortSpectatorPlayerHighlighter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* FirstPlacePlayerMaterialInstance; // 0x2b0(0x08)

	void UserConstructionScript(); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FirstPlaceHighlightEnabledChanged(bool bInFirstPlaceHighlightEnabled); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.FirstPlaceHighlightEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayerTeamColorChanged(struct FLinearColor& TeamColor); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.PlayerTeamColorChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SpectatorCameraTypeChanged(enum class ESpectatorCameraType NewCameraType); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.SpectatorCameraTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BeingFollowedBySpectatorCamChanged(bool bInBeingFollowedBySpectatorCam); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.BeingFollowedBySpectatorCamChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FirstPlaceHighlightActor(int32_t EntryPoint); // Function FirstPlaceHighlightActor.FirstPlaceHighlightActor_C.ExecuteUbergraph_FirstPlaceHighlightActor // (Final|UbergraphFunction) // @ game+0xdef49c
};

