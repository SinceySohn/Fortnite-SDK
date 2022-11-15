// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UCreativeGameStreamDeviceComponent : UActorComponent {
	struct FMulticastSparseDelegate OnTriggered; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct TWeakObjectPtr<struct UFortMinigameLogicComponent> MinigameLogicComponent; // 0xa4(0x08)
	char pad_AC[0x4]; // 0xac(0x04)

	void RemoveFromEndGameQueue(); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue // (Final|Native|Public|BlueprintCallable) // @ game+0x258f6c0
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged // (Final|Native|Private) // @ game+0x68390a8
	bool IsWithinPublishedPlayspace(); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x236a68c
	void Init(struct UFortMinigameLogicComponent* InMinigameLogicComponent); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x6537ae4
	void CreativeGameStreamDeviceComponentSignature__DelegateSignature(struct UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent); // SparseDelegateFunction CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xdef49c
	void AddToEndGameQueue(); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue // (Final|Native|Public|BlueprintCallable) // @ game+0x258f6c0
};

// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
// Size: 0xb8 (Inherited: 0xa0)
struct UCreativeGameStreamDeviceCoordinatorComponent : UPlayspaceComponent {
	struct TArray<struct TWeakObjectPtr<struct UCreativeGameStreamDeviceComponent>> EndGameCreativeGameStreamDeviceComponentQueue; // 0xa0(0x10)
	struct TWeakObjectPtr<struct AFortMinigame> Minigame; // 0xb0(0x08)

	void OnMinigameStateChanged(struct AFortMinigame* InMinigame, enum class EFortMinigameState NewMinigameState); // Function CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged // (Final|Native|Private) // @ game+0x68390a8
};

