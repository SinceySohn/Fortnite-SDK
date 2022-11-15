// BlueprintGeneratedClass BP_StormMeshRotator.BP_StormMeshRotator_C
// Size: 0x2db (Inherited: 0x288)
struct ABP_StormMeshRotator_C : AFortStormRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* Sphere; // 0x290(0x08)
	struct UStaticMeshComponent* stormCircleLowerSheet; // 0x298(0x08)
	struct UStaticMeshComponent* SM_stormCircleTopRim; // 0x2a0(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_stormCircleNew; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	double RotationSpeed; // 0x2c0(0x08)
	double BoundsScale; // 0x2c8(0x08)
	double StormProgression; // 0x2d0(0x08)
	bool TestStorm; // 0x2d8(0x01)
	bool isMobileStormEnabled; // 0x2d9(0x01)
	bool areStormEffectsEnabled; // 0x2da(0x01)

	void getSphereEnabled(bool& Enabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.getSphereEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void handleCvarChanged(struct FString CVarName); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.handleCvarChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void initializeMobileStormSphere(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.initializeMobileStormSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void setStormMeshVisibility(bool bEnabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.setStormMeshVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetStormProgression(double Progression); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.SetStormProgression // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStormEffectsEnabled(bool bEnabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_StormMeshRotator(int32_t EntryPoint); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator // (Final|UbergraphFunction) // @ game+0xdef49c
};

