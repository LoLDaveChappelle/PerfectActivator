#include "PluginSDK.h"
#include "BuildMenu.h"



class CorruptingPotion
{
public:
	IMenuOption* UseHealthPot;
	IMenuOption* HealthPercent;
	IMenu* HealthPotionMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Corrupting Pot");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Corrupting Pot", true);
		HealthPercent = HealthPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


};
