// VerseClass VerseRestricted.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseRestricted.Restricted
// Size: 0x28 (Inherited: 0x28)
struct URestricted : UObject {

	struct UObject* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nany_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct UObject* _L_2fVerse_2eorg_2fRestricted_N_Rsticky__event(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void $InitCDO(); // Function VerseRestricted.Restricted.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseRestricted.sticky_event(t)
// Size: 0xb8 (Inherited: 0x28)
struct Usticky_event(t) : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	VerseFunctionProperty __verse_0xB0B89381__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal; // 0x38(0x10)
	VerseFunctionProperty __verse_0xE92C69BE__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount; // 0x48(0x10)
	VerseFunctionProperty __verse_0xA811AC9B__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled; // 0x28(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0x68(0x10)
	VerseFunctionProperty __verse_0x7260621D__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lt_R_N_RSignal_L_Nt_R; // 0x58(0x10)
	char pad_88[0x30]; // 0x88(0x30)

	void _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lt_R_N_RSignal_L_Nt_R(VerseDynamicProperty __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event(t)._L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lt_R_N_RSignal_L_Nt_R // (Native|Public|BlueprintCallable) // @ game+0x5ff8910
	OptionProperty _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event(t)._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff8908
	int64_t _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event(t)._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff8900
	void _L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event(t)._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal // (Native|Public|BlueprintCallable) // @ game+0x5ff88f8
	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event(t).Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function VerseRestricted.sticky_event(t).$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseRestricted.sticky_event(t).$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseRestricted.sticky_event(t).$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseRestricted.task_sticky_event(t)$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_sticky_event(t)$Await : Utask(t) {
	struct Usticky_event(t)* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseRestricted.task_sticky_event(t)$Await.Update // (Native|Public|HasOutParms) // @ game+0x5ff88f0
};

