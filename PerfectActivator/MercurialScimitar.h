#include "PluginSDK.h"
#include "BuildMenu.h"



class MercurialScimitar
{
public:
	IMenuOption* UseMercurialScimitar;
	IMenuOption* MercurialScimitarDelay;
	IMenu* MercurialScimitarMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		MercurialScimitarMenu = ItemMenu->CleanersMenu->AddMenu("Mercurial Scimitar");
		UseMercurialScimitar = MercurialScimitarMenu->CheckBox("Use Mercurial Scimitar", true);
		MercurialScimitarDelay = MercurialScimitarMenu->AddInteger("Mercurial Scimitar Delay (MS)", 0, 1000, 100);
	}


};
