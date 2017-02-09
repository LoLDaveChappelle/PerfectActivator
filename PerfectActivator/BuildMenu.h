#pragma once
#include "Menu.h"

struct SItemMenu
{
	SItemMenu();
	IMenu* CleanersMenu;
	IMenu* DefensivesMenu;
	IMenu* SummonersMenu;
	IMenu* OffensivesMenu;
	IMenu* ConsumablesMenu;
	IMenu* AutoSpellsMenu;
	IMenu* MiscMenu;
	IMenu* DebugMenu;
	IMenu* MainMenu;
	IMenuOption* Mercurial;
};

extern SItemMenu* ItemMenu;
/*
 * End Header
 */

/*
 * Start Source
 */


inline SItemMenu::SItemMenu()
{
	// Do your initial initialization here...
	MainMenu = GPluginSDK->AddMenu("PerfectActivator");
	CleanersMenu = MainMenu->AddMenu("Cleansers");
	DefensivesMenu = MainMenu->AddMenu("Defensives");
	SummonersMenu = MainMenu->AddMenu("Summoners");
	OffensivesMenu = MainMenu->AddMenu("Offensives");
	ConsumablesMenu = MainMenu->AddMenu("Consumables");
	AutoSpellsMenu = MainMenu->AddMenu("Auto Spells");
	MiscMenu = MainMenu->AddMenu("Misc/Settings");
	DebugMenu = MainMenu->AddMenu("Debug Tools");

	CleanersMenu->AddMenu("Items");
}

SItemMenu* ItemMenu = nullptr;
/*
 * End source
 */





