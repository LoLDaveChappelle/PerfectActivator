#include "PluginSDK.h"
#include "BuildMenu.h"



class QuicksilverSash
{
public:
	IMenuOption* UseQuicksilverSash;
	IMenuOption* QuicksilverDelay;
	IMenu* QuicksilverMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		QuicksilverMenu = ItemMenu->CleanersMenu->AddMenu(" Quicksilver Sash");
		UseQuicksilverSash = QuicksilverMenu->CheckBox("Use  Quicksilver Sash", true);
		QuicksilverDelay = QuicksilverMenu->AddInteger(" Quicksilver Sash Delay (MS)", 0, 1000, 100);
	}


};
