//====== Copyright © 2015, Discharge Team, Some rights reserved. =======
//
// Purpose: 
//
// $NoKeywords: $
//
//=============================================================================//
//
// battery.cpp
//
// implementation of CHudVersion class
//
#include "cbase.h"
#include "hud.h"
#include "hudelement.h"
#include "hud_macros.h"
#include "hud_numericdisplay.h"
#include "iclientmode.h"

#include "vgui_controls/AnimationController.h"
#include "vgui/ILocalize.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

//-----------------------------------------------------------------------------
// Purpose: Displays suit power (armor) on hud
//-----------------------------------------------------------------------------
class CHudVersion : public CHudNumericDisplay, public CHudElement
{
	DECLARE_CLASS_SIMPLE( CHudVersion, CHudNumericDisplay );

public:
	CHudVersion( const char *pElementName );
	void Init( void );
	void Reset( void );
	void VidInit( void );
	void OnThink( void );
	void MsgFunc_Battery(bf_read &msg );
	
private:
	int		m_iBat;	
	int		m_iNewBat;
};

DECLARE_HUDELEMENT( CHudVersion );

//-----------------------------------------------------------------------------
// Purpose: Constructor
//-----------------------------------------------------------------------------
CHudVersion::CHudVersion( const char *pElementName ) : BaseClass(NULL, "HudVersion"), CHudElement( pElementName )
{
	SetHiddenBits( HIDEHUD_HEALTH | HIDEHUD_NEEDSUIT );
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CHudVersion::Init( void )
{
	Reset();
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CHudVersion::Reset( void )
{				//Major Minor Release Build
	SetLabelText(L"Pre-Alpha 0.0.1.91");
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CHudVersion::VidInit( void )
{
	Reset();
}


//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CHudVersion::OnThink( void )
{
	if ( m_iBat == m_iNewBat )
		return;

	m_iBat = m_iNewBat;

	SetDisplayValue(m_iBat);
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CHudVersion::MsgFunc_Battery( bf_read &msg )
{
	m_iNewBat = msg.ReadShort();
}
