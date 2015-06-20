"GameMenu"
{
	"1"
	{
		"label" "#GameUI_GameMenu_ResumeGame"
		"command" "ResumeGame"
		"InGameOrder" "10"
		"OnlyInGame" "1"
	}
	"5"	
	{
		"label" "#GameUI_GameMenu_NewGame"
		"command" "OpenNewGameDialog"
		"InGameOrder" "40"
		"notmulti" "1"
	}
	"6"
	{
		"label" "#GameUI_GameMenu_LoadGame"
		"command" "OpenLoadGameDialog"
		"InGameOrder" "30"
		"notmulti" "1"
	}
	"7"
	{
		"label" "#GameUI_GameMenu_SaveGame"
		"command" "OpenSaveGameDialog"
		"InGameOrder" "20"
		"notmulti" "1"
		"OnlyInGame" "1"
	}
	"7_5"
	{
		"label" "#GameUI_GameMenu_ActivateVR"
		"command" "engine vr_activate"
		"InGameOrder" "40"
		"OnlyWhenVREnabled" "1"
		"OnlyWhenVRInactive" "1"
	}
	"7_6"
	{
		"label" "#GameUI_GameMenu_DeactivateVR"
		"command" "engine vr_deactivate"
		"InGameOrder" "40"
		"OnlyWhenVREnabled" "1"
		"OnlyWhenVRActive" "1"
	}
	"9"
	{
		"label" "#GameUI_Controller"
		"command" "OpenControllerDialog"
		"InGameOrder" "60"
		"ConsoleOnly" "1"
	}
	"10"
	{
		"label" "#DischargeUI_GameMenu_MainMenu"
		"command"	"engine save mainmenu; wait 20; disconnect"
		"InGameOrder"	"70"
		"OnlyInGame"	"1"
	}
	"11"
	{
		"label" "#GameUI_GameMenu_Options"
		"command" "OpenOptionsDialog"
		"InGameOrder" "80"
	}
	"12"
	{
		"label" "#DischargeUi_GameMenu_Credits"
		"command" "engine save game; wait 5; map credits"
		"InGameOrder" "90"
		"OnlyInGame" "0"
	}
	"13"
	{
		"label" "#GameUI_GameMenu_Quit"
		"command" "Quit"
		"InGameOrder" "100"
	}
}

