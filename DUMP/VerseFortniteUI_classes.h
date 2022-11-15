// Class VerseFortniteUI.VerseFortniteUINamedSlot
// Size: 0x180 (Inherited: 0x170)
struct UVerseFortniteUINamedSlot : UNamedSlot {
	char pad_170[0x10]; // 0x170(0x10)
};

// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
// Size: 0x3b8 (Inherited: 0x3a8)
struct UVerseFortniteUIActivableWidgetBase : UCommonActivatableWidget {
	struct UVerseFortniteUINamedSlot* MainSlot; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
// Size: 0xb0 (Inherited: 0x80)
struct UVerseFortniteUIFrameworkButton_Base : UUIFrameworkWidget {
	struct FText Text; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetText(struct FText Text); // Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.SetText // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a4d8
	void ServerClick(); // Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x161715c
	void OnRep_Text(); // Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Text // (Final|Native|Private) // @ game+0x73038cc
	struct FText GetText(); // Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a04c
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkButton_Loud : UVerseFortniteUIFrameworkButton_Base {
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkButton_Regular : UVerseFortniteUIFrameworkButton_Base {
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkButton_Quiet : UVerseFortniteUIFrameworkButton_Base {
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
// Size: 0xb0 (Inherited: 0x80)
struct UVerseFortniteUIFrameworkText_Base : UUIFrameworkWidget {
	struct FText Text; // 0x80(0x18)
	char pad_98[0x18]; // 0x98(0x18)

	void SetText(struct FText Text); // Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.SetText // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x640a4d8
	void ServerTextCommitted(struct FText NewText); // Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x7303920
	void OnRep_Text(); // Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.OnRep_Text // (Final|Native|Private) // @ game+0x73038f0
	struct FText GetText(); // Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a04c
	void ExecuteServerTextCommitted(struct FText& Text, enum class ETextCommit CommitMethod); // Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted // (Final|Native|Protected|HasOutParms) // @ game+0x73037e0
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkTextBlock : UVerseFortniteUIFrameworkText_Base {
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkEditableText : UVerseFortniteUIFrameworkText_Base {
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
// Size: 0xb0 (Inherited: 0xb0)
struct UVerseFortniteUIFrameworkEditableTextBox : UVerseFortniteUIFrameworkText_Base {
};

