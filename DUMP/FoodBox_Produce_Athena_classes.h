// BlueprintGeneratedClass FoodBox_Produce_Athena.FoodBox_Produce_Athena_C
// Size: 0x11b8 (Inherited: 0x1198)
struct AFoodBox_Produce_Athena_C : AHotfix_Container_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1198(0x08)
	struct UArrowComponent* LootDropDirection; // 0x11a0(0x08)
	float Timeline_0_Time_4EA7087F4D010481DFB08B88C8FF8FEB; // 0x11a8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4EA7087F4D010481DFB08B88C8FF8FEB; // 0x11ac(0x01)
	char pad_11AD[0x3]; // 0x11ad(0x03)
	struct UTimelineComponent* ; // 0x11b0(0x08)

	void UserConstructionScript(); // Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoot(); // Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FoodBox_Produce_Athena(int32_t EntryPoint); // Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.ExecuteUbergraph_FoodBox_Produce_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

