// VerseClass CompanionAI.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass CompanionAI.companion_ai
// Size: 0x3a8 (Inherited: 0x110)
struct Ucompanion_ai : Uai_behavior {
	OptionProperty __verse_0xE1D221D8_NPCMovementInterface; // 0x110(0x08)
	OptionProperty __verse_0x4645AA12_PingActionsInterface; // 0x118(0x08)
	OptionProperty __verse_0x83124E52_NPCActionsInterface; // 0x120(0x08)
	OptionProperty __verse_0xCC490D1F_WeaponActionsInterface; // 0x128(0x08)
	OptionProperty __verse_0x93DA469B_ThreatPerceptionInterface; // 0x130(0x08)
	OptionProperty __verse_0xC410E5F5_ObstaclePerceptionInterface; // 0x138(0x08)
	OptionProperty __verse_0x3F17BA42_HealthInterface; // 0x140(0x08)
	struct Ulog* __verse_0xF524C2AC_Logger; // 0x148(0x08)
	char __verse_0x4222121E_DebugDisplay : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FColor __verse_0x71320F52_DebugScreenColor; // 0x158(0x18)
	double __verse_0x2D4D6684_DebugScreenDuration; // 0x170(0x08)
	double __verse_0x5155C58D_GoToLeashDistance; // 0x178(0x08)
	double __verse_0x4D92C49B_GoToAttackTargetDistance; // 0x180(0x08)
	double __verse_0x8D041DAB_HoldPositionLeashDistance; // 0x188(0x08)
	double __verse_0x5EF17E77_BackToMeMovementThreshold; // 0x190(0x08)
	VerseFunctionProperty __verse_0xFD71F6F9_CrouchService; // 0x198(0x10)
	VerseFunctionProperty __verse_0x42EEAE4C_CrouchUntilHit; // 0x1a8(0x10)
	VerseFunctionProperty __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R; // 0x1b8(0x10)
	VerseFunctionProperty __verse_0xAAC24BD9_GameLoop; // 0x1c8(0x10)
	VerseFunctionProperty __verse_0x0C45B447_GetNewObstacle; // 0x1d8(0x10)
	VerseFunctionProperty __verse_0x70E206A1_GetNewTargetPerception_L_N_Qfort__threat__info_R; // 0x1e8(0x10)
	VerseFunctionProperty __verse_0x0CD61383_GetNewThreat; // 0x1f8(0x10)
	VerseFunctionProperty __verse_0x8CAF1B4F_GetObstacle; // 0x208(0x10)
	VerseFunctionProperty __verse_0x088B6B1E_GetThreat; // 0x218(0x10)
	VerseFunctionProperty __verse_0x55602A55_GoToAndAttackTask_L_Nfort__threat__info_R; // 0x228(0x10)
	VerseFunctionProperty __verse_0x1675E931_GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R; // 0x238(0x10)
	VerseFunctionProperty __verse_0xCDB7A2EB_HandleBackToMeCommand_L_Nping__info_R; // 0x248(0x10)
	VerseFunctionProperty __verse_0xA6BE52A1_HandleGoTo_L_Nping__info_R; // 0x258(0x10)
	VerseFunctionProperty __verse_0xDA8C4382_HandleGoToCommand_L_Nping__info_R; // 0x268(0x10)
	VerseFunctionProperty __verse_0x732222FF_HandleHoldPositionCommand_L_Nping__info_R; // 0x278(0x10)
	VerseFunctionProperty __verse_0x598CA1A6_HandleNPCCommand_L_Nping__info_R; // 0x288(0x10)
	VerseFunctionProperty __verse_0x6FDBE601_HandleObstacleTask_L_N_Qentity_R; // 0x298(0x10)
	VerseFunctionProperty __verse_0x76F49D7B_HandleReviveCommand_L_Nping__info_R; // 0x2a8(0x10)
	VerseFunctionProperty __verse_0x3ED65A6D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R; // 0x2b8(0x10)
	VerseFunctionProperty __verse_0xB0983B50_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R; // 0x2c8(0x10)
	VerseFunctionProperty __verse_0x62AFAEFE_LookAtOrAttackTarget; // 0x2d8(0x10)
	VerseFunctionProperty __verse_0x3F6E3D53_LookAtThreatTask; // 0x2e8(0x10)
	VerseFunctionProperty __verse_0x77AE90F1__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted_L_Nany_R_Nvoid; // 0x2f8(0x10)
	VerseFunctionProperty __verse_0x49F41DF3__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted; // 0x308(0x10)
	VerseFunctionProperty __verse_0xC72BE77D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted_L_Nany_R_Nvoid; // 0x318(0x10)
	VerseFunctionProperty __verse_0x11CAF1E5__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted; // 0x328(0x10)
	VerseFunctionProperty __verse_0xE121C3A4_ReviveCommand_L_Nfort__character_R; // 0x338(0x10)
	VerseFunctionProperty __verse_0xD09E21A2_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R; // 0x348(0x10)
	VerseFunctionProperty __verse_0xDBC1E5D6_ShootTargetService_L_Nfloat_R; // 0x358(0x10)
	VerseFunctionProperty __verse_0xED5B1563_SprintService; // 0x368(0x10)
	VerseFunctionProperty __verse_0x10E1DFC8_TacticalSprintService; // 0x378(0x10)
	VerseFunctionProperty __verse_0xA967E878_WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R; // 0x388(0x10)
	VerseFunctionProperty __verse_0x76BD3EE2_WaitForDamage; // 0x398(0x10)

