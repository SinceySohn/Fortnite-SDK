// Class GameplayStateMachine.GameplayState
// Size: 0x78 (Inherited: 0x28)
struct UGameplayState : UObject {
	struct FGameplayTag StateId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FGameplayTagContainer StateRuntimeTags; // 0x30(0x20)
	bool bEvaluateTransition; // 0x50(0x01)
	bool bReplicates; // 0x51(0x01)
	bool bStateBegun; // 0x52(0x01)
	bool bStateEnded; // 0x53(0x01)
	float InitializationServerTime; // 0x54(0x04)
	float BeginStateDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UGameplayStateMachine* CachedGameplayStateMachine; // 0x60(0x08)
	struct UGameplayStateMachineManager* CachedStateMachineManager; // 0x68(0x08)
	struct UGameplayState* Hack_StateToDelayProcess; // 0x70(0x08)

	void UpdateStateEventServer(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventServer // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateStateEventClient(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventClient // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateStateEvent(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEvent // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void RemoveStateRuntimeTag(struct FGameplayTag& RemovedTag); // Function GameplayStateMachine.GameplayState.RemoveStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6923580
	void MarkStateToEvaluateTransitions(); // Function GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions // (Final|Native|Public|BlueprintCallable) // @ game+0x6923558
	void InitializeStateEventServer(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void InitializeStateEventClient(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void InitializeStateEvent(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	bool HasStateRuntimeTag(struct FGameplayTag& QueryTag); // Function GameplayStateMachine.GameplayState.HasStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x692342c
	bool HasAuthority(); // Function GameplayStateMachine.GameplayState.HasAuthority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6923408
	struct FGameplayTagContainer GetStateRuntimeTags(); // Function GameplayStateMachine.GameplayState.GetStateRuntimeTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69233ec
	struct FGameplayTag GetStateId(); // Function GameplayStateMachine.GameplayState.GetStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69233c0
	struct AActor* GetOwningActor(); // Function GameplayStateMachine.GameplayState.GetOwningActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x692339c
	struct UGameplayStateMachine* GetGameplayStateMachine(); // Function GameplayStateMachine.GameplayState.GetGameplayStateMachine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6923384
	void EndStateEventServer(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void EndStateEventClient(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void EndStateEvent(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BeginStateEventServer(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BeginStateEventClient(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BeginStateEvent(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AddStateRuntimeTag(struct FGameplayTag& AddedTag); // Function GameplayStateMachine.GameplayState.AddStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69232a0
};

// Class GameplayStateMachine.GameplayStateMachine
// Size: 0xc8 (Inherited: 0x78)
struct UGameplayStateMachine : UGameplayState {
	char pad_78[0x18]; // 0x78(0x18)
	struct FGameplayTag StateMachineId; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FActiveGameplayStateData ActiveGameplayStateData; // 0x98(0x18)
	struct TArray<struct FGameplayStateSettings> GameplayStateSettings; // 0xb0(0x10)
	struct FGameplayTag InitialGameplayStateId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	void SetState(struct FGameplayTag& InStateId, float InBeginStateDelay); // Function GameplayStateMachine.GameplayStateMachine.SetState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6923610
	void OnRep_ActiveGameplayStateData(); // Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData // (Final|Native|Private) // @ game+0x692356c
	struct FGameplayTag GetStateMachineId(); // Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69233d4
	struct UGameplayState* GetActiveStateObject(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x692336c
	struct FGameplayTag GetActiveStateId(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6923344
	void EvaluateStateTransition(); // Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition // (Native|Event|Protected|BlueprintEvent) // @ game+0x692332c
};

// Class GameplayStateMachine.GameplayStateMachineManager
// Size: 0x1c0 (Inherited: 0xa0)
struct UGameplayStateMachineManager : UActorComponent {
	struct FGameplayStateMachineArray StateMachineList; // 0xa0(0x120)
};

