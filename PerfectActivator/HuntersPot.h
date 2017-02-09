#include "PluginSDK.h"
#include "BuildMenu.h"



class HuntersPot
{
public:

	IMenu* HealthPotionMenu;
	IMenuOption* UseHealthPot;
	IMenuOption* HunterHealthPercent;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2032, 100);

	void  Menu()
	{
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Hunters Potion");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Hunters Potion", true);
		HunterHealthPercent = HealthPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}

	void UseHuntersPotion()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}

};