	struct Utask(t)* WaitForDamage(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.WaitForDamage // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lfort__character_Mfloat_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* TacticalSprintService(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.TacticalSprintService // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* SprintService(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.SprintService // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* ShootTargetService_L_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.ShootTargetService_L_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_Mfloat_Mentity_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* ReviveCommand_L_Nfort__character_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct UObject* __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.ReviveCommand_L_Nfort__character_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted_L_Nany_R_Nvoid(VerseDynamicProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnUnconverted_L_Nany_R_Nvoid // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted_L_Nany_R_Nvoid(VerseDynamicProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_ROnConverted_L_Nany_R_Nvoid // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBegin(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.OnBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LookAtThreatTask(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.LookAtThreatTask // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LookAtOrAttackTarget(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.LookAtOrAttackTarget // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleReviveCommand_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleReviveCommand_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleObstacleTask_L_N_Qentity_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, OptionProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleObstacleTask_L_N_Qentity_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleNPCCommand_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleNPCCommand_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleHoldPositionCommand_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleHoldPositionCommand_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleGoToCommand_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleGoToCommand_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleGoTo_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleGoTo_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* HandleBackToMeCommand_L_Nping__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fping_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.HandleBackToMeCommand_L_Nping__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GoToAndAttackTask_L_Nfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ffort_threat_info __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GoToAndAttackTask_L_Nfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GetThreat(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GetThreat // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GetObstacle(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GetObstacle // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GetNewThreat(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GetNewThreat // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GetNewTargetPerception_L_N_Qfort__threat__info_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, OptionProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GetNewTargetPerception_L_N_Qfort__threat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GetNewObstacle(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GetNewObstacle // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GameLoop(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.GameLoop // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_Mfloat_Mcolor_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* CrouchUntilHit(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.CrouchUntilHit // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* CrouchService(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_ai.CrouchService // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function CompanionAI.companion_ai.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.companion_ai.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.companion_ai.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass CompanionAI.companion_creature
// Size: 0x1b0 (Inherited: 0x110)
struct Ucompanion_creature : Uai_behavior {
	OptionProperty __verse_0x4645AA12_PingActionsInterface; // 0x110(0x08)
	OptionProperty __verse_0xECE2B758_CreatureActionsInterface; // 0x118(0x08)
	OptionProperty __verse_0x9146CB8B_AIMovementInterface; // 0x120(0x08)
	OptionProperty __verse_0x3F17BA42_HealthInterface; // 0x128(0x08)
	struct Ulog* __verse_0xF524C2AC_Logger; // 0x130(0x08)
	char __verse_0x4222121E_DebugDisplay : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FColor __verse_0x71320F52_DebugScreenColor; // 0x140(0x18)
	double __verse_0x2D4D6684_DebugScreenDuration; // 0x158(0x08)
	VerseFunctionProperty __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R; // 0x160(0x10)
	VerseFunctionProperty __verse_0xAAC24BD9_GameLoop; // 0x170(0x10)
	VerseFunctionProperty __verse_0xA3816CC6__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R; // 0x180(0x10)
	VerseFunctionProperty __verse_0x4EF41FF5__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted; // 0x190(0x10)
	VerseFunctionProperty __verse_0xA397BC2D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted; // 0x1a0(0x10)

	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnBegin(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature.OnBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* GameLoop(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature.GameLoop // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_Mfloat_Mcolor_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.companion_creature.DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function CompanionAI.companion_creature.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.companion_creature.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.companion_creature.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass CompanionAI.CompanionAI
// Size: 0x28 (Inherited: 0x28)
struct UCompanionAI : UObject {

	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R(enum class command_type __verse_0xB2CDDD72_Argument); // Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R(enum class entity_type __verse_0xB2CDDD72_Argument); // Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RGetFortCharacter_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RGetFortCharacter_L_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65988c4
	char _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R(struct Ftuple_Lfort__obstacle__info_Mentity_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x65988bc
	struct Fping_info ping_info$Factory(); // Function CompanionAI.CompanionAI.ping_info$Factory // (Static|HasOutParms) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.CompanionAI.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_br_creature_actions_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_br_creature_actions_interface : UObject {

	struct Utask(t)* RunDefaultBehavior(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_br_creature_actions_interface.RunDefaultBehavior // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_br_npc_actions_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_br_npc_actions_interface : UObject {

	struct Utask(t)* RunDefaultBehavior(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_br_npc_actions_interface.RunDefaultBehavior // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_br_npc_movement_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_br_npc_movement_interface : UObject {

	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__npc__movement__interface_N_RSetLeashActor_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_br_npc_movement_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__npc__movement__interface_N_RSetLeashActor_L_Nentity_R // (Public|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_creature_component
// Size: 0x120 (Inherited: 0x110)
struct Ufort_creature_component : Ucreature_component {
	VerseFunctionProperty __verse_0xECDDAB04_RunDefaultBehavior; // 0x110(0x10)

	struct Utask(t)* RunDefaultBehavior(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_creature_component.RunDefaultBehavior // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function CompanionAI.fort_creature_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.fort_creature_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.fort_creature_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_npc_component
// Size: 0x358 (Inherited: 0x338)
struct Ufort_npc_component : Unpc_component {
	VerseFunctionProperty __verse_0xECDDAB04_RunDefaultBehavior; // 0x338(0x10)
	VerseFunctionProperty __verse_0x0D31324F__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__npc__movement__interface_N_RSetLeashActor_L_Nentity_R; // 0x348(0x10)

	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__npc__movement__interface_N_RSetLeashActor_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_npc_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__npc__movement__interface_N_RSetLeashActor_L_Nentity_R // (Native|Public|BlueprintCallable) // @ game+0x6598894
	struct Utask(t)* RunDefaultBehavior(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_npc_component.RunDefaultBehavior // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void $InitInstance(); // Function CompanionAI.fort_npc_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.fort_npc_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.fort_npc_component.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass CompanionAI.fort_ping_interface
// Size: 0x28 (Inherited: 0x28)
struct Ufort_ping_interface : UObject {

	struct UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnNPCCommand(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface.OnNPCCommand // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R // (Public|BlueprintCallable) // @ game+0xdef49c
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R // (Public|BlueprintCallable) // @ game+0xdef49c
	struct UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
};

// VerseClass CompanionAI.log_companion_ai
// Size: 0x28 (Inherited: 0x28)
struct Ulog_companion_ai : Ulog_channel {

	void $InitInstance(); // Function CompanionAI.log_companion_ai.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.log_companion_ai.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.log_companion_ai.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass CompanionAI.log_companion_creature
// Size: 0x28 (Inherited: 0x28)
struct Ulog_companion_creature : Ulog_channel {

	void $InitInstance(); // Function CompanionAI.log_companion_creature.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.log_companion_creature.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.log_companion_creature.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass CompanionAI.ping_component
// Size: 0x118 (Inherited: 0x98)
struct Uping_component : UPingComponentBase {
	char pad_98[0x70]; // 0x98(0x70)
	struct Umulticast_delegate(t)* __verse_0xC18257FD_ConvertedEventInternal; // 0x108(0x08)
	struct Umulticast_delegate(t)* __verse_0x0E297686_UnconvertedEventInternal; // 0x110(0x08)
	VerseFunctionProperty __verse_0x4A0C11E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled; // 0x98(0x10)
	VerseFunctionProperty __verse_0xC34E89EF__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent; // 0xe8(0x10)
	VerseFunctionProperty __verse_0xA8918968__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R; // 0xd8(0x10)
	VerseFunctionProperty __verse_0xFCB4C0C9__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R; // 0xa8(0x10)
	VerseFunctionProperty __verse_0xD6588DA4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand; // 0xb8(0x10)
	VerseFunctionProperty __verse_0x68114BBA_OnNPCCommand; // 0xc8(0x10)
	VerseFunctionProperty __verse_0x19DD9F60__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent; // 0xf8(0x10)

	struct UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	struct Utask(t)* OnNPCCommand(struct Utask(t)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component.OnNPCCommand // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65988b4
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x65988ac
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x65988a4
	struct UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent // (Public|HasOutParms|BlueprintCallable) // @ game+0xdef49c
	char _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function CompanionAI.ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x659889c
	void $InitInstance(); // Function CompanionAI.ping_component.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function CompanionAI.ping_component.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function CompanionAI.ping_component.$InitCDO // (HasDefaults) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$CrouchService
// Size: 0x1b8 (Inherited: 0x148)
struct Utask_companion_ai$CrouchService : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	struct Utask(t)* ; // 0x168(0x08)
	VerseFunctionProperty ; // 0x170(0x10)
	int64_t ; // 0x180(0x08)
	struct UObject* ; // 0x188(0x08)
	VerseFunctionProperty ; // 0x190(0x10)
	struct Ftuple_L_R ; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	VerseFunctionProperty ; // 0x1a8(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$CrouchService.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$CrouchUntilHit
// Size: 0x220 (Inherited: 0x148)
struct Utask_companion_ai$CrouchUntilHit : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class EVerseTrue ; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	VerseFunctionProperty ; // 0x158(0x10)
	VerseStringProperty ; // 0x168(0x10)
	int64_t ; // 0x178(0x08)
	struct Utask(t)* ; // 0x180(0x08)
	VerseFunctionProperty ; // 0x188(0x10)
	struct Ftuple_L_R ; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	int64_t ; // 0x1a0(0x08)
	struct Utask(t)* ; // 0x1a8(0x08)
	VerseFunctionProperty ; // 0x1b0(0x10)
	struct Ftuple_L_R ; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	int64_t ; // 0x1c8(0x08)
	struct Utask(t)* ; // 0x1d0(0x08)
	VerseFunctionProperty ; // 0x1d8(0x10)
	struct Ftuple_L_R ; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	int64_t ; // 0x1f0(0x08)
	enum class EVerseTrue ; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	VerseFunctionProperty ; // 0x200(0x10)
	VerseStringProperty ; // 0x210(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$CrouchUntilHit.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// Size: 0x2d9 (Inherited: 0x148)
struct Utask_companion_ai$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_Lvector3_Mfloat_Mcolor_R __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	OptionProperty ; // 0x188(0x02)
	enum class EVerseTrue ; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	VerseFunctionProperty ; // 0x190(0x10)
	struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R ; // 0x1a0(0x68)
	OptionProperty ; // 0x208(0x49)
	char pad_251[0x7]; // 0x251(0x07)
	struct Fsphere_draw_params ; // 0x258(0x48)
	struct Utask(t)* ; // 0x2a0(0x08)
	VerseFunctionProperty ; // 0x2a8(0x10)
	int64_t ; // 0x2b8(0x08)
	enum class EVerseTrue ; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	VerseFunctionProperty ; // 0x2c8(0x10)
	struct Ftuple_L_R ; // 0x2d8(0x01)

	int64_t Update(); // Function CompanionAI.task_companion_ai$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GameLoop
// Size: 0x4e0 (Inherited: 0x148)
struct Utask_companion_ai$GameLoop : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	VerseDynamicProperty ; // 0x158(0x10)
	OptionProperty ; // 0x168(0x11)
	char pad_179[0x7]; // 0x179(0x07)
	VerseDynamicProperty ; // 0x180(0x10)
	char  : 1; // 0x190(0x01)
	char pad_190_1 : 7; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UObject* ; // 0x198(0x08)
	OptionProperty ; // 0x1a0(0x08)
	VerseFunctionProperty ; // 0x1a8(0x10)
	struct Ftuple_L_R ; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	VerseDynamicProperty ; // 0x1c0(0x10)
	struct UObject* ; // 0x1d0(0x08)
	OptionProperty ; // 0x1d8(0x08)
	struct UObject* ; // 0x1e0(0x08)
	struct Utask(t)* ; // 0x1e8(0x08)
	VerseFunctionProperty ; // 0x1f0(0x10)
	struct Ftuple_L_R ; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	int64_t ; // 0x208(0x08)
	OptionProperty ; // 0x210(0x39)
	OptionProperty ; // 0x249(0x02)
	char  : 1; // 0x24b(0x01)
	char pad_24B_1 : 7; // 0x24b(0x01)
	OptionProperty ; // 0x24c(0x02)
	char pad_24E[0x2]; // 0x24e(0x02)
	struct UObject* ; // 0x250(0x08)
	OptionProperty ; // 0x258(0x08)
	struct UObject* ; // 0x260(0x08)
	OptionProperty ; // 0x268(0x08)
	struct UObject* ; // 0x270(0x08)
	struct UObject* ; // 0x278(0x08)
	VerseFunctionProperty ; // 0x280(0x10)
	struct Ftuple_L_R ; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UObject* ; // 0x298(0x08)
	VerseFunctionProperty ; // 0x2a0(0x10)
	struct UObject* ; // 0x2b0(0x08)
	struct UObject* ; // 0x2b8(0x08)
	VerseFunctionProperty ; // 0x2c0(0x10)
	struct Ftuple_L_R ; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UObject* ; // 0x2d8(0x08)
	VerseFunctionProperty ; // 0x2e0(0x10)
	struct Fping_info ; // 0x2f0(0x38)
	OptionProperty ; // 0x328(0x39)
	char pad_361[0x7]; // 0x361(0x07)
	int64_t ; // 0x368(0x08)
	OptionProperty ; // 0x370(0x39)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UObject* ; // 0x3b0(0x08)
	struct Utask(t)* ; // 0x3b8(0x08)
	VerseFunctionProperty ; // 0x3c0(0x10)
	struct Ftuple_L_R ; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	int64_t ; // 0x3d8(0x08)
	struct Utask(t)* ; // 0x3e0(0x08)
	VerseFunctionProperty ; // 0x3e8(0x10)
	int64_t ; // 0x3f8(0x08)
	OptionProperty ; // 0x400(0x39)
	OptionProperty ; // 0x439(0x02)
	char  : 1; // 0x43b(0x01)
	char pad_43B_1 : 7; // 0x43b(0x01)
	OptionProperty ; // 0x43c(0x02)
	char pad_43E[0x2]; // 0x43e(0x02)
	struct UObject* ; // 0x440(0x08)
	struct Utask(t)* ; // 0x448(0x08)
	VerseFunctionProperty ; // 0x450(0x10)
	struct Ftuple_L_R ; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	int64_t ; // 0x468(0x08)
	OptionProperty ; // 0x470(0x39)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UObject* ; // 0x4b0(0x08)
	struct Utask(t)* ; // 0x4b8(0x08)
	VerseFunctionProperty ; // 0x4c0(0x10)
	struct Ftuple_L_R ; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	int64_t ; // 0x4d8(0x08)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GameLoop.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GetNewObstacle
// Size: 0x1cb (Inherited: 0x148)
struct Utask_companion_ai$GetNewObstacle : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)
	OptionProperty ; // 0x181(0x02)
	char pad_183[0x5]; // 0x183(0x05)
	struct UObject* ; // 0x188(0x08)
	OptionProperty ; // 0x190(0x08)
	struct UObject* ; // 0x198(0x08)
	struct Utask(t)* ; // 0x1a0(0x08)
	VerseFunctionProperty ; // 0x1a8(0x10)
	struct Ftuple_L_R ; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	int64_t ; // 0x1c0(0x08)
	char  : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	OptionProperty ; // 0x1c9(0x02)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GetNewObstacle.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GetNewTargetPerception_L_N_Qfort__threat__info_R
// Size: 0x293 (Inherited: 0x148)
struct Utask_companion_ai$GetNewTargetPerception_L_N_Qfort__threat__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	OptionProperty __verse_0xB2CDDD72_Argument; // 0x150(0x39)
	char pad_189[0x7]; // 0x189(0x07)
	OptionProperty _RetVal; // 0x190(0x39)
	OptionProperty ; // 0x1c9(0x02)
	char pad_1CB[0x5]; // 0x1cb(0x05)
	struct Ffort_threat_info ; // 0x1d0(0x38)
	OptionProperty ; // 0x208(0x39)
	char pad_241[0x7]; // 0x241(0x07)
	struct UObject* ; // 0x248(0x08)
	OptionProperty ; // 0x250(0x08)
	struct UObject* ; // 0x258(0x08)
	struct Utask(t)* ; // 0x260(0x08)
	VerseFunctionProperty ; // 0x268(0x10)
	int64_t ; // 0x278(0x08)
	VerseFunctionProperty ; // 0x280(0x10)
	char  : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	OptionProperty ; // 0x291(0x02)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GetNewTargetPerception_L_N_Qfort__threat__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GetNewThreat
// Size: 0x1db (Inherited: 0x148)
struct Utask_companion_ai$GetNewThreat : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)
	OptionProperty ; // 0x191(0x02)
	char pad_193[0x5]; // 0x193(0x05)
	struct UObject* ; // 0x198(0x08)
	OptionProperty ; // 0x1a0(0x08)
	struct UObject* ; // 0x1a8(0x08)
	struct Utask(t)* ; // 0x1b0(0x08)
	VerseFunctionProperty ; // 0x1b8(0x10)
	struct Ftuple_L_R ; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	int64_t ; // 0x1d0(0x08)
	char  : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 7; // 0x1d8(0x01)
	OptionProperty ; // 0x1d9(0x02)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GetNewThreat.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GetObstacle
// Size: 0x204 (Inherited: 0x148)
struct Utask_companion_ai$GetObstacle : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x29)
	OptionProperty ; // 0x181(0x02)
	char pad_183[0x5]; // 0x183(0x05)
	struct Ffort_obstacle_info ; // 0x188(0x28)
	struct UObject* ; // 0x1b0(0x08)
	OptionProperty ; // 0x1b8(0x08)
	OptionProperty ; // 0x1c0(0x29)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	VerseFunctionProperty ; // 0x1f0(0x10)
	struct Ftuple_L_R ; // 0x200(0x01)
	char  : 1; // 0x201(0x01)
	char pad_201_1 : 7; // 0x201(0x01)
	OptionProperty ; // 0x202(0x02)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GetObstacle.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GetThreat
// Size: 0x234 (Inherited: 0x148)
struct Utask_companion_ai$GetThreat : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)
	OptionProperty ; // 0x191(0x02)
	char pad_193[0x5]; // 0x193(0x05)
	struct Ffort_threat_info ; // 0x198(0x38)
	struct UObject* ; // 0x1d0(0x08)
	OptionProperty ; // 0x1d8(0x08)
	OptionProperty ; // 0x1e0(0x39)
	char pad_219[0x7]; // 0x219(0x07)
	VerseFunctionProperty ; // 0x220(0x10)
	struct Ftuple_L_R ; // 0x230(0x01)
	char  : 1; // 0x231(0x01)
	char pad_231_1 : 7; // 0x231(0x01)
	OptionProperty ; // 0x232(0x02)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GetThreat.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GoToAndAttackTask_L_Nfort__threat__info_R
// Size: 0x288 (Inherited: 0x148)
struct Utask_companion_ai$GoToAndAttackTask_L_Nfort__threat__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ffort_threat_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	int64_t ; // 0x1b0(0x08)
	struct Utask(t)* ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct Ftuple_L_R ; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	int64_t ; // 0x1d8(0x08)
	int64_t ; // 0x1e0(0x08)
	struct UObject* ; // 0x1e8(0x08)
	OptionProperty ; // 0x1f0(0x08)
	struct UObject* ; // 0x1f8(0x08)
	struct Utask(t)* ; // 0x200(0x08)
	VerseFunctionProperty ; // 0x208(0x10)
	int64_t ; // 0x218(0x08)
	struct UObject* ; // 0x220(0x08)
	OptionProperty ; // 0x228(0x08)
	struct UObject* ; // 0x230(0x08)
	struct Utask(t)* ; // 0x238(0x08)
	VerseFunctionProperty ; // 0x240(0x10)
	struct Ftuple_L_R ; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	int64_t ; // 0x258(0x08)
	enum class EVerseTrue ; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	VerseFunctionProperty ; // 0x268(0x10)
	VerseStringProperty ; // 0x278(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GoToAndAttackTask_L_Nfort__threat__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R
// Size: 0x598 (Inherited: 0x148)
struct Utask_companion_ai$GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x150(0x40)
	char _RetVal : 1; // 0x190(0x01)
	char pad_190_1 : 7; // 0x190(0x01)
	enum class EVerseTrue ; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)
	VerseFunctionProperty ; // 0x198(0x10)
	VerseStringProperty ; // 0x1a8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x1b8(0x10)
	VerseFunctionProperty ; // 0x1c8(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x1d8(0x10)
	struct TArray<VerseStringProperty> ; // 0x1e8(0x10)
	struct Ftuple_L_Kchar_M_Kchar_R ; // 0x1f8(0x20)
	VerseStringProperty ; // 0x218(0x10)
	VerseStringProperty ; // 0x228(0x10)
	VerseFunctionProperty ; // 0x238(0x10)
	VerseStringProperty ; // 0x248(0x10)
	VerseFunctionProperty ; // 0x258(0x10)
	VerseStringProperty ; // 0x268(0x10)
	VerseStringProperty ; // 0x278(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x288(0x10)
	int64_t ; // 0x298(0x08)
	int64_t ; // 0x2a0(0x08)
	VerseStringProperty ; // 0x2a8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x2b8(0x10)
	VerseStringProperty ; // 0x2c8(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x2d8(0x10)
	int64_t ; // 0x2e8(0x08)
	int64_t ; // 0x2f0(0x08)
	char ; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	VerseDynamicProperty ; // 0x300(0x10)
	VerseStringProperty ; // 0x310(0x10)
	int64_t ; // 0x320(0x08)
	int64_t ; // 0x328(0x08)
	VerseDynamicProperty ; // 0x330(0x10)
	char ; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UObject* ; // 0x348(0x08)
	OptionProperty ; // 0x350(0x08)
	OptionProperty ; // 0x358(0x02)
	char pad_35A[0x6]; // 0x35a(0x06)
	int64_t ; // 0x360(0x08)
	struct Utask(t)* ; // 0x368(0x08)
	VerseFunctionProperty ; // 0x370(0x10)
	struct Ftuple_L_R ; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	int64_t ; // 0x388(0x08)
	struct UObject* ; // 0x390(0x08)
	OptionProperty ; // 0x398(0x08)
	enum class fort_navigate_result ; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UObject* ; // 0x3a8(0x08)
	struct Utask(t)* ; // 0x3b0(0x08)
	VerseFunctionProperty ; // 0x3b8(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x3c8(0x20)
	struct Ufort_navigation_target* ; // 0x3e8(0x08)
	VerseFunctionProperty ; // 0x3f0(0x10)
	OptionProperty ; // 0x400(0x11)
	char pad_411[0x7]; // 0x411(0x07)
	int64_t ; // 0x418(0x08)
	VerseDynamicProperty ; // 0x420(0x10)
	OptionProperty ; // 0x430(0x11)
	char pad_441[0x7]; // 0x441(0x07)
	VerseDynamicProperty ; // 0x448(0x10)
	VerseDynamicProperty ; // 0x458(0x10)
	enum class EVerseTrue ; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	VerseFunctionProperty ; // 0x470(0x10)
	VerseStringProperty ; // 0x480(0x10)
	enum class fort_navigate_result ; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UObject* ; // 0x498(0x08)
	VerseFunctionProperty ; // 0x4a0(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x4b0(0x20)
	struct Ufort_navigation_target* ; // 0x4d0(0x08)
	VerseFunctionProperty ; // 0x4d8(0x10)
	OptionProperty ; // 0x4e8(0x11)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	VerseDynamicProperty ; // 0x500(0x10)
	OptionProperty ; // 0x510(0x11)
	char pad_521[0x7]; // 0x521(0x07)
	VerseDynamicProperty ; // 0x528(0x10)
	VerseDynamicProperty ; // 0x538(0x10)
	enum class EVerseTrue ; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	VerseFunctionProperty ; // 0x550(0x10)
	VerseStringProperty ; // 0x560(0x10)
	enum class EVerseTrue ; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	VerseFunctionProperty ; // 0x578(0x10)
	VerseStringProperty ; // 0x588(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$GoToPositionTask_L_Nvector3_M_N_Qfort__character_M_Nlogic_M_Nfort__navigation__parameters_R.Update // (Public|HasOutParms|HasDefaults) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleBackToMeCommand_L_Nping__info_R
// Size: 0x358 (Inherited: 0x148)
struct Utask_companion_ai$HandleBackToMeCommand_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	struct UEntity* ; // 0x1b0(0x08)
	OptionProperty ; // 0x1b8(0x08)
	struct UObject* ; // 0x1c0(0x08)
	OptionProperty ; // 0x1c8(0x08)
	OptionProperty ; // 0x1d0(0x08)
	VerseFunctionProperty ; // 0x1d8(0x10)
	char  : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct Utask(t)* ; // 0x1f0(0x08)
	VerseFunctionProperty ; // 0x1f8(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x208(0x40)
	struct Fvector3 ; // 0x248(0x18)
	OptionProperty ; // 0x260(0x08)
	OptionProperty ; // 0x268(0x11)
	char pad_279[0x7]; // 0x279(0x07)
	struct Ffort_navigation_parameters ; // 0x280(0x10)
	int64_t ; // 0x290(0x08)
	OptionProperty ; // 0x298(0x02)
	char pad_29A[0x6]; // 0x29a(0x06)
	int64_t ; // 0x2a0(0x08)
	struct Utask(t)* ; // 0x2a8(0x08)
	VerseFunctionProperty ; // 0x2b0(0x10)
	struct Ftuple_Lfort__character_Mfloat_R ; // 0x2c0(0x10)
	int64_t ; // 0x2d0(0x08)
	struct Utask(t)* ; // 0x2d8(0x08)
	VerseFunctionProperty ; // 0x2e0(0x10)
	struct Ftuple_L_R ; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	int64_t ; // 0x2f8(0x08)
	struct UObject* ; // 0x300(0x08)
	OptionProperty ; // 0x308(0x08)
	struct UObject* ; // 0x310(0x08)
	enum class EVerseTrue ; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	VerseFunctionProperty ; // 0x320(0x10)
	enum class EVerseTrue ; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	VerseFunctionProperty ; // 0x338(0x10)
	VerseStringProperty ; // 0x348(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleBackToMeCommand_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleGoTo_L_Nping__info_R
// Size: 0x6c8 (Inherited: 0x148)
struct Utask_companion_ai$HandleGoTo_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	int64_t ; // 0x1b0(0x08)
	struct Utask(t)* ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	int64_t ; // 0x1d0(0x08)
	VerseDynamicProperty ; // 0x1d8(0x10)
	OptionProperty ; // 0x1e8(0x11)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	VerseDynamicProperty ; // 0x200(0x10)
	VerseDynamicProperty ; // 0x210(0x10)
	struct UEntity* ; // 0x220(0x08)
	OptionProperty ; // 0x228(0x08)
	struct Utask(t)* ; // 0x230(0x08)
	VerseFunctionProperty ; // 0x238(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x248(0x40)
	OptionProperty ; // 0x288(0x08)
	VerseFunctionProperty ; // 0x290(0x10)
	OptionProperty ; // 0x2a0(0x11)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct Ffort_navigation_parameters ; // 0x2b8(0x10)
	int64_t ; // 0x2c8(0x08)
	VerseDynamicProperty ; // 0x2d0(0x10)
	OptionProperty ; // 0x2e0(0x11)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	VerseDynamicProperty ; // 0x2f8(0x10)
	VerseDynamicProperty ; // 0x308(0x10)
	VerseDynamicProperty ; // 0x318(0x10)
	OptionProperty ; // 0x328(0x11)
	char pad_339[0x7]; // 0x339(0x07)
	VerseDynamicProperty ; // 0x340(0x10)
	VerseDynamicProperty ; // 0x350(0x10)
	VerseDynamicProperty ; // 0x360(0x10)
	OptionProperty ; // 0x370(0x11)
	char pad_381[0x7]; // 0x381(0x07)
	VerseDynamicProperty ; // 0x388(0x10)
	VerseDynamicProperty ; // 0x398(0x10)
	int64_t ; // 0x3a8(0x08)
	struct Utask(t)* ; // 0x3b0(0x08)
	VerseFunctionProperty ; // 0x3b8(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x3c8(0x40)
	struct Ftuple_Lvector3_M_Qfalse_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x408(0x38)
	OptionProperty ; // 0x440(0x02)
	char pad_442[0x6]; // 0x442(0x06)
	OptionProperty ; // 0x448(0x11)
	char pad_459[0x7]; // 0x459(0x07)
	struct Ffort_navigation_parameters ; // 0x460(0x10)
	OptionProperty ; // 0x470(0x08)
	OptionProperty ; // 0x478(0x02)
	char  : 1; // 0x47a(0x01)
	char pad_47A_1 : 7; // 0x47a(0x01)
	OptionProperty ; // 0x47b(0x02)
	char pad_47D[0x3]; // 0x47d(0x03)
	int64_t ; // 0x480(0x08)
	struct Utask(t)* ; // 0x488(0x08)
	VerseFunctionProperty ; // 0x490(0x10)
	int64_t ; // 0x4a0(0x08)
	OptionProperty ; // 0x4a8(0x02)
	char pad_4AA[0x6]; // 0x4aa(0x06)
	struct Utask(t)* ; // 0x4b0(0x08)
	VerseFunctionProperty ; // 0x4b8(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x4c8(0x40)
	struct Ftuple_Lvector3_M_Qfalse_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x508(0x38)
	OptionProperty ; // 0x540(0x02)
	char pad_542[0x6]; // 0x542(0x06)
	OptionProperty ; // 0x548(0x11)
	char pad_559[0x7]; // 0x559(0x07)
	struct Ffort_navigation_parameters ; // 0x560(0x10)
	OptionProperty ; // 0x570(0x08)
	OptionProperty ; // 0x578(0x02)
	char  : 1; // 0x57a(0x01)
	char pad_57A_1 : 7; // 0x57a(0x01)
	OptionProperty ; // 0x57b(0x02)
	char pad_57D[0x3]; // 0x57d(0x03)
	int64_t ; // 0x580(0x08)
	struct Utask(t)* ; // 0x588(0x08)
	VerseFunctionProperty ; // 0x590(0x10)
	int64_t ; // 0x5a0(0x08)
	struct Utask(t)* ; // 0x5a8(0x08)
	VerseFunctionProperty ; // 0x5b0(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x5c0(0x40)
	struct Ftuple_Lvector3_M_Qfalse_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x600(0x38)
	OptionProperty ; // 0x638(0x02)
	char pad_63A[0x6]; // 0x63a(0x06)
	OptionProperty ; // 0x640(0x11)
	char pad_651[0x7]; // 0x651(0x07)
	struct Ffort_navigation_parameters ; // 0x658(0x10)
	OptionProperty ; // 0x668(0x08)
	OptionProperty ; // 0x670(0x02)
	char  : 1; // 0x672(0x01)
	char pad_672_1 : 7; // 0x672(0x01)
	OptionProperty ; // 0x673(0x02)
	char pad_675[0x3]; // 0x675(0x03)
	int64_t ; // 0x678(0x08)
	struct Utask(t)* ; // 0x680(0x08)
	VerseFunctionProperty ; // 0x688(0x10)
	int64_t ; // 0x698(0x08)
	enum class EVerseTrue ; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	VerseFunctionProperty ; // 0x6a8(0x10)
	VerseStringProperty ; // 0x6b8(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleGoTo_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleGoToCommand_L_Nping__info_R
// Size: 0x580 (Inherited: 0x148)
struct Utask_companion_ai$HandleGoToCommand_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	struct UEntity* ; // 0x1b0(0x08)
	OptionProperty ; // 0x1b8(0x08)
	int64_t ; // 0x1c0(0x08)
	struct Utask(t)* ; // 0x1c8(0x08)
	VerseFunctionProperty ; // 0x1d0(0x10)
	struct Ftuple_Lvector3_Mfloat_Mentity_R ; // 0x1e0(0x28)
	int64_t ; // 0x208(0x08)
	struct Utask(t)* ; // 0x210(0x08)
	VerseFunctionProperty ; // 0x218(0x10)
	int64_t ; // 0x228(0x08)
	OptionProperty ; // 0x230(0x39)
	char pad_269[0x7]; // 0x269(0x07)
	VerseFunctionProperty ; // 0x270(0x10)
	struct Ftuple_L_R ; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	int64_t ; // 0x288(0x08)
	OptionProperty ; // 0x290(0x39)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct Utask(t)* ; // 0x2d0(0x08)
	VerseFunctionProperty ; // 0x2d8(0x10)
	int64_t ; // 0x2e8(0x08)
	OptionProperty ; // 0x2f0(0x39)
	char pad_329[0x7]; // 0x329(0x07)
	struct Utask(t)* ; // 0x330(0x08)
	VerseFunctionProperty ; // 0x338(0x10)
	struct Ftuple_L_R ; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	int64_t ; // 0x350(0x08)
	struct Ffort_threat_info ; // 0x358(0x38)
	OptionProperty ; // 0x390(0x39)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	VerseDynamicProperty ; // 0x3d0(0x10)
	OptionProperty ; // 0x3e0(0x11)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	VerseDynamicProperty ; // 0x3f8(0x10)
	VerseDynamicProperty ; // 0x408(0x10)
	struct Utask(t)* ; // 0x418(0x08)
	VerseFunctionProperty ; // 0x420(0x10)
	int64_t ; // 0x430(0x08)
	OptionProperty ; // 0x438(0x39)
	char pad_471[0x7]; // 0x471(0x07)
	VerseFunctionProperty ; // 0x478(0x10)
	struct Ftuple_L_R ; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	VerseFunctionProperty ; // 0x490(0x10)
	struct Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R ; // 0x4a0(0x28)
	OptionProperty ; // 0x4c8(0x09)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	double ; // 0x4d8(0x08)
	VerseFunctionProperty ; // 0x4e0(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x4f0(0x30)
	struct Fvector3 ; // 0x520(0x18)
	struct UObject* ; // 0x538(0x08)
	OptionProperty ; // 0x540(0x08)
	VerseFunctionProperty ; // 0x548(0x10)
	struct Ftuple_L_R ; // 0x558(0x01)
	enum class EVerseTrue ; // 0x559(0x01)
	char pad_55A[0x6]; // 0x55a(0x06)
	VerseFunctionProperty ; // 0x560(0x10)
	VerseStringProperty ; // 0x570(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleGoToCommand_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleHoldPositionCommand_L_Nping__info_R
// Size: 0x2c8 (Inherited: 0x148)
struct Utask_companion_ai$HandleHoldPositionCommand_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	struct Fvector3 ; // 0x1b0(0x18)
	struct Fvector3 ; // 0x1c8(0x18)
	struct UObject* ; // 0x1e0(0x08)
	OptionProperty ; // 0x1e8(0x08)
	VerseFunctionProperty ; // 0x1f0(0x10)
	struct Ftuple_L_R ; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UEntity* ; // 0x208(0x08)
	OptionProperty ; // 0x210(0x08)
	int64_t ; // 0x218(0x08)
	struct Utask(t)* ; // 0x220(0x08)
	VerseFunctionProperty ; // 0x228(0x10)
	struct Ftuple_Lvector3_Mfloat_Mentity_R ; // 0x238(0x28)
	int64_t ; // 0x260(0x08)
	struct Utask(t)* ; // 0x268(0x08)
	VerseFunctionProperty ; // 0x270(0x10)
	struct Ftuple_L_R ; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	int64_t ; // 0x288(0x08)
	VerseFunctionProperty ; // 0x290(0x10)
	struct Ftuple_L_R ; // 0x2a0(0x01)
	enum class EVerseTrue ; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	VerseFunctionProperty ; // 0x2a8(0x10)
	VerseStringProperty ; // 0x2b8(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleHoldPositionCommand_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleNPCCommand_L_Nping__info_R
// Size: 0x610 (Inherited: 0x148)
struct Utask_companion_ai$HandleNPCCommand_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x1b0(0x10)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x1d0(0x10)
	struct TArray<VerseStringProperty> ; // 0x1e0(0x10)
	struct Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R ; // 0x1f0(0x40)
	VerseStringProperty ; // 0x230(0x10)
	VerseStringProperty ; // 0x240(0x10)
	VerseFunctionProperty ; // 0x250(0x10)
	VerseStringProperty ; // 0x260(0x10)
	VerseFunctionProperty ; // 0x270(0x10)
	VerseStringProperty ; // 0x280(0x10)
	VerseStringProperty ; // 0x290(0x10)
	VerseFunctionProperty ; // 0x2a0(0x10)
	VerseStringProperty ; // 0x2b0(0x10)
	VerseFunctionProperty ; // 0x2c0(0x10)
	VerseStringProperty ; // 0x2d0(0x10)
	VerseStringProperty ; // 0x2e0(0x10)
	VerseStringProperty ; // 0x2f0(0x10)
	VerseStringProperty ; // 0x300(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x310(0x10)
	int64_t ; // 0x320(0x08)
	int64_t ; // 0x328(0x08)
	VerseStringProperty ; // 0x330(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x340(0x10)
	VerseStringProperty ; // 0x350(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x360(0x10)
	int64_t ; // 0x370(0x08)
	int64_t ; // 0x378(0x08)
	char ; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	VerseDynamicProperty ; // 0x388(0x10)
	VerseStringProperty ; // 0x398(0x10)
	int64_t ; // 0x3a8(0x08)
	int64_t ; // 0x3b0(0x08)
	VerseDynamicProperty ; // 0x3b8(0x10)
	char ; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	VerseDynamicProperty ; // 0x3d0(0x10)
	OptionProperty ; // 0x3e0(0x11)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	VerseDynamicProperty ; // 0x3f8(0x10)
	VerseDynamicProperty ; // 0x408(0x10)
	struct Utask(t)* ; // 0x418(0x08)
	VerseFunctionProperty ; // 0x420(0x10)
	int64_t ; // 0x430(0x08)
	VerseDynamicProperty ; // 0x438(0x10)
	OptionProperty ; // 0x448(0x11)
	char pad_459[0x7]; // 0x459(0x07)
	VerseDynamicProperty ; // 0x460(0x10)
	VerseDynamicProperty ; // 0x470(0x10)
	VerseFunctionProperty ; // 0x480(0x10)
	VerseDynamicProperty ; // 0x490(0x10)
	OptionProperty ; // 0x4a0(0x11)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	VerseDynamicProperty ; // 0x4b8(0x10)
	VerseDynamicProperty ; // 0x4c8(0x10)
	VerseFunctionProperty ; // 0x4d8(0x10)
	VerseDynamicProperty ; // 0x4e8(0x10)
	OptionProperty ; // 0x4f8(0x11)
	char pad_509[0x7]; // 0x509(0x07)
	VerseDynamicProperty ; // 0x510(0x10)
	VerseDynamicProperty ; // 0x520(0x10)
	VerseFunctionProperty ; // 0x530(0x10)
	VerseDynamicProperty ; // 0x540(0x10)
	OptionProperty ; // 0x550(0x11)
	char pad_561[0x7]; // 0x561(0x07)
	VerseDynamicProperty ; // 0x568(0x10)
	VerseDynamicProperty ; // 0x578(0x10)
	struct UObject* ; // 0x588(0x08)
	OptionProperty ; // 0x590(0x08)
	struct UObject* ; // 0x598(0x08)
	VerseFunctionProperty ; // 0x5a0(0x10)
	struct Ftuple_L_R ; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct UObject* ; // 0x5b8(0x08)
	OptionProperty ; // 0x5c0(0x08)
	struct UObject* ; // 0x5c8(0x08)
	enum class EVerseTrue ; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	VerseFunctionProperty ; // 0x5d8(0x10)
	enum class EVerseTrue ; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	VerseFunctionProperty ; // 0x5f0(0x10)
	VerseStringProperty ; // 0x600(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleNPCCommand_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleObstacleTask_L_N_Qentity_R
// Size: 0x378 (Inherited: 0x148)
struct Utask_companion_ai$HandleObstacleTask_L_N_Qentity_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	OptionProperty __verse_0xB2CDDD72_Argument; // 0x150(0x08)
	enum class EVerseTrue ; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	VerseFunctionProperty ; // 0x160(0x10)
	VerseStringProperty ; // 0x170(0x10)
	OptionProperty ; // 0x180(0x29)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct Utask(t)* ; // 0x1b0(0x08)
	VerseFunctionProperty ; // 0x1b8(0x10)
	struct Ftuple_L_R ; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	int64_t ; // 0x1d0(0x08)
	int64_t ; // 0x1d8(0x08)
	struct Ffort_obstacle_info ; // 0x1e0(0x28)
	OptionProperty ; // 0x208(0x29)
	char pad_231[0x7]; // 0x231(0x07)
	struct UEntity* ; // 0x238(0x08)
	OptionProperty ; // 0x240(0x08)
	OptionProperty ; // 0x248(0x02)
	char  : 1; // 0x24a(0x01)
	char pad_24A_1 : 7; // 0x24a(0x01)
	char pad_24B[0x5]; // 0x24b(0x05)
	VerseFunctionProperty ; // 0x250(0x10)
	struct Ftuple_Lfort__obstacle__info_Mentity_R ; // 0x260(0x30)
	struct Utask(t)* ; // 0x290(0x08)
	VerseFunctionProperty ; // 0x298(0x10)
	int64_t ; // 0x2a8(0x08)
	VerseFunctionProperty ; // 0x2b0(0x10)
	struct UObject* ; // 0x2c0(0x08)
	OptionProperty ; // 0x2c8(0x08)
	struct UObject* ; // 0x2d0(0x08)
	VerseFunctionProperty ; // 0x2d8(0x10)
	VerseFunctionProperty ; // 0x2e8(0x10)
	OptionProperty ; // 0x2f8(0x29)
	char pad_321[0x7]; // 0x321(0x07)
	struct Utask(t)* ; // 0x328(0x08)
	VerseFunctionProperty ; // 0x330(0x10)
	struct Ftuple_L_R ; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	int64_t ; // 0x348(0x08)
	enum class EVerseTrue ; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	VerseFunctionProperty ; // 0x358(0x10)
	VerseStringProperty ; // 0x368(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleObstacleTask_L_N_Qentity_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$HandleReviveCommand_L_Nping__info_R
// Size: 0x2d0 (Inherited: 0x148)
struct Utask_companion_ai$HandleReviveCommand_L_Nping__info_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Fping_info __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	enum class EVerseTrue ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	VerseStringProperty ; // 0x1a0(0x10)
	char  : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 7; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct UEntity* ; // 0x1b8(0x08)
	OptionProperty ; // 0x1c0(0x08)
	struct UObject* ; // 0x1c8(0x08)
	OptionProperty ; // 0x1d0(0x08)
	OptionProperty ; // 0x1d8(0x08)
	VerseFunctionProperty ; // 0x1e0(0x10)
	char  : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct Utask(t)* ; // 0x1f8(0x08)
	VerseFunctionProperty ; // 0x200(0x10)
	int64_t ; // 0x210(0x08)
	OptionProperty ; // 0x218(0x02)
	char pad_21A[0x6]; // 0x21a(0x06)
	struct TArray<struct UObject*> ; // 0x220(0x10)
	VerseFunctionProperty ; // 0x230(0x10)
	int64_t ; // 0x240(0x08)
	int64_t ; // 0x248(0x08)
	struct UObject* ; // 0x250(0x08)
	char  : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	VerseFunctionProperty ; // 0x260(0x10)
	OptionProperty ; // 0x270(0x02)
	char pad_272[0x6]; // 0x272(0x06)
	struct UObject* ; // 0x278(0x08)
	OptionProperty ; // 0x280(0x08)
	struct UObject* ; // 0x288(0x08)
	enum class EVerseTrue ; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	VerseFunctionProperty ; // 0x298(0x10)
	enum class EVerseTrue ; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	VerseFunctionProperty ; // 0x2b0(0x10)
	VerseStringProperty ; // 0x2c0(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$HandleReviveCommand_L_Nping__info_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
// Size: 0x338 (Inherited: 0x148)
struct Utask_companion_ai$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class EVerseTrue ; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	VerseFunctionProperty ; // 0x180(0x10)
	VerseStringProperty ; // 0x190(0x10)
	struct UObject* ; // 0x1a0(0x08)
	OptionProperty ; // 0x1a8(0x08)
	struct Fvector3 ; // 0x1b0(0x18)
	double ; // 0x1c8(0x08)
	VerseFunctionProperty ; // 0x1d0(0x10)
	struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R ; // 0x1e0(0x10)
	double ; // 0x1f0(0x08)
	VerseFunctionProperty ; // 0x1f8(0x10)
	struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R ; // 0x208(0x10)
	double ; // 0x218(0x08)
	VerseFunctionProperty ; // 0x220(0x10)
	struct Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R ; // 0x230(0x10)
	int64_t ; // 0x240(0x08)
	struct UObject* ; // 0x248(0x08)
	struct Utask(t)* ; // 0x250(0x08)
	VerseFunctionProperty ; // 0x258(0x10)
	struct Fvector3 ; // 0x268(0x18)
	VerseFunctionProperty ; // 0x280(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x290(0x30)
	int64_t ; // 0x2c0(0x08)
	struct Utask(t)* ; // 0x2c8(0x08)
	VerseFunctionProperty ; // 0x2d0(0x10)
	double ; // 0x2e0(0x08)
	VerseFunctionProperty ; // 0x2e8(0x10)
	struct Ftuple_Lfloat_Mfloat_R ; // 0x2f8(0x10)
	int64_t ; // 0x308(0x08)
	enum class EVerseTrue ; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	VerseFunctionProperty ; // 0x318(0x10)
	VerseStringProperty ; // 0x328(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$LookAtOrAttackTarget
// Size: 0x448 (Inherited: 0x148)
struct Utask_companion_ai$LookAtOrAttackTarget : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class EVerseTrue ; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	VerseFunctionProperty ; // 0x158(0x10)
	VerseStringProperty ; // 0x168(0x10)
	OptionProperty ; // 0x178(0x39)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct Utask(t)* ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct Ftuple_L_R ; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	int64_t ; // 0x1d8(0x08)
	struct Ffort_threat_info ; // 0x1e0(0x38)
	OptionProperty ; // 0x218(0x39)
	char pad_251[0x7]; // 0x251(0x07)
	int64_t ; // 0x258(0x08)
	OptionProperty ; // 0x260(0x39)
	char pad_299[0x7]; // 0x299(0x07)
	struct Utask(t)* ; // 0x2a0(0x08)
	VerseFunctionProperty ; // 0x2a8(0x10)
	struct Ftuple_L_R ; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	int64_t ; // 0x2c0(0x08)
	OptionProperty ; // 0x2c8(0x39)
	char pad_301[0x7]; // 0x301(0x07)
	struct Utask(t)* ; // 0x308(0x08)
	VerseFunctionProperty ; // 0x310(0x10)
	int64_t ; // 0x320(0x08)
	VerseDynamicProperty ; // 0x328(0x10)
	OptionProperty ; // 0x338(0x11)
	char pad_349[0x7]; // 0x349(0x07)
	VerseDynamicProperty ; // 0x350(0x10)
	VerseDynamicProperty ; // 0x360(0x10)
	struct Utask(t)* ; // 0x370(0x08)
	VerseFunctionProperty ; // 0x378(0x10)
	int64_t ; // 0x388(0x08)
	struct UObject* ; // 0x390(0x08)
	OptionProperty ; // 0x398(0x08)
	int64_t ; // 0x3a0(0x08)
	struct Utask(t)* ; // 0x3a8(0x08)
	VerseFunctionProperty ; // 0x3b0(0x10)
	struct Ftuple_L_R ; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	int64_t ; // 0x3c8(0x08)
	struct UObject* ; // 0x3d0(0x08)
	struct Utask(t)* ; // 0x3d8(0x08)
	VerseFunctionProperty ; // 0x3e0(0x10)
	struct Fvector3 ; // 0x3f0(0x18)
	VerseFunctionProperty ; // 0x408(0x10)
	int64_t ; // 0x418(0x08)
	enum class EVerseTrue ; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	VerseFunctionProperty ; // 0x428(0x10)
	VerseStringProperty ; // 0x438(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$LookAtOrAttackTarget.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$LookAtThreatTask
// Size: 0x368 (Inherited: 0x148)
struct Utask_companion_ai$LookAtThreatTask : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class EVerseTrue ; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	VerseFunctionProperty ; // 0x158(0x10)
	VerseStringProperty ; // 0x168(0x10)
	struct UObject* ; // 0x178(0x08)
	OptionProperty ; // 0x180(0x08)
	struct Ffort_threat_info ; // 0x188(0x38)
	struct UObject* ; // 0x1c0(0x08)
	OptionProperty ; // 0x1c8(0x08)
	OptionProperty ; // 0x1d0(0x39)
	char pad_209[0x7]; // 0x209(0x07)
	VerseFunctionProperty ; // 0x210(0x10)
	struct Ftuple_L_R ; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	int64_t ; // 0x228(0x08)
	struct Utask(t)* ; // 0x230(0x08)
	VerseFunctionProperty ; // 0x238(0x10)
	OptionProperty ; // 0x248(0x39)
	char pad_281[0x7]; // 0x281(0x07)
	int64_t ; // 0x288(0x08)
	struct Utask(t)* ; // 0x290(0x08)
	VerseFunctionProperty ; // 0x298(0x10)
	struct Ftuple_L_R ; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	int64_t ; // 0x2b0(0x08)
	struct UObject* ; // 0x2b8(0x08)
	struct Utask(t)* ; // 0x2c0(0x08)
	VerseFunctionProperty ; // 0x2c8(0x10)
	struct Fvector3 ; // 0x2d8(0x18)
	VerseFunctionProperty ; // 0x2f0(0x10)
	int64_t ; // 0x300(0x08)
	VerseFunctionProperty ; // 0x308(0x10)
	struct Utask(t)* ; // 0x318(0x08)
	VerseFunctionProperty ; // 0x320(0x10)
	struct Ftuple_L_R ; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	int64_t ; // 0x338(0x08)
	enum class EVerseTrue ; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	VerseFunctionProperty ; // 0x348(0x10)
	VerseStringProperty ; // 0x358(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$LookAtThreatTask.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$OnBegin
// Size: 0x3f0 (Inherited: 0x148)
struct Utask_companion_ai$OnBegin : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	OptionProperty ; // 0x168(0x08)
	VerseFunctionProperty ; // 0x170(0x10)
	struct UObject* ; // 0x180(0x08)
	OptionProperty ; // 0x188(0x08)
	OptionProperty ; // 0x190(0x08)
	VerseFunctionProperty ; // 0x198(0x10)
	struct UObject* ; // 0x1a8(0x08)
	OptionProperty ; // 0x1b0(0x08)
	OptionProperty ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct UObject* ; // 0x1d0(0x08)
	OptionProperty ; // 0x1d8(0x08)
	OptionProperty ; // 0x1e0(0x08)
	VerseFunctionProperty ; // 0x1e8(0x10)
	struct UObject* ; // 0x1f8(0x08)
	OptionProperty ; // 0x200(0x08)
	OptionProperty ; // 0x208(0x08)
	VerseFunctionProperty ; // 0x210(0x10)
	struct UObject* ; // 0x220(0x08)
	OptionProperty ; // 0x228(0x08)
	OptionProperty ; // 0x230(0x08)
	VerseFunctionProperty ; // 0x238(0x10)
	struct UObject* ; // 0x248(0x08)
	OptionProperty ; // 0x250(0x08)
	OptionProperty ; // 0x258(0x08)
	VerseFunctionProperty ; // 0x260(0x10)
	OptionProperty ; // 0x270(0x08)
	OptionProperty ; // 0x278(0x08)
	OptionProperty ; // 0x280(0x08)
	OptionProperty ; // 0x288(0x08)
	OptionProperty ; // 0x290(0x08)
	OptionProperty ; // 0x298(0x08)
	OptionProperty ; // 0x2a0(0x08)
	struct Utask(t)* ; // 0x2a8(0x08)
	VerseFunctionProperty ; // 0x2b0(0x10)
	struct Ftuple_L_R ; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	int64_t ; // 0x2c8(0x08)
	VerseStringProperty ; // 0x2d0(0x10)
	struct Ulog* ; // 0x2e0(0x08)
	enum class EVerseTrue ; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	VerseFunctionProperty ; // 0x2f0(0x10)
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R ; // 0x300(0x18)
	OptionProperty ; // 0x318(0x02)
	enum class EVerseTrue ; // 0x31a(0x01)
	char pad_31B[0x5]; // 0x31b(0x05)
	VerseFunctionProperty ; // 0x320(0x10)
	struct Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R ; // 0x330(0x40)
	struct Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R ; // 0x370(0x40)
	OptionProperty ; // 0x3b0(0x19)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	OptionProperty ; // 0x3d0(0x09)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	VerseStringProperty ; // 0x3e0(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$OnBegin.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$ReviveCommand_L_Nfort__character_R
// Size: 0x328 (Inherited: 0x148)
struct Utask_companion_ai$ReviveCommand_L_Nfort__character_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct UObject* __verse_0xB2CDDD72_Argument; // 0x150(0x08)
	char _RetVal : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	enum class EVerseTrue ; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	VerseFunctionProperty ; // 0x160(0x10)
	VerseStringProperty ; // 0x170(0x10)
	struct UObject* ; // 0x180(0x08)
	char  : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	VerseFunctionProperty ; // 0x190(0x10)
	struct Ftuple_L_R ; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct UObject* ; // 0x1a8(0x08)
	OptionProperty ; // 0x1b0(0x08)
	int64_t ; // 0x1b8(0x08)
	struct Utask(t)* ; // 0x1c0(0x08)
	VerseFunctionProperty ; // 0x1c8(0x10)
	struct Ftuple_L_R ; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	int64_t ; // 0x1e0(0x08)
	char  : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct Utask(t)* ; // 0x1f0(0x08)
	VerseFunctionProperty ; // 0x1f8(0x10)
	struct Ftuple_Lvector3_M_Qfort__character_Mlogic_M_QNavigationParameters_Nfort__navigation__parameters_R ; // 0x208(0x40)
	struct Fvector3 ; // 0x248(0x18)
	OptionProperty ; // 0x260(0x08)
	OptionProperty ; // 0x268(0x11)
	char pad_279[0x7]; // 0x279(0x07)
	struct Ffort_navigation_parameters ; // 0x280(0x10)
	int64_t ; // 0x290(0x08)
	OptionProperty ; // 0x298(0x02)
	enum class action_result ; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct UObject* ; // 0x2a0(0x08)
	VerseFunctionProperty ; // 0x2a8(0x10)
	VerseDynamicProperty ; // 0x2b8(0x10)
	OptionProperty ; // 0x2c8(0x11)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	VerseDynamicProperty ; // 0x2e0(0x10)
	VerseDynamicProperty ; // 0x2f0(0x10)
	enum class EVerseTrue ; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	VerseFunctionProperty ; // 0x308(0x10)
	VerseStringProperty ; // 0x318(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$ReviveCommand_L_Nfort__character_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R
// Size: 0x430 (Inherited: 0x148)
struct Utask_companion_ai$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_Lvector3_Mfloat_Mentity_R __verse_0xB2CDDD72_Argument; // 0x150(0x28)
	enum class EVerseTrue ; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	VerseFunctionProperty ; // 0x180(0x10)
	VerseStringProperty ; // 0x190(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x1a0(0x10)
	VerseFunctionProperty ; // 0x1b0(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x1c0(0x10)
	struct TArray<VerseStringProperty> ; // 0x1d0(0x10)
	struct Ftuple_L_Kchar_M_Kchar_R ; // 0x1e0(0x20)
	VerseStringProperty ; // 0x200(0x10)
	VerseStringProperty ; // 0x210(0x10)
	VerseFunctionProperty ; // 0x220(0x10)
	VerseStringProperty ; // 0x230(0x10)
	VerseStringProperty ; // 0x240(0x10)
	struct TArray<struct TArray<VerseDynamicProperty>> ; // 0x250(0x10)
	int64_t ; // 0x260(0x08)
	int64_t ; // 0x268(0x08)
	VerseStringProperty ; // 0x270(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x280(0x10)
	VerseStringProperty ; // 0x290(0x10)
	struct TArray<VerseDynamicProperty> ; // 0x2a0(0x10)
	int64_t ; // 0x2b0(0x08)
	int64_t ; // 0x2b8(0x08)
	char ; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	VerseDynamicProperty ; // 0x2c8(0x10)
	VerseStringProperty ; // 0x2d8(0x10)
	int64_t ; // 0x2e8(0x08)
	int64_t ; // 0x2f0(0x08)
	VerseDynamicProperty ; // 0x2f8(0x10)
	char ; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	int64_t ; // 0x310(0x08)
	struct Utask(t)* ; // 0x318(0x08)
	VerseFunctionProperty ; // 0x320(0x10)
	struct Ftuple_Lvector3_Mfloat_Mcolor_R ; // 0x330(0x38)
	int64_t ; // 0x368(0x08)
	struct UObject* ; // 0x370(0x08)
	OptionProperty ; // 0x378(0x08)
	struct UObject* ; // 0x380(0x08)
	enum class EVerseTrue ; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	VerseFunctionProperty ; // 0x390(0x10)
	struct Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R ; // 0x3a0(0x28)
	struct UObject* ; // 0x3c8(0x08)
	enum class EVerseTrue ; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	VerseFunctionProperty ; // 0x3d8(0x10)
	struct Utask(t)* ; // 0x3e8(0x08)
	VerseFunctionProperty ; // 0x3f0(0x10)
	int64_t ; // 0x400(0x08)
	enum class EVerseTrue ; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	VerseFunctionProperty ; // 0x410(0x10)
	VerseStringProperty ; // 0x420(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nentity_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$ShootTargetService_L_Nfloat_R
// Size: 0x538 (Inherited: 0x148)
struct Utask_companion_ai$ShootTargetService_L_Nfloat_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	double __verse_0xB2CDDD72_Argument; // 0x150(0x08)
	enum class EVerseTrue ; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	VerseFunctionProperty ; // 0x160(0x10)
	VerseStringProperty ; // 0x170(0x10)
	struct Utask(t)* ; // 0x180(0x08)
	VerseFunctionProperty ; // 0x188(0x10)
	int64_t ; // 0x198(0x08)
	struct Ffort_threat_info ; // 0x1a0(0x38)
	struct UObject* ; // 0x1d8(0x08)
	OptionProperty ; // 0x1e0(0x08)
	OptionProperty ; // 0x1e8(0x39)
	char pad_221[0x7]; // 0x221(0x07)
	VerseFunctionProperty ; // 0x228(0x10)
	struct Ftuple_L_R ; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	int64_t ; // 0x240(0x08)
	struct Utask(t)* ; // 0x248(0x08)
	VerseFunctionProperty ; // 0x250(0x10)
	OptionProperty ; // 0x260(0x39)
	char pad_299[0x7]; // 0x299(0x07)
	int64_t ; // 0x2a0(0x08)
	struct Utask(t)* ; // 0x2a8(0x08)
	VerseFunctionProperty ; // 0x2b0(0x10)
	struct Ftuple_L_R ; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	int64_t ; // 0x2c8(0x08)
	struct UObject* ; // 0x2d0(0x08)
	OptionProperty ; // 0x2d8(0x08)
	VerseDynamicProperty ; // 0x2e0(0x10)
	OptionProperty ; // 0x2f0(0x11)
	char pad_301[0x7]; // 0x301(0x07)
	VerseDynamicProperty ; // 0x308(0x10)
	VerseDynamicProperty ; // 0x318(0x10)
	struct Fvector3 ; // 0x328(0x18)
	struct UObject* ; // 0x340(0x08)
	OptionProperty ; // 0x348(0x08)
	OptionProperty ; // 0x350(0x19)
	char pad_369[0x7]; // 0x369(0x07)
	VerseFunctionProperty ; // 0x370(0x10)
	struct Ftuple_L_R ; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	OptionProperty ; // 0x388(0x09)
	char pad_391[0x7]; // 0x391(0x07)
	double ; // 0x398(0x08)
	VerseFunctionProperty ; // 0x3a0(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x3b0(0x30)
	struct Fvector3 ; // 0x3e0(0x18)
	struct UObject* ; // 0x3f8(0x08)
	OptionProperty ; // 0x400(0x08)
	VerseFunctionProperty ; // 0x408(0x10)
	struct Ftuple_L_R ; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	OptionProperty ; // 0x420(0x09)
	char pad_429[0x7]; // 0x429(0x07)
	double ; // 0x430(0x08)
	VerseFunctionProperty ; // 0x438(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x448(0x30)
	struct Fvector3 ; // 0x478(0x18)
	VerseFunctionProperty ; // 0x490(0x10)
	enum class EVerseTrue ; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	VerseFunctionProperty ; // 0x4a8(0x10)
	VerseStringProperty ; // 0x4b8(0x10)
	struct UObject* ; // 0x4c8(0x08)
	struct Utask(t)* ; // 0x4d0(0x08)
	VerseFunctionProperty ; // 0x4d8(0x10)
	int64_t ; // 0x4e8(0x08)
	VerseFunctionProperty ; // 0x4f0(0x10)
	VerseFunctionProperty ; // 0x500(0x10)
	struct Ftuple_L_R ; // 0x510(0x01)
	enum class EVerseTrue ; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	VerseFunctionProperty ; // 0x518(0x10)
	VerseStringProperty ; // 0x528(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$ShootTargetService_L_Nfloat_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$SprintService
// Size: 0x198 (Inherited: 0x148)
struct Utask_companion_ai$SprintService : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	struct UObject* ; // 0x168(0x08)
	struct Utask(t)* ; // 0x170(0x08)
	VerseFunctionProperty ; // 0x178(0x10)
	struct Ftuple_L_R ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	int64_t ; // 0x190(0x08)

	int64_t Update(); // Function CompanionAI.task_companion_ai$SprintService.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$TacticalSprintService
// Size: 0x198 (Inherited: 0x148)
struct Utask_companion_ai$TacticalSprintService : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	struct UObject* ; // 0x168(0x08)
	struct Utask(t)* ; // 0x170(0x08)
	VerseFunctionProperty ; // 0x178(0x10)
	struct Ftuple_L_R ; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	int64_t ; // 0x190(0x08)

	int64_t Update(); // Function CompanionAI.task_companion_ai$TacticalSprintService.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R
// Size: 0x2e0 (Inherited: 0x148)
struct Utask_companion_ai$WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_Lfort__character_Mfloat_R __verse_0xB2CDDD72_Argument; // 0x150(0x10)
	struct Fvector3 ; // 0x160(0x18)
	char pad_178[0x8]; // 0x178(0x08)
	struct FTransform ; // 0x180(0x50)
	struct UObject* ; // 0x1d0(0x08)
	VerseFunctionProperty ; // 0x1d8(0x10)
	struct Ftuple_L_R ; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	double ; // 0x1f0(0x08)
	VerseFunctionProperty ; // 0x1f8(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x208(0x30)
	char pad_238[0x8]; // 0x238(0x08)
	struct FTransform ; // 0x240(0x50)
	struct UObject* ; // 0x290(0x08)
	VerseFunctionProperty ; // 0x298(0x10)
	struct Ftuple_L_R ; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	OptionProperty ; // 0x2b0(0x09)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct Utask(t)* ; // 0x2c0(0x08)
	VerseFunctionProperty ; // 0x2c8(0x10)
	int64_t ; // 0x2d8(0x08)

	int64_t Update(); // Function CompanionAI.task_companion_ai$WaitForCharacterMovement_L_Nfort__character_M_Nfloat_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_ai$WaitForDamage
// Size: 0x1e0 (Inherited: 0x148)
struct Utask_companion_ai$WaitForDamage : Utask(t) {
	struct Ucompanion_ai* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class EVerseTrue ; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	VerseFunctionProperty ; // 0x158(0x10)
	VerseStringProperty ; // 0x168(0x10)
	struct UObject* ; // 0x178(0x08)
	OptionProperty ; // 0x180(0x08)
	struct UObject* ; // 0x188(0x08)
	struct Utask(t)* ; // 0x190(0x08)
	VerseFunctionProperty ; // 0x198(0x10)
	struct Ftuple_L_R ; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	int64_t ; // 0x1b0(0x08)
	enum class EVerseTrue ; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	VerseFunctionProperty ; // 0x1c0(0x10)
	VerseStringProperty ; // 0x1d0(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_ai$WaitForDamage.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// Size: 0x2d9 (Inherited: 0x148)
struct Utask_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : Utask(t) {
	struct Ucompanion_creature* _Self; // 0x148(0x08)
	struct Ftuple_Lvector3_Mfloat_Mcolor_R __verse_0xB2CDDD72_Argument; // 0x150(0x38)
	OptionProperty ; // 0x188(0x02)
	enum class EVerseTrue ; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	VerseFunctionProperty ; // 0x190(0x10)
	struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R ; // 0x1a0(0x68)
	OptionProperty ; // 0x208(0x49)
	char pad_251[0x7]; // 0x251(0x07)
	struct Fsphere_draw_params ; // 0x258(0x48)
	struct Utask(t)* ; // 0x2a0(0x08)
	VerseFunctionProperty ; // 0x2a8(0x10)
	int64_t ; // 0x2b8(0x08)
	enum class EVerseTrue ; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	VerseFunctionProperty ; // 0x2c8(0x10)
	struct Ftuple_L_R ; // 0x2d8(0x01)

	int64_t Update(); // Function CompanionAI.task_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_creature$GameLoop
// Size: 0x649 (Inherited: 0x148)
struct Utask_companion_creature$GameLoop : Utask(t) {
	struct Ucompanion_creature* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	struct UObject* ; // 0x168(0x08)
	OptionProperty ; // 0x170(0x08)
	OptionProperty ; // 0x178(0x08)
	VerseFunctionProperty ; // 0x180(0x10)
	struct Ftuple_L_R ; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct Fvector3 ; // 0x198(0x18)
	struct FTransform ; // 0x1b0(0x50)
	struct UObject* ; // 0x200(0x08)
	VerseFunctionProperty ; // 0x208(0x10)
	struct Ftuple_L_R ; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UObject* ; // 0x220(0x08)
	struct Utask(t)* ; // 0x228(0x08)
	VerseFunctionProperty ; // 0x230(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x240(0x20)
	struct Ufort_navigation_target* ; // 0x260(0x08)
	VerseFunctionProperty ; // 0x268(0x10)
	struct Fvector3 ; // 0x278(0x18)
	VerseFunctionProperty ; // 0x290(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x2a0(0x30)
	struct Fvector3 ; // 0x2d0(0x18)
	OptionProperty ; // 0x2e8(0x11)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	int64_t ; // 0x300(0x08)
	VerseFunctionProperty ; // 0x308(0x10)
	struct UObject* ; // 0x318(0x08)
	VerseFunctionProperty ; // 0x320(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x330(0x20)
	struct Ufort_navigation_target* ; // 0x350(0x08)
	VerseFunctionProperty ; // 0x358(0x10)
	struct Fvector3 ; // 0x368(0x18)
	VerseFunctionProperty ; // 0x380(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x390(0x30)
	struct Fvector3 ; // 0x3c0(0x18)
	OptionProperty ; // 0x3d8(0x11)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	VerseFunctionProperty ; // 0x3f0(0x10)
	struct UObject* ; // 0x400(0x08)
	VerseFunctionProperty ; // 0x408(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x418(0x20)
	struct Ufort_navigation_target* ; // 0x438(0x08)
	VerseFunctionProperty ; // 0x440(0x10)
	struct Fvector3 ; // 0x450(0x18)
	VerseFunctionProperty ; // 0x468(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x478(0x30)
	struct Fvector3 ; // 0x4a8(0x18)
	OptionProperty ; // 0x4c0(0x11)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	VerseFunctionProperty ; // 0x4d8(0x10)
	struct UObject* ; // 0x4e8(0x08)
	VerseFunctionProperty ; // 0x4f0(0x10)
	struct Ftuple_Lfort__navigation__target_M_QNavigationParameters_Nfort__navigation__parameters_20_3d_20_2e_2e_2e_R ; // 0x500(0x20)
	struct Ufort_navigation_target* ; // 0x520(0x08)
	VerseFunctionProperty ; // 0x528(0x10)
	struct Fvector3 ; // 0x538(0x18)
	VerseFunctionProperty ; // 0x550(0x10)
	struct Ftuple_Lvector3_Mvector3_R ; // 0x560(0x30)
	struct Fvector3 ; // 0x590(0x18)
	OptionProperty ; // 0x5a8(0x11)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	VerseFunctionProperty ; // 0x5c0(0x10)
	struct UObject* ; // 0x5d0(0x08)
	OptionProperty ; // 0x5d8(0x08)
	struct Ulog* ; // 0x5e0(0x08)
	enum class EVerseTrue ; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	VerseFunctionProperty ; // 0x5f0(0x10)
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R ; // 0x600(0x18)
	VerseStringProperty ; // 0x618(0x10)
	OptionProperty ; // 0x628(0x02)
	char pad_62A[0x6]; // 0x62a(0x06)
	struct UObject* ; // 0x630(0x08)
	VerseFunctionProperty ; // 0x638(0x10)
	struct Ftuple_L_R ; // 0x648(0x01)

	int64_t Update(); // Function CompanionAI.task_companion_creature$GameLoop.Update // (Public|HasOutParms|HasDefaults) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_companion_creature$OnBegin
// Size: 0x360 (Inherited: 0x148)
struct Utask_companion_creature$OnBegin : Utask(t) {
	struct Ucompanion_creature* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UObject* ; // 0x158(0x08)
	OptionProperty ; // 0x160(0x08)
	OptionProperty ; // 0x168(0x08)
	VerseFunctionProperty ; // 0x170(0x10)
	struct UObject* ; // 0x180(0x08)
	OptionProperty ; // 0x188(0x08)
	OptionProperty ; // 0x190(0x08)
	VerseFunctionProperty ; // 0x198(0x10)
	struct UObject* ; // 0x1a8(0x08)
	OptionProperty ; // 0x1b0(0x08)
	OptionProperty ; // 0x1b8(0x08)
	VerseFunctionProperty ; // 0x1c0(0x10)
	struct UObject* ; // 0x1d0(0x08)
	OptionProperty ; // 0x1d8(0x08)
	OptionProperty ; // 0x1e0(0x08)
	VerseFunctionProperty ; // 0x1e8(0x10)
	OptionProperty ; // 0x1f8(0x08)
	OptionProperty ; // 0x200(0x08)
	OptionProperty ; // 0x208(0x08)
	OptionProperty ; // 0x210(0x08)
	struct Utask(t)* ; // 0x218(0x08)
	VerseFunctionProperty ; // 0x220(0x10)
	struct Ftuple_L_R ; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	int64_t ; // 0x238(0x08)
	VerseStringProperty ; // 0x240(0x10)
	struct Ulog* ; // 0x250(0x08)
	enum class EVerseTrue ; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	VerseFunctionProperty ; // 0x260(0x10)
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R ; // 0x270(0x18)
	OptionProperty ; // 0x288(0x02)
	enum class EVerseTrue ; // 0x28a(0x01)
	char pad_28B[0x5]; // 0x28b(0x05)
	VerseFunctionProperty ; // 0x290(0x10)
	struct Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R ; // 0x2a0(0x40)
	struct Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R ; // 0x2e0(0x40)
	OptionProperty ; // 0x320(0x19)
	char pad_339[0x7]; // 0x339(0x07)
	OptionProperty ; // 0x340(0x09)
	char pad_349[0x7]; // 0x349(0x07)
	VerseStringProperty ; // 0x350(0x10)

	int64_t Update(); // Function CompanionAI.task_companion_creature$OnBegin.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_fort_br_creature_actions_interface$RunDefaultBehavior
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_br_creature_actions_interface$RunDefaultBehavior : Utask(t) {
	struct Ufort_br_creature_actions_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function CompanionAI.task_fort_br_creature_actions_interface$RunDefaultBehavior.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_fort_br_npc_actions_interface$RunDefaultBehavior
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_br_npc_actions_interface$RunDefaultBehavior : Utask(t) {
	struct Ufort_br_npc_actions_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function CompanionAI.task_fort_br_npc_actions_interface$RunDefaultBehavior.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_fort_creature_component$RunDefaultBehavior
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_creature_component$RunDefaultBehavior : Utask(t) {
	struct Ufort_creature_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function CompanionAI.task_fort_creature_component$RunDefaultBehavior.Update // (Native|Public|HasOutParms) // @ game+0x6598864
};

// VerseClass CompanionAI.task_fort_npc_component$RunDefaultBehavior
// Size: 0x152 (Inherited: 0x148)
struct Utask_fort_npc_component$RunDefaultBehavior : Utask(t) {
	struct Ufort_npc_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	enum class action_result _RetVal; // 0x151(0x01)

	int64_t Update(); // Function CompanionAI.task_fort_npc_component$RunDefaultBehavior.Update // (Native|Public|HasOutParms) // @ game+0x659886c
};

// VerseClass CompanionAI.task_fort_ping_interface$OnNPCCommand
// Size: 0x191 (Inherited: 0x148)
struct Utask_fort_ping_interface$OnNPCCommand : Utask(t) {
	struct Ufort_ping_interface* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)

	int64_t Update(); // Function CompanionAI.task_fort_ping_interface$OnNPCCommand.Update // (Public|HasOutParms) // @ game+0xdef49c
};

// VerseClass CompanionAI.task_ping_component$OnNPCCommand
// Size: 0x191 (Inherited: 0x148)
struct Utask_ping_component$OnNPCCommand : Utask(t) {
	struct Uping_component* _Self; // 0x148(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	OptionProperty _RetVal; // 0x158(0x39)

	int64_t Update(); // Function CompanionAI.task_ping_component$OnNPCCommand.Update // (Native|Public|HasOutParms) // @ game+0x6598834
};

