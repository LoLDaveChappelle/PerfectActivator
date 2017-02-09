#include "PluginSDK.h"
#include "BuildMenu.h"



class CrystallineFlask
{
public:
	IMenuOption* UseHealthPot;
	IMenuOption* HealthPercent;
	IMenu* HealthPotionMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Crystalline Flask");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Crystalline Flask", true);
		HealthPercent = HealthPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


};
