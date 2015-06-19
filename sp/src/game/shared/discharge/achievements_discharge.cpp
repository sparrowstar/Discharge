//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose: 
//
//=============================================================================


#include "cbase.h"

#define DISCHARGE_ACHIEVEMENT_TEST 151

#if GAME_DLL

#include "achievementmgr.h"
#include "baseachievement.h"

CAchievementMgr g_AchievementMgrHL2;	// global achievement mgr for HL2

class CAchievementDischargeTestBasic : public CBaseAchievement
{
	void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_WITH_GAME);
		SetVictimFilter("npc_houndeye");
		SetGoal(1);
	}
};
DECLARE_ACHIEVEMENT(CAchievementDischargeTestBasic, DISCHARGE_ACHIEVEMENT_TEST, "ACHIEVEMENT_TEST", 5);

#endif // GAME_DLL