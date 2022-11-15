// VerseClass VerseGameplayTags.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseGameplayTags.tag
// Size: 0x28 (Inherited: 0x28)
struct Utag : UVerseGameplayTagBase {

	void $InitInstance(); // Function VerseGameplayTags.tag.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseGameplayTags.tag.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseGameplayTags.tag.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseGameplayTags.tag_container
// Size: 0x108 (Inherited: 0x38)
struct Utag_container : UVerseGameplayTagContainerBase {
	VerseFunctionProperty __verse_0x57075686__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAddTag_L_Ntag_R; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	VerseFunctionProperty __verse_0x15846E2A__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAppendTags_L_Ntag__container_R; // 0x58(0x10)
	char pad_68[0x70]; // 0x68(0x70)
	VerseFunctionProperty __verse_0x73667319__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAll_L_Ntag__container_R; // 0xd8(0x10)
	VerseFunctionProperty __verse_0xE4766A36__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAllExact_L_Ntag__container_R; // 0xe8(0x10)
	VerseFunctionProperty __verse_0xC4CCE8FF__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAny_L_Ntag__container_R; // 0xb8(0x10)
	VerseFunctionProperty __verse_0x5C3C2794__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAnyExact_L_Ntag__container_R; // 0xc8(0x10)
	VerseFunctionProperty __verse_0x9993002B__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTag_L_Ntag_R; // 0x98(0x10)
	VerseFunctionProperty __verse_0x3C556F68__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTagExact_L_Ntag_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0x5DCAADF9__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum; // 0xf8(0x10)
	VerseFunctionProperty __verse_0xD1B7180A__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTag_L_Ntag_R; // 0x48(0x10)
	VerseFunctionProperty __verse_0x5ACF9AF9__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTags_L_Ntag__container_R; // 0x68(0x10)
	VerseFunctionProperty __verse_0x01C6626F__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset; // 0x78(0x10)
	VerseFunctionProperty __verse_0x7955A9D1__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R; // 0x88(0x10)

	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x60156a8
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset // (Native|Public|BlueprintCallable) // @ game+0x60156b0
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTags_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTags_L_Ntag__container_R // (Native|Public|BlueprintCallable) // @ game+0x60156a0
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemoveTag_L_Ntag_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015698
	int64_t _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015690
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTagExact_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTagExact_L_Ntag_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015680
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasTag_L_Ntag_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015688
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAnyExact_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAnyExact_L_Ntag__container_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015670
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAny_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAny_L_Ntag__container_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015678
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAllExact_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAllExact_L_Ntag__container_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015660
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAll_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RHasAll_L_Ntag__container_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6015668
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAppendTags_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAppendTags_L_Ntag__container_R // (Native|Public|BlueprintCallable) // @ game+0x6015658
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAddTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAddTag_L_Ntag_R // (Native|Public|BlueprintCallable) // @ game+0x6015650
	void $InitInstance(); // Function VerseGameplayTags.tag_container.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseGameplayTags.tag_container.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseGameplayTags.tag_container.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseGameplayTags.tag_container_component
// Size: 0xb8 (Inherited: 0x78)
struct Utag_container_component : UEntityTagContainerComponent {
	char pad_78[0x20]; // 0x78(0x20)
	VerseFunctionProperty __verse_0x78A18B3B__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R; // 0x98(0x10)
	VerseFunctionProperty __verse_0xCE39A097__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags; // 0x78(0x10)
	VerseFunctionProperty __verse_0x60A0B16A__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0x4182B069__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R; // 0x88(0x10)

	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R // (Native|Public|BlueprintCallable) // @ game+0x63a7020
	char _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7018
	struct Utag_container* _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7010
	void _L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R // (Native|Public|BlueprintCallable) // @ game+0x63a7008
	void $InitInstance(); // Function VerseGameplayTags.tag_container_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseGameplayTags.tag_container_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseGameplayTags.tag_container_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseGameplayTags.tag_search_criteria
// Size: 0x48 (Inherited: 0x28)
struct Utag_search_criteria : UObject {
	struct Utag_container* __verse_0x4B15ECEC_RequiredTags; // 0x28(0x08)
	struct Utag_container* __verse_0xDC4AEE52_PreferredTags; // 0x30(0x08)
	struct Utag_container* __verse_0x321D6A7B_ExclusionTags; // 0x38(0x08)
	enum class tag_search_sort_type __verse_0xBFD91910_SortType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void $InitInstance(); // Function VerseGameplayTags.tag_search_criteria.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseGameplayTags.tag_search_criteria.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseGameplayTags.tag_search_criteria.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass VerseGameplayTags.Tags
// Size: 0x28 (Inherited: 0x28)
struct UTags : UObject {

	VerseStringProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7070
	VerseStringProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R(struct Utag_container* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7078
	struct Utag_container* _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R(struct TArray<struct Utag*> __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7060
	OptionProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R(struct FVerseGameplayTagContainer __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7068
	OptionProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Ntype_Lany_M_20tag_R_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Ntype_Lany_M_20tag_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7050
	OptionProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R(struct FVerseGameplayTag __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7058
	struct TArray<struct UEntityComponent*> _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R(struct Utag_search_criteria* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7048
	struct TArray<struct UEntityComponent*> _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7040
	OptionProperty _L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7038
	char _L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R(struct Ftuple_Ltag__container_Mtag__container_R __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7030
	char _L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R(struct Ftuple_Ltag_Mtag_R __verse_0xB2CDDD72_Argument); // Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63a7028
	void $InitCDO(); // Function VerseGameplayTags.Tags.$InitCDO // (None) // @ game+0xdef49c
};

