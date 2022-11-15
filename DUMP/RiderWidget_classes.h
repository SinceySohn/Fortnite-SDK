// WidgetBlueprintGeneratedClass RiderWidget.RiderWidget_C
// Size: 0x419 (Inherited: 0x2d0)
struct URiderWidget_C : UFortHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* A_BoostCompletedAnim; // 0x2d8(0x08)
	struct UWidgetAnimation* A_BoostStartedAnim; // 0x2e0(0x08)
	struct UWidgetAnimation* A_LowAnim; // 0x2e8(0x08)
	struct UWidgetAnimation* A_FullBarAnim; // 0x2f0(0x08)
	struct UImage* BoostGlow; // 0x2f8(0x08)
	struct UBorder* BoostGlowBorder; // 0x300(0x08)
	struct UCommonTextBlock* CurrentValue; // 0x308(0x08)
	struct UImage* DeltaBar; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UImage* EmptyStatusGlow; // 0x320(0x08)
	struct UImage* FillBar; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UHorizontalBox* ; // 0x338(0x08)
	struct UImage* Image_LargeCone; // 0x340(0x08)
	struct UImage* Image_Sparks; // 0x348(0x08)
	struct UImage* ; // 0x350(0x08)
	struct UOverlay* Overlay_BoostSparks; // 0x358(0x08)
	struct UOverlay* Overlay_Stats; // 0x360(0x08)
	struct USizeBox* SizeBox_Health; // 0x368(0x08)
	struct USizeBox* SizeBox_Progress; // 0x370(0x08)
	struct UImage* SprintIcon; // 0x378(0x08)
	struct UCommonTagVisibilityWidget* TagVisibility_HealthValue; // 0x380(0x08)
	struct UMaterialInstanceDynamic* CahcedProgressDynamicMat; // 0x388(0x08)
	double LowEnergyThreshold; // 0x390(0x08)
	double CachedCurrentEnergy; // 0x398(0x08)
	double PrevEnergy; // 0x3a0(0x08)
	double Anim_DeltaThreshold; // 0x3a8(0x08)
	struct FTimerHandle EmptyEnergyDelta_Handle; // 0x3b0(0x08)
	struct UPlayerRiderComponent_C* PlayerRiderComponentRef; // 0x3b8(0x08)
	double PrevHealth; // 0x3c0(0x08)
	struct FTimerHandle EmptyHealthDelta_Handle; // 0x3c8(0x08)
	double EnergyDeltaDecayDelay; // 0x3d0(0x08)
	double HealthDeltaDecayDelay; // 0x3d8(0x08)
	struct AFortPawn* AIPawn; // 0x3e0(0x08)
	double CooldownStartTime; // 0x3e8(0x08)
	struct FLinearColor ColorStart; // 0x3f0(0x10)
	struct FGameplayTag SprintingAbilityTag; // 0x400(0x04)
	bool IsListeningForSprint; // 0x404(0x01)
	bool IsListeningForSprintStopped; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	struct UAbilityAsync_WaitGameplayTagAdded* WaitingForSprint; // 0x408(0x08)
	struct UAbilityAsync_WaitGameplayTagRemoved* WaitingForSprintStopped; // 0x410(0x08)
	bool IsBoostingState; // 0x418(0x01)

	void SetupEventBinds(); // Function RiderWidget.RiderWidget_C.SetupEventBinds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateBoostEffect(double ProgressRatio); // Function RiderWidget.RiderWidget_C.UpdateBoostEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearOldBindings(); // Function RiderWidget.RiderWidget_C.ClearOldBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHealthValue(double Value); // Function RiderWidget.RiderWidget_C.SetHealthValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOvershieldVisibilityChanged(bool IsVisible); // Function RiderWidget.RiderWidget_C.OnOvershieldVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateEnergy(double Value); // Function RiderWidget.RiderWidget_C.UpdateEnergy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateHealth(double Value); // Function RiderWidget.RiderWidget_C.UpdateHealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryPlayingLowState(struct UWidgetAnimation* InAnimation); // Function RiderWidget.RiderWidget_C.TryPlayingLowState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateHealthDelta(); // Function RiderWidget.RiderWidget_C.UpdateHealthDelta // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EmptyEnergyDelta(); // Function RiderWidget.RiderWidget_C.EmptyEnergyDelta // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Delta(struct UImage* Target, double CurrentValue, double PreviousValue, double Threshold, struct FString FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle& TimerHandleRef); // Function RiderWidget.RiderWidget_C.Set Delta // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetProgressBar(double Value, struct UImage* TargetFillBar, struct UImage* DeltaBar, double PreviousValue, double Threshold, struct FString FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle& DeltaTimerHandle); // Function RiderWidget.RiderWidget_C.SetProgressBar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_2725D3654E4B103B624310B5CBD4B008(); // Function RiderWidget.RiderWidget_C.Removed_2725D3654E4B103B624310B5CBD4B008 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_2054A51646A7A04B3C1966AECE2DA459(); // Function RiderWidget.RiderWidget_C.Added_2054A51646A7A04B3C1966AECE2DA459 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Finished_357CBEA140721428C88288A0127368B0(); // Function RiderWidget.RiderWidget_C.Finished_357CBEA140721428C88288A0127368B0 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function RiderWidget.RiderWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRiderUINewStats(struct FText Name, struct FSlateBrush Icon, struct AActor* RidableActor); // Function RiderWidget.RiderWidget_C.OnRiderUINewStats // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRiderUIEnd(struct AActor* RidableActor); // Function RiderWidget.RiderWidget_C.OnRiderUIEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitRiderWidget(); // Function RiderWidget.RiderWidget_C.InitRiderWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function RiderWidget.RiderWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function RiderWidget.RiderWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RiderUIEnergyChanged(double Energy); // Function RiderWidget.RiderWidget_C.RiderUIEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RiderUIHealthChanged(double Health); // Function RiderWidget.RiderWidget_C.RiderUIHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSprintStarted(); // Function RiderWidget.RiderWidget_C.OnSprintStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSprintStopped(); // Function RiderWidget.RiderWidget_C.OnSprintStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBoostAnim(bool IsBoosting); // Function RiderWidget.RiderWidget_C.SetBoostAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ListenToSprintEvents(bool ListenForSprinting); // Function RiderWidget.RiderWidget_C.ListenToSprintEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RiderWidget(int32_t EntryPoint); // Function RiderWidget.RiderWidget_C.ExecuteUbergraph_RiderWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

