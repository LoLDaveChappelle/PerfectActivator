#include "PluginSDK.h"
#include "BuildMenu.h"



class DervishBlade
{
public:
	IMenuOption* UseDervishBlade;
	IMenuOption* DervishDelay;
	IMenu* DervishMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{  
		DervishMenu = ItemMenu->CleanersMenu->AddMenu("Dervish Blade");
		UseDervishBlade = DervishMenu->CheckBox("Use Dervish Blade", true);
		DervishDelay = DervishMenu->AddInteger("Dervish Blade Delay (MS)", 0, 1000, 100);
	}


};
