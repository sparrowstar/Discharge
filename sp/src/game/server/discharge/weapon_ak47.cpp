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
#include "in_buttons.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

#define DAMAGE_PER_SECOND 10

#define MAX_SETTINGS	5

float RateOfFire[ MAX_SETTINGS ] = 
{
	0.1,
	0.2,
	0.5,
	0.7,
	1.0,
};

float Damage[ MAX_SETTINGS ] =
{
	2,
	4,
	10,
	14,
	20,
};


//=========================================================
//=========================================================
class CWeaponAK47 : public CHLMachineGun
{
	DECLARE_DATADESC();
public:
	DECLARE_CLASS( CWeaponAK47, CHLMachineGun );

	DECLARE_SERVERCLASS();

	CWeaponAK47();

	int m_ROF;

	void	Precache( void );
	bool	Deploy( void );

	float GetFireRate( void ) {return RateOfFire[ m_ROF ];}

	int CapabilitiesGet( void ) { return bits_CAP_WEAPON_RANGE_ATTACK1; }

	virtual void FireBullets( const FireBulletsInfo_t &info );

	virtual const Vector& GetBulletSpread(void)
	{
		if (m_bIsIronsighted)
		{
			static const Vector cone = VECTOR_CONE_3DEGREES;
			return cone;
		}
		else
		{
			static const Vector cone = VECTOR_CONE_10DEGREES;
			return cone;
		}
	}

	void Operator_HandleAnimEvent( animevent_t *pEvent, CBaseCombatCharacter *pOperator )
	{
		switch( pEvent->event )
		{
			case EVENT_WEAPON_SMG1:
			{
				Vector vecShootOrigin, vecShootDir;
				vecShootOrigin = pOperator->Weapon_ShootPosition( );

				CAI_BaseNPC *npc = pOperator->MyNPCPointer();
				ASSERT( npc != NULL );
				
				vecShootDir = npc->GetActualShootTrajectory( vecShootOrigin );

				WeaponSound(SINGLE_NPC);
				pOperator->FireBullets( 1, vecShootOrigin, vecShootDir, VECTOR_CONE_PRECALCULATED, MAX_TRACE_LENGTH, m_iPrimaryAmmoType, 2 );
				pOperator->DoMuzzleFlash();
			}
			break;
			default:
				CBaseCombatWeapon::Operator_HandleAnimEvent( pEvent, pOperator );
				break;
		}
	}
	DECLARE_ACTTABLE();
};

IMPLEMENT_SERVERCLASS_ST(CWeaponAK47, DT_WeaponAK47)
END_SEND_TABLE()

LINK_ENTITY_TO_CLASS( weapon_ak47, CWeaponAK47 );
PRECACHE_WEAPON_REGISTER(weapon_ak47);

