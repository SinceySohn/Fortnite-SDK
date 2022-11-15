// UserDefinedStruct LiquidGun_Detachment.LiquidGun_Detachment
// Size: 0xf8 (Inherited: 0x00)
struct FLiquidGun_Detachment {
	int32_t FirstRibbonID_6_D38B49C548211254B7303E91CC87C3D0; // 0x00(0x04)
	int32_t SecondRibbonID_7_5DCD0DA94598430C7A3AE389F35C563C; // 0x04(0x04)
	double TimeWhenDetached_10_466CCA0F4E3B02ACAF08C39264B1976A; // 0x08(0x08)
	struct FLiquidRibbonSplineSegment Segment_25_D2B36ED04B9565D0469A36B1BA847AB6; // 0x10(0x78)
	struct FVector SegmentBeginning_16_66B4E98B4755AD97CA3F179663BB8A22; // 0x88(0x18)
	struct FVector SegmentEnd_18_2208CFE047D7B1790A1862865F202F17; // 0xa0(0x18)
	struct FVector BeginningOffset_23_528BD01D42526DA38EC796A05F8EE613; // 0xb8(0x18)
	struct FVector EndOffset_24_97559EFD481C34704E63A99F8BE7BCD1; // 0xd0(0x18)
	bool Stopped_27_E83F22F7476405FD65089583C245327B; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	double TimeWhenStopped_30_03E4DC674B43218787838DAA27E91DA1; // 0xf0(0x08)
};

