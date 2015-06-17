//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:		Projectile shot from the ociw 
//
// $Workfile:     $
// $Date:         $
//
//-----------------------------------------------------------------------------
// $Log: $
//
// $NoKeywords: $
//=============================================================================//

#ifndef	GRENADEociw_H
#define	GRENADEociw_H

#include "basegrenade_shared.h"

#define	MAX_ociw_NO_COLLIDE_TIME 0.2

class SmokeTrail;
class CWeaponociw;

class CGrenadeociw : public CBaseGrenade
{
public:
	DECLARE_CLASS( CGrenadeociw, CBaseGrenade );

	CHandle< SmokeTrail > m_hSmokeTrail;
	float				 m_fSpawnTime;
	float				m_fDangerRadius;


	void		Spawn( void );
	void		Precache( void );
	void 		GrenadeociwTouch( CBaseEntity *pOther );
	void		GrenadeociwThink( void );
	void		Event_Killed( const CTakeDamageInfo &info );

public:
	void EXPORT				Detonate(void);
	CGrenadeociw(void);

	DECLARE_DATADESC();
};

#endif	//GRENADEociw_H
