// Enum UIFramework.EUIFrameworkGameLayerType
enum class EUIFrameworkGameLayerType : uint8 {
	Viewport = 0,
	PlayerScreen = 1,
	EUIFrameworkGameLayerType_MAX = 2
};

// ScriptStruct UIFramework.UIFrameworkSlotBase
// Size: 0x28 (Inherited: 0x0c)
struct FUIFrameworkSlotBase : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UUIFrameworkWidget* Widget; // 0x10(0x08)
	struct FUIFrameworkWidgetId WidgetId; // 0x18(0x08)
	struct FUIFrameworkWidgetId LocalPreviousWidgetId; // 0x20(0x08)
};

// ScriptStruct UIFramework.UIFrameworkWidgetId
// Size: 0x08 (Inherited: 0x00)
struct FUIFrameworkWidgetId {
	int64_t Key; // 0x00(0x08)
};

// ScriptStruct UIFramework.UIFrameworkCanvasBoxSlot
// Size: 0x70 (Inherited: 0x28)
struct FUIFrameworkCanvasBoxSlot : FUIFrameworkSlotBase {
	struct Fanchors anchors; // 0x28(0x20)
	struct Fmargin Offsets; // 0x48(0x10)
	struct FVector2D Alignment; // 0x58(0x10)
	int32_t ZOrder; // 0x68(0x04)
	bool bSizeToContent; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct UIFramework.UIFrameworkCanvasBoxSlotList
// Size: 0x120 (Inherited: 0x108)
struct FUIFrameworkCanvasBoxSlotList : FFastArraySerializer {
	struct TArray<struct FUIFrameworkCanvasBoxSlot> Slots; // 0x108(0x10)
	struct UUIFrameworkCanvasBox* Owner; // 0x118(0x08)
};

// ScriptStruct UIFramework.UIFrameworkSimpleEventArgument
// Size: 0x10 (Inherited: 0x00)
struct FUIFrameworkSimpleEventArgument {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct UUIFrameworkWidget* Sender; // 0x08(0x08)
};

// ScriptStruct UIFramework.UIFrameworkClickEventArgument
// Size: 0x10 (Inherited: 0x10)
struct FUIFrameworkClickEventArgument : FUIFrameworkSimpleEventArgument {
};

// ScriptStruct UIFramework.UIFrameworkParentWidget
// Size: 0x10 (Inherited: 0x00)
struct FUIFrameworkParentWidget {
	struct UObject* Parent; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct UIFramework.UIFrameworkGameLayerSlot
// Size: 0x30 (Inherited: 0x28)
struct FUIFrameworkGameLayerSlot : FUIFrameworkSlotBase {
	int32_t ZOrder; // 0x28(0x04)
	enum class EUIFrameworkGameLayerType Type; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct UIFramework.UIFrameworkGameLayerSlotList
// Size: 0x120 (Inherited: 0x108)
struct FUIFrameworkGameLayerSlotList : FFastArraySerializer {
	struct TArray<struct FUIFrameworkGameLayerSlot> Entries; // 0x108(0x10)
	struct UUIFrameworkPlayerComponent* Owner; // 0x118(0x08)
};

// ScriptStruct UIFramework.UIFrameworkSimpleSlot
// Size: 0x40 (Inherited: 0x28)
struct FUIFrameworkSimpleSlot : FUIFrameworkSlotBase {
	struct Fmargin Padding; // 0x28(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct UIFramework.UIFrameworkStackBoxSlot
// Size: 0x48 (Inherited: 0x28)
struct FUIFrameworkStackBoxSlot : FUIFrameworkSlotBase {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x28(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct Fmargin Padding; // 0x2c(0x10)
	struct FSlateChildSize Size; // 0x3c(0x08)
	int32_t Index; // 0x44(0x04)
};

// ScriptStruct UIFramework.UIFrameworkStackBoxSlotList
// Size: 0x120 (Inherited: 0x108)
struct FUIFrameworkStackBoxSlotList : FFastArraySerializer {
	struct TArray<struct FUIFrameworkStackBoxSlot> Slots; // 0x108(0x10)
	struct UUIFrameworkStackBox* Owner; // 0x118(0x08)
};

// ScriptStruct UIFramework.UIFrameworkWidgetTreeEntry
// Size: 0x30 (Inherited: 0x0c)
struct FUIFrameworkWidgetTreeEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UUIFrameworkWidget* Parent; // 0x10(0x08)
	struct UUIFrameworkWidget* Child; // 0x18(0x08)
	struct FUIFrameworkWidgetId ParentId; // 0x20(0x08)
	struct FUIFrameworkWidgetId ChildId; // 0x28(0x08)
};

// ScriptStruct UIFramework.UIFrameworkWidgetTree
// Size: 0x1c8 (Inherited: 0x108)
struct FUIFrameworkWidgetTree : FFastArraySerializer {
	struct TArray<struct FUIFrameworkWidgetTreeEntry> Entries; // 0x108(0x10)
	struct AActor* ReplicatedOwner; // 0x118(0x08)
	char pad_120[0xa8]; // 0x120(0xa8)
};

