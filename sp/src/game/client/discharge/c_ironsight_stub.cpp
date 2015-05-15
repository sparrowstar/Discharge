//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "c_basehlplayer.h"
#include "basehlcombatweapon_shared.h"
#include "c_basehlcombatweapon.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

void CC_ToggleIronSights( void )
{
	CBasePlayer* pPlayer = C_BasePlayer::GetLocalPlayer();
	if( pPlayer == NULL )
		return;
 
	CBaseCombatWeapon *pWeapon = pPlayer->GetActiveWeapon();
	if( pWeapon == NULL )
		return;
 
	pWeapon->ToggleIronsights();
 
	engine->ServerCmd( "toggle_ironsight" ); //forward to server
}
 
static ConCommand toggle_ironsight("toggle_ironsight", CC_ToggleIronSights);