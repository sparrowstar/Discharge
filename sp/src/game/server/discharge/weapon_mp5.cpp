//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "basehlcombatweapon.h"
#include "NPCevent.h"
#include "basecombatcharacter.h"
#include "ai_basenpc.h"
#include "player.h"
#include "game.h"
#include "in_buttons.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

class CWeaponMP5 : public CHLSelectFireMachineGun
{
public:
	DECLARE_CLASS( CWeaponMP5, CHLSelectFireMachineGun );

	CWeaponMP5();

	DECLARE_SERVERCLASS();

	const Vector	&GetBulletSpread( void );

	void			Precache( void );
	void			AddViewKick( void );
	void			Operator_HandleAnimEvent( animevent_t *pEvent, CBaseCombatCharacter *pOperator );

	float			GetFireRate( void ) { return 0.1f; }
	int				CapabilitiesGet( void ) { return bits_CAP_WEAPON_RANGE_ATTACK1; }

	DECLARE_ACTTABLE();
};

IMPLEMENT_SERVERCLASS_ST(CWeaponMP5, DT_WeaponMP5)
END_SEND_TABLE()

LINK_ENTITY_TO_CLASS( weapon_mp5, CWeaponMP5 );
PRECACHE_WEAPON_REGISTER(weapon_mp5);

acttable_t	CWeaponMP5::m_acttable[] = 
{
	{ ACT_RANGE_ATTACK1, ACT_RANGE_ATTACK_SMG2, true },
	{ ACT_HL2MP_IDLE,                    ACT_HL2MP_IDLE_SMG1,                    false },
    { ACT_HL2MP_RUN,                    ACT_HL2MP_RUN_SMG1,                    false },
    { ACT_HL2MP_IDLE_CROUCH,            ACT_HL2MP_IDLE_CROUCH_SMG1,            false },
    { ACT_HL2MP_WALK_CROUCH,            ACT_HL2MP_WALK_CROUCH_SMG1,            false },
    { ACT_HL2MP_GESTURE_RANGE_ATTACK,    ACT_HL2MP_GESTURE_RANGE_ATTACK_SMG1,    false },
    { ACT_HL2MP_GESTURE_RELOAD,            ACT_GESTURE_RELOAD_SMG1,        false },
    { ACT_HL2MP_JUMP,                    ACT_HL2MP_JUMP_SMG1,                    false },
    { ACT_RANGE_ATTACK1,                ACT_RANGE_ATTACK_SMG1,                false },
};

IMPLEMENT_ACTTABLE(CWeaponMP5);

//=========================================================
CWeaponMP5::CWeaponMP5( )
{
	m_fMaxRange1		= 2000;
	m_fMinRange1		= 32;

	m_iFireMode			= FIREMODE_3RNDBURST;
}

void CWeaponMP5::Precache( void )
{
	BaseClass::Precache();
}

//-----------------------------------------------------------------------------
// Purpose: 
// Output : const Vector
//-----------------------------------------------------------------------------
const Vector &CWeaponMP5::GetBulletSpread( void )
{
	static const Vector cone = VECTOR_CONE_10DEGREES;
	return cone;
}

//-----------------------------------------------------------------------------
// Purpose: 
// Input  : *pEvent - 
//			*pOperator - 
//-----------------------------------------------------------------------------
void CWeaponMP5::Operator_HandleAnimEvent( animevent_t *pEvent, CBaseCombatCharacter *pOperator )
{
	switch( pEvent->event )
	{
		case EVENT_WEAPON_SMG2:
		{
			Vector vecShootOrigin, vecShootDir;
			vecShootOrigin = pOperator->Weapon_ShootPosition( );

			CAI_BaseNPC *npc = pOperator->MyNPCPointer();
			ASSERT( npc != NULL );
			vecShootDir = npc->GetActualShootTrajectory( vecShootOrigin );

			WeaponSound(SINGLE_NPC);
			pOperator->FireBullets( 1, vecShootOrigin, vecShootDir, VECTOR_CONE_PRECALCULATED, MAX_TRACE_LENGTH, m_iPrimaryAmmoType, 2 );
			pOperator->DoMuzzleFlash();
			m_iClip1 = m_iClip1 - 1;
		}
		break;
		default:
			BaseClass::Operator_HandleAnimEvent( pEvent, pOperator );
			break;
	}
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CWeaponMP5::AddViewKick( void )
{
	#define	EASY_DAMPEN			0.5f
	#define	MAX_VERTICAL_KICK	2.0f	//Degrees
	#define	SLIDE_LIMIT			1.0f	//Seconds
	
	//Get the view kick
	CBasePlayer *pPlayer = ToBasePlayer( GetOwner() );

	if (!pPlayer)
		return;

	DoMachineGunKick( pPlayer, EASY_DAMPEN, MAX_VERTICAL_KICK, m_fFireDuration, SLIDE_LIMIT );
}
