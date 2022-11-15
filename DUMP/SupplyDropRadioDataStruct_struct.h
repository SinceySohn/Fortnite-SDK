// UserDefinedStruct SupplyDropRadioDataStruct.SupplyDropRadioDataStruct
// Size: 0x130 (Inherited: 0x00)
struct FSupplyDropRadioDataStruct {
	bool bEnabled_35_D6A0BF1343167278DE9FBFB3234277A9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagQuery PlaylistTagsQuery_39_183349BE420E6A9770D562ABF5C5D3EB; // 0x08(0x48)
	struct FGameplayTag GameplayTag_5_542794F64B7B42F5AFFB4F99DE156B3F; // 0x50(0x04)
	int32_t Stock_34_7D54BF96461297E10D7DA1AA8FD4C012; // 0x54(0x04)
	enum class EFortRarity Rarity_12_9F926D724028B6C35969B292DBD09ACE; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FText Name_15_299F1575424B7AC4048B16BE4575858A; // 0x60(0x18)
	struct FText Description_17_79C0439D408E0560B73F5383246A78F6; // 0x78(0x18)
	struct ASupplyDropRadioActorParent_C* SupplyDropRadioActorClass_33_71A3A84043A4401BC875CFA344AAF3DD; // 0x90(0x08)
	struct TSoftObjectPtr<UTexture2D> PreviewImageSoftObj_24_11118FE2450DCE956579768EEFDA200D; // 0x98(0x28)
	struct TSoftObjectPtr<UTexture2D> ChoiceImageSoftObj_29_E219BD914583592495E1F38287CB7341; // 0xc0(0x28)
	struct FGameplayTagContainer QuestTags_44_0A989AC04A6AFB5EFD32CCA67362B3E7; // 0xe8(0x20)
	double FallHeight_47_E26A7B624EA7475B16BAE79339FD145D; // 0x108(0x08)
	double GravityMultiplier_PreOpen_49_9A76CDC14234D269F36B459F31CC1011; // 0x110(0x08)
	double GravityMultiplier_PostOpen_51_BF7A9EE244D825B798B0E3B46418865C; // 0x118(0x08)
	double BalloonOpenedFallSpeed_53_A7105A3C4E29A83513426780577EF185; // 0x120(0x08)
	double DistanceFromOriginalSpawnLocForBalloonOpen_56_B884693E44BCB97A947F1CB9ECADEBF4; // 0x128(0x08)
};

