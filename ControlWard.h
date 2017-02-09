#include "PluginSDK.h"
#include "BuildMenu.h"



class RefillablePot
{
public:
	IMenuOption* UseHealthPot;
	IMenuOption* HealthPercent;
	IMenu* HealthPotionMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Refillable Pot");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Refillable Pot", true);
		HealthPercent = HealthPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


};
