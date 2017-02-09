#include "PluginSDK.h"
#include "BuildMenu.h"



class HuntersPot
{
public:
	IMenuOption* UseHealthPot;
	IMenuOption* HealthPercent;
	IMenu* HealthPotionMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Hunters Potion");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Hunters Potion", true);
		HealthPercent = HealthPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


};