acttable_t	CWeaponAK47::m_acttable[] = 
{
		{ ACT_RANGE_ATTACK1,			ACT_RANGE_ATTACK_AR2,			true },
	{ ACT_RELOAD,					ACT_RELOAD_SMG1,				true },		// FIXME: hook to AR2 unique
	{ ACT_IDLE,						ACT_IDLE_SMG1,					true },		// FIXME: hook to AR2 unique
	{ ACT_IDLE_ANGRY,				ACT_IDLE_ANGRY_SMG1,			true },		// FIXME: hook to AR2 unique

	{ ACT_WALK,						ACT_WALK_RIFLE,					true },

// Readiness activities (not aiming)
	{ ACT_IDLE_RELAXED,				ACT_IDLE_SMG1_RELAXED,			false },//never aims
	{ ACT_IDLE_STIMULATED,			ACT_IDLE_SMG1_STIMULATED,		false },
	{ ACT_IDLE_AGITATED,			ACT_IDLE_ANGRY_SMG1,			false },//always aims

	{ ACT_WALK_RELAXED,				ACT_WALK_RIFLE_RELAXED,			false },//never aims
	{ ACT_WALK_STIMULATED,			ACT_WALK_RIFLE_STIMULATED,		false },
	{ ACT_WALK_AGITATED,			ACT_WALK_AIM_RIFLE,				false },//always aims

	{ ACT_RUN_RELAXED,				ACT_RUN_RIFLE_RELAXED,			false },//never aims
	{ ACT_RUN_STIMULATED,			ACT_RUN_RIFLE_STIMULATED,		false },
	{ ACT_RUN_AGITATED,				ACT_RUN_AIM_RIFLE,				false },//always aims

// Readiness activities (aiming)
	{ ACT_IDLE_AIM_RELAXED,			ACT_IDLE_SMG1_RELAXED,			false },//never aims	
	{ ACT_IDLE_AIM_STIMULATED,		ACT_IDLE_AIM_RIFLE_STIMULATED,	false },
	{ ACT_IDLE_AIM_AGITATED,		ACT_IDLE_ANGRY_SMG1,			false },//always aims

	{ ACT_WALK_AIM_RELAXED,			ACT_WALK_RIFLE_RELAXED,			false },//never aims
	{ ACT_WALK_AIM_STIMULATED,		ACT_WALK_AIM_RIFLE_STIMULATED,	false },
	{ ACT_WALK_AIM_AGITATED,		ACT_WALK_AIM_RIFLE,				false },//always aims

	{ ACT_RUN_AIM_RELAXED,			ACT_RUN_RIFLE_RELAXED,			false },//never aims
	{ ACT_RUN_AIM_STIMULATED,		ACT_RUN_AIM_RIFLE_STIMULATED,	false },
	{ ACT_RUN_AIM_AGITATED,			ACT_RUN_AIM_RIFLE,				false },//always aims
//End readiness activities

	{ ACT_WALK_AIM,					ACT_WALK_AIM_RIFLE,				true },
	{ ACT_WALK_CROUCH,				ACT_WALK_CROUCH_RIFLE,			true },
	{ ACT_WALK_CROUCH_AIM,			ACT_WALK_CROUCH_AIM_RIFLE,		true },
	{ ACT_RUN,						ACT_RUN_RIFLE,					true },
	{ ACT_RUN_AIM,					ACT_RUN_AIM_RIFLE,				true },
	{ ACT_RUN_CROUCH,				ACT_RUN_CROUCH_RIFLE,			true },
	{ ACT_RUN_CROUCH_AIM,			ACT_RUN_CROUCH_AIM_RIFLE,		true },
	{ ACT_GESTURE_RANGE_ATTACK1,	ACT_GESTURE_RANGE_ATTACK_AR2,	false },
	{ ACT_COVER_LOW,				ACT_COVER_SMG1_LOW,				false },		// FIXME: hook to AR2 unique
	{ ACT_RANGE_AIM_LOW,			ACT_RANGE_AIM_AR2_LOW,			false },
	{ ACT_RANGE_ATTACK1_LOW,		ACT_RANGE_ATTACK_SMG1_LOW,		true },		// FIXME: hook to AR2 unique
	{ ACT_RELOAD_LOW,				ACT_RELOAD_SMG1_LOW,			false },
	{ ACT_GESTURE_RELOAD,			ACT_GESTURE_RELOAD_SMG1,		true },
//	{ ACT_RANGE_ATTACK2, ACT_RANGE_ATTACK_AR2_GRENADE, true },

{ ACT_HL2MP_IDLE,                    ACT_HL2MP_IDLE_AR2,                    false },
    { ACT_HL2MP_RUN,                    ACT_HL2MP_RUN_AR2,                    false },
    { ACT_HL2MP_IDLE_CROUCH,            ACT_HL2MP_IDLE_CROUCH_AR2,            false },
    { ACT_HL2MP_WALK_CROUCH,            ACT_HL2MP_WALK_CROUCH_AR2,            false },
    { ACT_HL2MP_GESTURE_RANGE_ATTACK,    ACT_HL2MP_GESTURE_RANGE_ATTACK_AR2,    false },
    { ACT_HL2MP_GESTURE_RELOAD,            ACT_GESTURE_RELOAD_SMG1,        false },
    { ACT_HL2MP_JUMP,                    ACT_HL2MP_JUMP_AR2,                    false },
    { ACT_RANGE_ATTACK1,                ACT_RANGE_ATTACK_AR2,                false },
};

IMPLEMENT_ACTTABLE(CWeaponAK47);

//---------------------------------------------------------
// Save/Restore
//---------------------------------------------------------
BEGIN_DATADESC( CWeaponAK47 )

	DEFINE_FIELD( m_ROF,			FIELD_INTEGER ),

END_DATADESC()


CWeaponAK47::CWeaponAK47( )
{
	m_ROF = 1;
}

void CWeaponAK47::Precache( void )
{
	BaseClass::Precache();
}

bool CWeaponAK47::Deploy( void )
{
	//CBaseCombatCharacter *pOwner  = m_hOwner;
	return BaseClass::Deploy();
}


//=========================================================
//=========================================================
void CWeaponAK47::FireBullets( const FireBulletsInfo_t &info )
{
	if(CBasePlayer *pPlayer = ToBasePlayer( GetOwner() ))
	{
		pPlayer->FireBullets( info );
	}
}
