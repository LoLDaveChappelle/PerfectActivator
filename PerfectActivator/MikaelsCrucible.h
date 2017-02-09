#include "PluginSDK.h"
#include "BuildMenu.h"



class MikaelsCrucible
{
public:
	IMenuOption* UseMikaelsCrucible;
	IMenuOption* MikaelsCrucibleDelay;
	IMenu* MikaelsCrucibleMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		MikaelsCrucibleMenu = ItemMenu->CleanersMenu->AddMenu("Mikaels Crucible");
		UseMikaelsCrucible = MikaelsCrucibleMenu->CheckBox("Use Mikaels Crucible", true);
		MikaelsCrucibleDelay = MikaelsCrucibleMenu->AddInteger("Mikaels Crucible Delay (MS)", 0, 1000, 100);
	}


};
