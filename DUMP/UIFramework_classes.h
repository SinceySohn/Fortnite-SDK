// Class UIFramework.UIFrameworkWidget
// Size: 0x80 (Inherited: 0x28)
struct UUIFrameworkWidget : UObject {
	bool bIsEnabled; // 0x28(0x01)
	enum class ESlateVisibility Visibility; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TSoftClassPtr<UObject> WidgetClass; // 0x30(0x28)
	struct FUIFrameworkWidgetId ID; // 0x58(0x08)
	struct UUIFrameworkPlayerComponent* OwnerPlayerComponent; // 0x60(0x08)
	struct FUIFrameworkParentWidget AuthorityParent; // 0x68(0x10)
	struct UWidget* LocalUMGWidget; // 0x78(0x08)

	void OnRep_Visibility(); // Function UIFramework.UIFrameworkWidget.OnRep_Visibility // (Final|Native|Private) // @ game+0x640a228
	void OnRep_IsEnabled(); // Function UIFramework.UIFrameworkWidget.OnRep_IsEnabled // (Final|Native|Private) // @ game+0x640a0c8
};

// Class UIFramework.UIFrameworkButton
// Size: 0xd8 (Inherited: 0x80)
struct UUIFrameworkButton : UUIFrameworkWidget {
	char pad_80[0x18]; // 0x80(0x18)
	struct FUIFrameworkSimpleSlot Slot; // 0x98(0x40)

	void SetContent(struct FUIFrameworkSimpleSlot Content); // Function UIFramework.UIFrameworkButton.SetContent // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a3d8
	void ServerClick(); // Function UIFramework.UIFrameworkButton.ServerClick // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x161715c
	void OnRep_Slot(); // Function UIFramework.UIFrameworkButton.OnRep_Slot // (Final|Native|Private) // @ game+0x640a14c
	struct FUIFrameworkSimpleSlot GetContent(); // Function UIFramework.UIFrameworkButton.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6409fd4
};

// Class UIFramework.UIFrameworkCanvasBox
// Size: 0x1a0 (Inherited: 0x80)
struct UUIFrameworkCanvasBox : UUIFrameworkWidget {
	struct FUIFrameworkCanvasBoxSlotList ReplicatedSlotList; // 0x80(0x120)

	void RemoveWidget(struct UUIFrameworkWidget* Widget); // Function UIFramework.UIFrameworkCanvasBox.RemoveWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a258
	void AddWidget(struct FUIFrameworkCanvasBoxSlot Widget); // Function UIFramework.UIFrameworkCanvasBox.AddWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6409c8c
};

// Class UIFramework.UIFrameworkPlayerComponent
// Size: 0x488 (Inherited: 0xa0)
struct UUIFrameworkPlayerComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FUIFrameworkGameLayerSlotList RootList; // 0xa8(0x120)
	struct FUIFrameworkWidgetTree WidgetTree; // 0x1c8(0x1c8)
	struct TSet<int32_t> NetReplicationPending; // 0x390(0x50)
	struct TSet<int32_t> AddPending; // 0x3e0(0x50)
	char pad_430[0x58]; // 0x430(0x58)

	void RemoveWidget(struct UUIFrameworkWidget* Widget); // Function UIFramework.UIFrameworkPlayerComponent.RemoveWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a2d8
	void AddWidget(struct FUIFrameworkGameLayerSlot Widget); // Function UIFramework.UIFrameworkPlayerComponent.AddWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6409dd0
};

// Class UIFramework.UIFrameworkSimpleButton
// Size: 0xb0 (Inherited: 0x80)
struct UUIFrameworkSimpleButton : UUIFrameworkWidget {
	struct FText Text; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetText(struct FText Text); // Function UIFramework.UIFrameworkSimpleButton.SetText // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a4d8
	void ServerClick(); // Function UIFramework.UIFrameworkSimpleButton.ServerClick // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x161715c
	void OnRep_Text(); // Function UIFramework.UIFrameworkSimpleButton.OnRep_Text // (Final|Native|Private) // @ game+0x640a160
	struct FText GetText(); // Function UIFramework.UIFrameworkSimpleButton.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a04c
};

// Class UIFramework.UIFrameworkSimpleButtonUserWidget
// Size: 0x278 (Inherited: 0x268)
struct UUIFrameworkSimpleButtonUserWidget : UUserWidget {
	struct UTextBlock* TextBlock; // 0x268(0x08)
	struct UButton* Button; // 0x270(0x08)
};

// Class UIFramework.UIFrameworkStackBox
// Size: 0x1a8 (Inherited: 0x80)
struct UUIFrameworkStackBox : UUIFrameworkWidget {
	enum class EOrientation Orientation; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FUIFrameworkStackBoxSlotList ReplicatedSlotList; // 0x88(0x120)

	void RemoveWidget(struct UUIFrameworkWidget* Widget); // Function UIFramework.UIFrameworkStackBox.RemoveWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a358
	void OnRep_Orientation(); // Function UIFramework.UIFrameworkStackBox.OnRep_Orientation // (Final|Native|Private) // @ game+0x640a0f8
	void AddWidget(struct FUIFrameworkStackBoxSlot Widget); // Function UIFramework.UIFrameworkStackBox.AddWidget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6409ebc
};

// Class UIFramework.UIFrameworkTextBlock
// Size: 0x98 (Inherited: 0x80)
struct UUIFrameworkTextBlock : UUIFrameworkWidget {
	struct FText Text; // 0x80(0x18)

	void SetText(struct FText Text); // Function UIFramework.UIFrameworkTextBlock.SetText // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a4d8
	void OnRep_Text(); // Function UIFramework.UIFrameworkTextBlock.OnRep_Text // (Final|Native|Private) // @ game+0x640a1c8
	struct FText GetText(); // Function UIFramework.UIFrameworkTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a04c
};

