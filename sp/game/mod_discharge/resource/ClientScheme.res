///////////////////////////////////////////////////////////
// Tracker scheme resource file
//
// sections:
//		Colors			- all the colors used by the scheme
//		BaseSettings	- contains settings for app to use to draw controls
//		Fonts			- list of all the fonts used by app
//		Borders			- description of all the borders
//
///////////////////////////////////////////////////////////
Scheme
{
	//////////////////////// COLORS ///////////////////////////
	// color details
	// this is a list of all the colors used by the scheme
	Colors
	{
	}
	
	///////////////////// BASE SETTINGS ////////////////////////
	//
	// default settings for all panels
	// controls use these to determine their settings
	BaseSettings
	{
		"FgColor"			"206 206 206 255"
		"BgColor"			"0 0 0 200"

		"Panel.FgColor"			"206 206 206 255"
		"Panel.BgColor"			"0 0 0 150"
		
		"BrightFg"		"206 206 206 255"

		"DamagedBg"			"180 0 0 200"
		"DamagedFg"			"180 0 0 230"
		"BrightDamagedFg"		"255 0 0 255"

		// weapon selection colors
		"SelectionNumberFg"		"206 206 206 255"
		"SelectionTextFg"		"206 206 206 255"
		"SelectionEmptyBoxBg" 	"0 0 0 200"
		"SelectionBoxBg" 		"0 0 0 200"
		"SelectionSelectedBoxBg" "0 0 0 200"
		
		"ZoomReticleColor"	"206 206 206 255"

		// HL1-style HUD colors
		"Yellowish"			"206 206 206 255"
		"Normal"			"206 206 206 255"
		"Caution"			"206 206 206 255"

		// Top-left corner of the "Half-Life 2" on the main screen
		"Main.Title1.X"				"76"
		"Main.Title1.Y"				"145"
		"Main.Title1.Color"	"255 255 255 255"

		// Top-left corner of secondary title e.g. "DEMO" on the main screen
		"Main.Title2.X"				"76"
		"Main.Title2.Y"				"190"
		"Main.Title2.Color"	"255 255 255 200"

		// Top-left corner of the menu on the main screen
		"Main.Menu.X"			"53"
		"Main.Menu.Y"			"240"

		// Blank space to leave beneath the menu on the main screen
		"Main.BottomBorder"	"32"
	}

	//////////////////////// BITMAP FONT FILES /////////////////////////////
	//
	// Bitmap Fonts are ****VERY*** expensive static memory resources so they are purposely sparse
	BitmapFontFiles
	{
		// UI buttons, custom font, (256x64)
		"Buttons"		"materials/vgui/fonts/buttons_32.vbf"
	}

	
	//////////////////////// FONTS /////////////////////////////
	//
	// describes all the fonts
	Fonts
	{
		// fonts are used in order that they are listed
		// fonts are used in order that they are listed
		"DebugFixed"
		{
			"1"
			{
				"name"		"Courier New"
				"tall"		"14"
				"weight"	"400"
				"antialias" "1"
			}
		}
		// fonts are used in order that they are listed
		"DebugFixedSmall"
		{
			"1"
			{
				"name"		"Courier New"
				"tall"		"14"
				"weight"	"400"
				"antialias" "1"
			}
		}
		// fonts listed later in the order will only be used if they fulfill a range not already filled
		// if a font fails to load then the subsequent fonts will replace
		Default
		{
			"1"
			{
				"name"		"Verdana"
				"tall"		"9"
				"weight"	"700"
				"antialias" "1"
				"yres"	"1 599"
			}
			"2"
			{
				"name"		"Shoguns Clan"
				"tall"		"12"
				"weight"	"700"
				"antialias" "1"
				"yres"	"600 767"
			}
			"3"
			{
				"name"		"Verdana"
				"tall"		"14"
				"weight"	"900"
				"antialias" "1"
				"yres"	"768 1023"
			}
			"4"
			{
				"name"		"Verdana"
				"tall"		"20"
				"weight"	"900"
				"antialias" "1"
				"yres"	"1024 1199"
			}
			"5"
			{
				"name"		"Verdana"
				"tall"		"24"
				"weight"	"900"
				"antialias" "1"
				"yres"	"1200 10000"
				"additive"	"1"
			}
		}
		"DefaultSmall"
		{
			"1"
			{
				"name"		"Verdana"
				"tall"		"12"
				"weight"	"0"
				"range"		"0x0000 0x017F"
				"yres"	"480 599"
			}
			"2"
			{
				"name"		"Verdana"
				"tall"		"13"
				"weight"	"0"
				"range"		"0x0000 0x017F"
				"yres"	"600 767"
			}
			"3"
			{
				"name"		"Verdana"
				"tall"		"14"
				"weight"	"0"
				"range"		"0x0000 0x017F"
				"yres"	"768 1023"
				"antialias"	"1"
			}
			"4"
			{
				"name"		"Verdana"
				"tall"		"20"
				"weight"	"0"
				"range"		"0x0000 0x017F"
				"yres"	"1024 1199"
				"antialias"	"1"
			}
			"5"
			{
				"name"		"Verdana"
				"tall"		"24"
				"weight"	"0"
				"range"		"0x0000 0x017F"
				"yres"	"1200 6000"
				"antialias"	"1"
			}
			"6"
			{
				"name"		"Arial"
				"tall"		"12"
				"range" 		"0x0000 0x00FF"
				"weight"		"0"
			}
		}
		"DefaultVerySmall"
		{
			"1"
			{
				"name"		"Verdana"
				"tall"		"12"
				"weight"	"0"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"480 599"
			}
			"2"
			{
				"name"		"Verdana"
				"tall"		"13"
				"weight"	"0"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"600 767"
			}
			"3"
			{
				"name"		"Verdana"
				"tall"		"14"
				"weight"	"0"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"768 1023"
				"antialias"	"1"
			}
			"4"
			{
				"name"		"Verdana"
				"tall"		"20"
				"weight"	"0"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"1024 1199"
				"antialias"	"1"
			}
			"5"
			{
				"name"		"Verdana"
				"tall"		"24"
				"weight"	"0"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"1200 6000"
				"antialias"	"1"
			}
			"6"
			{
				"name"		"Verdana"
				"tall"		"12"
				"range" 		"0x0000 0x00FF"
				"weight"		"0"
			}
			"7"
			{
				"name"		"Arial"
				"tall"		"11"
				"range" 		"0x0000 0x00FF"
				"weight"		"0"
			}
		}
		WeaponIcons
		{
			"1"
			{
				"name"		"HALFLIFE2"
				"tall"		"64"
				"tall_hidef"	"58"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		WeaponIconsSelected
		{
			"1"
			{
				"name"		"HALFLIFE2"
				"tall"		"64"
				"tall_hidef"	"58"
				"weight"	"0"
				"antialias" "1"
				"blur"		"5"
				"scanlines"	"2"
				"additive"	"1"
				"custom"	"1"
			}
		}
		WeaponIconsSmall
		{
			"1"
			{
				"name"		"HALFLIFE2"
				"tall"		"32"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		WeaponIconsCS
		{
			"1"
			{
				"name"		"cs"
				"tall"		"64"
				"tall_hidef"	"58"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		WeaponIconsSelectedCS
		{
			"1"
			{
				"name"		"cs"
				"tall"		"64"
				"tall_hidef"	"58"
				"weight"	"0"
				"antialias" "1"
				"blur"		"5"
				"scanlines"	"2"
				"additive"	"1"
				"custom"	"1"
			}
		}
		WeaponIconsSmallCS
		{
			"1"
			{
				"name"		"cs"
				"tall"		"32"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		Crosshairs
		{
			"1"
			{
				"name"		"HALFLIFE2"
				"tall"		"40"
				"weight"	"0"
				"antialias" "0"
				"additive"	"1"
				"custom"	"1"
				"yres"		"1 10000"
			}
		}
		QuickInfo
		{
			"1"	[$X360]
			{
				"name"		"HL2cross"
				"tall"		"57"
				"weight"	"0"
				"antialias" 	"1"
				"additive"	"1"
				"custom"	"1"
			}
			"1"	[$WIN32]
			{
				"name"		"HL2cross"
				"tall"		"28"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		HudNumbers
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"30"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		HudNumbersGlow
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"20"
				"weight"	"0"
				"blur"		"4"
				"scanlines" "2"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		HudNumbersSmall
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"16"	[$WIN32]
				"tall"		"22"	[$X360]
				"weight"	"1000"
				"additive"	"1"
				"antialias" "1"
				"custom"	"1"
			}
		}
		HudSelectionNumbers
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"11"
				"weight"	"700"
				"antialias" "1"
				"additive"	"1"
			}
		}
		HudHintTextLarge
		{
			"1"	[$X360]
			{
				"bitmap"	"1"
				"name"		"Buttons"
				"scalex"	"1.0"
				"scaley"	"1.0"
			}
			"1"	[$WIN32]
			{
				"name"		"Shoguns Clan"
				"tall"		"14"
				"weight"	"1000"
				"antialias" "1"
				"additive"	"1"
			}
		}
		HudHintTextSmall
		{
			"1"	[$WIN32]
			{
				"name"		"Shoguns Clan"
				"tall"		"11"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
			}
			"1"	[$X360]
			{
				"name"		"Verdana"
				"tall"		"12"
				"weight"	"700"
				"antialias" "1"
				"additive"	"1"
			}
		}
		HudSelectionText
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"8"
				"weight"	"700"
				"antialias" "1"
				"yres"	"1 599"
			}
			"2"
			{
				"name"		"Shoguns Clan"
				"tall"		"10"
				"weight"	"700"
				"antialias" "1"
				"yres"	"600 767"
			}
			"3"
			{
				"name"		"Shoguns Clan"
				"tall"		"12"
				"weight"	"900"
				"antialias" "1"
				"yres"	"768 1023"
			}
			"4"
			{
				"name"		"Shoguns Clan"
				"tall"		"16"
				"weight"	"900"
				"antialias" "1"
				"yres"	"1024 1199"
			}
			"5"
			{
				"name"		"Shoguns Clan"
				"tall"		"17"
				"weight"	"1000"
				"antialias" "1"
				"yres"	"1200 10000"
			}
		}
		GameUIButtons
		{
			"1"	[$X360]
			{
				"bitmap"	"1"
				"name"		"Buttons"
				"scalex"	"0.63"
				"scaley"	"0.63"
				"scalex_hidef"	"1.0"
				"scaley_hidef"	"1.0"
			}
		}
		BudgetLabel
		{
			"1"
			{
				"name"		"Courier New"
				"tall"		"14"
				"weight"	"400"
				"outline"	"1"
			}
		}
		DebugOverlay
		{
			"1"	[$WIN32]
			{
				"name"		"Courier New"
				"tall"		"14"
				"weight"	"400"
				"outline"	"1"
			}
			"1"	[$X360]
			{
				"name"		"Tahoma"
				"tall"		"18"
				"weight"	"200"
				"outline"	"1"
			}
		}
		"CloseCaption_Normal"
		{
			"1"
			{
				"name"		"Tahoma"
				"tall"		"26"
				"weight"	"500"
			}
		}
		"CloseCaption_Italic"
		{
			"1"
			{
				"name"		"Tahoma"
				"tall"		"26"
				"weight"	"500"
				"italic"	"1"
			}
		}
		"CloseCaption_Bold"
		{
			"1"
			{
				"name"		"Tahoma"
				"tall"		"26"
				"weight"	"900"
			}
		}
		"CloseCaption_BoldItalic"
		{
			"1"
			{
				"name"		"Tahoma"
				"tall"		"26"
				"weight"	"900"
				"italic"	"1"
			}
		}
		"CloseCaption_Small"
		{
			"1"
			{
				"name"		"Tahoma"
				"tall"		"16"
				"tall_hidef"	"24"
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
			}
		}
		// this is the symbol font
		"Marlett"
		{
			"1"
			{
				"name"		"Marlett"
				"tall"		"14"
				"weight"	"0"
				"symbol"	"1"
			}
		}
		"Trebuchet24"
		{
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"24"
				"weight"	"900"
				"range"		"0x0000 0x007F"	//	Basic Latin
				"antialias" "1"
				"additive"	"1"
			}
		}
		"Trebuchet18"
		{
			"1"
			{
				"name"		"Trebuchet MS"
				"tall"		"18"
				"weight"	"900"
			}
		}
		ClientTitleFont
		{
			"1"
			{
				"name"  "DischargeFont"
				"tall"			"34"
				"weight" "0"
				"additive" "0"
				"antialias" "1"
			}
		}
		ClientTitleFont_hl2
		{
			"1"
			{
				"name"  "HL2EP2"
				"tall"			"56"
				"tall_hidef"	"48"
				"weight" "0"
				"additive" "0"
				"antialias" "1"
				"custom"	"1" [$OSX]
			}
		}
		CreditsLogo
		{
			"1"
			{
				"name"		"HL2"
				"tall"		"128"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		CreditsText
		{
			"1"
			{
				"name"		"Trebuchet MS"
				"tall"		"20"
				"weight"	"900"
				"antialias" "1"
				"additive"	"1"
			}
		}
		CreditsOutroLogos
		{
			"1"
			{
				"name"		"HL2"
				"tall"		"48"
				"weight"	"0"
				"antialias" "1"
				"additive"	"1"
				"custom"	"1"
			}
		}
		CreditsOutroText
		{
			"1"
			{
				"name"		"Verdana"
				"tall"		"9"
				"weight"	"900"
				"antialias" "1"
			}
		}
		CenterPrintText
		{
			// note that this scales with the screen resolution
			"1"
			{
				"name"		"Shoguns Clan"
				"tall"		"18"
				"weight"	"900"
				"antialias" "1"
				"additive"	"1"
			}
		}
		HDRDemoText
		{
			// note that this scales with the screen resolution
			"1"
			{
				"name"		"Trebuchet MS"
				"tall"		"24"
				"weight"	"900"
				"antialias" "1"
				"additive"	"1"
			}
		}
		"AchievementNotification"
		{
			"1"
			{
				"name"		"Trebuchet MS"
				"tall"		"14"
				"weight"	"900"
				"antialias" "1"
			}
		}
		"CommentaryDefault"
		{
			"1"
			{
				"name"		"Verdana"
				"tall"		"12"
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"480 599"
			}
			"2"
			{
				"name"		"Verdana"
				"tall"		"13"	[$WIN32]
				"tall"		"20"	[$X360]
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"600 767"
			}
			"3"
			{
				"name"		"Verdana"
				"tall"		"14"
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"768 1023"
				"antialias"	"1"
			}
			"4"
			{
				"name"		"Verdana"
				"tall"		"20"
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"1024 1199"
				"antialias"	"1"
			}
			"5"
			{
				"name"		"Verdana"
				"tall"		"24"
				"weight"	"900"
				"range"		"0x0000 0x017F" //	Basic Latin, Latin-1 Supplement, Latin Extended-A
				"yres"	"1200 6000"
				"antialias"	"1"
			}
			"6"
			{
				"name"		"Verdana"
				"tall"		"12"
				"range" 		"0x0000 0x00FF"
				"weight"		"900"
			}
			"7"
			{
				"name"		"Arial"
				"tall"		"12"
				"range" 		"0x0000 0x00FF"
				"weight"		"800"
			}			
		}
		                "InstructorTitle"
		{
			"1"
			{
				"name"			"Arial"
				"tall"			"20"
				"weight"		"400"
				"antialias"		"1"
				"dropshadow"	"1"
			}
		}
 
		"InstructorKeyBindings"
		{
			"1"
			{
				"name"			"Arial"
				"name"			"Trade Gothic Bold"
				"tall"			"18"
				"weight"		"600"
				"antialias"		"1"
				"dropshadow"	"0"
			}
		}
 
		"InstructorButtons"
		{
			"1"
			{
				"name"			"Arial"
				"name"			"Trade Gothic Bold"
				"tall"			"15"
				"weight"		"600"
				"antialias"		"1"
				"dropshadow"	"1"
			}
		}
 
		"InstructorTitleGlow"
		{
			"1"
			{
				"name"			"Arial"
				"name"			"Trade Gothic Bold"
				"tall"			"20"
				"weight"		"400"
				"antialias"		"1"
				"dropshadow"	"1"
			}
		}
	}

	
	//////////////////////// CUSTOM FONT FILES /////////////////////////////
	//
	// specifies all the custom (non-system) font files that need to be loaded to service the above described fonts
	CustomFontFiles
	{
		"1"		"resource/HL2.ttf"
		"2"	  	"resource/HL2MP.ttf"
		"3"		"resource/HL2crosshairs.ttf"
		"4"	  	"resource/shogunsclan.ttf"
		"5"	  	"resource/HALFLIFE2.ttf"
		"6"	  	"resource/HL2EP2.ttf"
		"7"		"resource/DischargeFont.ttf"
		"8"		"resource/cs.ttf"
		"9"		"resource/csd.ttf"
		"10"	"resource/cslogo.ttf"
		"11"	"resource/cstrike.ttf"
	}

}
