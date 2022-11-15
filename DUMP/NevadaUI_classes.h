// Class NevadaUI.FortNevadaVehicleReticle
// Size: 0x4e0 (Inherited: 0x438)
struct UFortNevadaVehicleReticle : UFortAthenaVehicleDashboardWidget {
	struct UNevadaTargetIndicator* NevadaTargetIndicatorClass; // 0x438(0x08)
	struct UNevadaTargetIndicator* TargetIndicator; // 0x440(0x08)
	struct AFortNevadaVehicle* OwningNevadaVehicle; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)
	struct FUserWidgetPool IndicatorPool; // 0x458(0x88)

	void OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState); // Function NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamEnabledChanged(bool bEnabled); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamDetached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamDeactivated(float Cooldown); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamChargeStarted(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamAttached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamActivated(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnergyCanonFired(float Cooldown); // Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnergyCannonEnabledChanged(bool bEnabled); // Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBatteryChanged(float BatteryLevel); // Function NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class NevadaUI.NevadaTargetIndicator
// Size: 0x370 (Inherited: 0x370)
struct UNevadaTargetIndicator : UFortActorIndicatorWidget {

	void OnTractorBeamAttached(bool bAttached); // Function NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTractorBeamActivated(bool bActivated); // Function NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

