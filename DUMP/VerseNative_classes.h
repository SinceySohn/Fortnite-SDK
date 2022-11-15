// VerseClass VerseNative.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseNative.awaitable(t)
// Size: 0x28 (Inherited: 0x28)
struct Uawaitable(t) : UObject {

	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.awaitable(t).Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass VerseNative.Concurrency
// Size: 0x28 (Inherited: 0x28)
struct UConcurrency : UObject {

	struct UObject* _L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nany_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct UObject* _L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Nany_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Nany_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct UObject* _L_2fVerse_2eorg_2fConcurrency_N_Rawaitable(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rawaitable // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNative.Concurrency.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNative.mind
// Size: 0x68 (Inherited: 0x28)
struct Umind : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	VerseFunctionProperty __verse_0xE74E38D8__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll; // 0x38(0x10)
	VerseFunctionProperty __verse_0x54B91EA0__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive; // 0x28(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	int64_t _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5d019c4
	void _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll // (Native|Public|BlueprintCallable) // @ game+0x5d019bc
	void $InitInstance(); // Function VerseNative.mind.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseNative.mind.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNative.mind.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNative.Native
// Size: 0x28 (Inherited: 0x28)
struct UNative : UObject {

	void $InitCDO(); // Function VerseNative.Native.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNative.task(t)
// Size: 0x148 (Inherited: 0x28)
struct Utask(t) : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	VerseFunctionProperty __verse_0xBD7FB920__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive; // 0x38(0x10)
	char pad_48[0x70]; // 0x48(0x70)
	VerseFunctionProperty __verse_0xAFD0D344__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel; // 0xb8(0x10)
	VerseFunctionProperty __verse_0xFE8CA748__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelled; // 0x68(0x10)
	VerseFunctionProperty __verse_0x1321A804__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelling; // 0x58(0x10)
	VerseFunctionProperty __verse_0x8F0684E8__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted; // 0x48(0x10)
	VerseFunctionProperty __verse_0x2C72A17D__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted; // 0xa8(0x10)
	VerseFunctionProperty __verse_0xBB33978A__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled; // 0x88(0x10)
	VerseFunctionProperty __verse_0x07A4A432__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted; // 0x98(0x10)
	VerseFunctionProperty __verse_0x2C6C9D8A__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled; // 0x78(0x10)
	VerseFunctionProperty __verse_0x8DE7DBE5_Await; // 0xc8(0x10)

	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c98508
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c98500
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984f8
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984f0
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984e8
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelling(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelling // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984e0
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancelled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984d8
	void _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel // (Native|Public|BlueprintCallable) // @ game+0x5c984d0
	struct Utask(t)* Await(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t).Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(t)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c984c8
	void $InitInstance(); // Function VerseNative.task(t).$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseNative.task(t).$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseNative.task(t).$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseNative.task_awaitable(t)$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_awaitable(t)$Await : Utask(t) {
	struct Uawaitable(t)* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseNative.task_awaitable(t)$Await.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass VerseNative.task_task(t)$Await
// Size: 0x168 (Inherited: 0x148)
struct Utask_task(t)$Await : Utask(t) {
	struct Utask(t)* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty _RetVal; // 0x158(0x10)

	int64_t Update(); // Function VerseNative.task_task(t)$Await.Update // (Native|Public|HasOutParms) // @ game+0x5c98460
};

