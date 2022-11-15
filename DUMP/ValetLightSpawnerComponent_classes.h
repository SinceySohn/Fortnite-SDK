// BlueprintGeneratedClass ValetLightSpawnerComponent.ValetLightSpawnerComponent_C
// Size: 0x150 (Inherited: 0xa0)
struct UValetLightSpawnerComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct TArray<struct USpotLightComponent*> currentLightComponents; // 0xa8(0x10)
	struct FString light_SocketName; // 0xb8(0x10)
	struct UValetSpotLightComponent_C* spotLightClass; // 0xc8(0x08)
	struct TArray<struct FTransform> additionalLightTransforms; // 0xd0(0x10)
	bool ownerIsBeingDriven; // 0xe0(0x01)
	bool lightsNeedValidation; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	int32_t maxLightCount; // 0xe4(0x04)
	int32_t currentCVarValue_EnabledState; // 0xe8(0x04)
	bool areLightsOn; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FTimerHandle timerHandle_validateCarLights; // 0xf0(0x08)
	double myRandomInterval; // 0xf8(0x08)
	struct TSet<struct FName> light_SocketNames; // 0x100(0x50)

	void validateNextFrame(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.validateNextFrame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void validateCvar_EnablePhysicalLights(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.validateCvar_EnablePhysicalLights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handleTimeOfDayChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.handleTimeOfDayChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void validateCarLights(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.validateCarLights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handlePawnExitSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.handlePawnExitSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handlePawnEnterSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.handlePawnEnterSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool shouldLightsBeOn(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.shouldLightsBeOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool isOwnerBeingDriven(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.isOwnerBeingDriven // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void addLight(struct FTransform RelativeTransform, struct FName SocketName); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.addLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool hasAnyLights(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.hasAnyLights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void handleCvarChanged(struct FString CVarName); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.handleCvarChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void clearLights(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.clearLights // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void spawnLights(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.spawnLights // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ValetLightSpawnerComponent(int32_t EntryPoint); // Function ValetLightSpawnerComponent.ValetLightSpawnerComponent_C.ExecuteUbergraph_ValetLightSpawnerComponent // (Final|UbergraphFunction) // @ game+0xdef49c
};

