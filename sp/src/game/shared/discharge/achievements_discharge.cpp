//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose: 
//
//=============================================================================


#include "cbase.h"

#ifdef GAME_DLL

#include "achievementmgr.h"
#include "baseachievement.h"


CAchievementMgr g_AchievementMgrHL2;	// global achievement mgr for HL2

class CAchievementDischargeTestBasic : public CBaseAchievement
{
protected:

	virtual void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_GLOBAL);
		SetGameDirFilter("mod_discharge");
		SetGoal(1);
	}

	virtual void Event_EntityKilled( CBaseEntity *pVictim, CBaseEntity *pAttacker, CBaseEntity *pInflictor, IGameEvent *event ) 
	{
		if (FClassnameIs(pVictim, "npc_houndeye"))
		{
			IncrementCount();
		}
	}
};
DECLARE_ACHIEVEMENT(CAchievementDischargeTestBasic, DISCHARGE_ACHIEVEMENT_TEST, "ACHIEVEMENT_TEST", 5);

class CAchievementDischargeKill5Combine : public CBaseAchievement
{
	virtual void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_GLOBAL);
		SetVictimFilter("npc_combine_s");
		SetGoal(5);
	}
};
DECLARE_ACHIEVEMENT(CAchievementDischargeKill5Combine, DISCHARGE_ACHIEVEMENT_KILL5COMBINE, "ACHIEVEMENT_KILL5COMBINE", 5);

#endif // GAME_DLL