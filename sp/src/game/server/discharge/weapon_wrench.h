//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose:
//
//=============================================================================//

#ifndef WEAPON_Wrench_H
#define WEAPON_Wrench_H

#include "basebludgeonweapon.h"

#if defined( _WIN32 )
#pragma once
#endif

#ifdef HL2MP
#error weapon_crowbar.h must not be included in hl2mp. The windows compiler will use the wrong class elsewhere if it is.
#endif

#define	HAMMER_RANGE	75.0f
#define	HAMMER_REFIRE	0.4f

//-----------------------------------------------------------------------------
// CWeaponWrench
//-----------------------------------------------------------------------------

class CWeaponWrench : public CBaseHLBludgeonWeapon
{
public:
	DECLARE_CLASS( CWeaponWrench, CBaseHLBludgeonWeapon );

	DECLARE_SERVERCLASS();
	DECLARE_ACTTABLE();

	CWeaponWrench();

	float		GetRange( void )		{	return	HAMMER_RANGE;	}
	float		GetFireRate( void )		{	return	HAMMER_REFIRE;	}

	void		AddViewKick( void );
	float		GetDamageForActivity( Activity hitActivity );

	virtual int WeaponMeleeAttack1Condition( float flDot, float flDist );
	void		SecondaryAttack( void )	{	return;	}

	// Animation event
	virtual void Operator_HandleAnimEvent( animevent_t *pEvent, CBaseCombatCharacter *pOperator );

private:
	// Animation event handlers
	void HandleAnimEventMeleeHit( animevent_t *pEvent, CBaseCombatCharacter *pOperator );
};

#endif // WEAPON_Wrench_H
