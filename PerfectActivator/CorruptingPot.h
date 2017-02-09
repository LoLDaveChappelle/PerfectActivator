#include "PluginSDK.h"
#include "BuildMenu.h"



class CorruptingPotion
{
public:
	IMenuOption* UseCorruptingPot;
	IMenuOption* HealthPercent;
	IMenu* CorruptingPotionMenu;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2033, 100);

	void  Menu()
	{
		CorruptingPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Corrupting Pot");
		UseCorruptingPot = CorruptingPotionMenu->CheckBox("Use Corrupting Pot", true);
		HealthPercent = CorruptingPotionMenu->AddInteger("Hero Health %", 0, 100, 50);
	}

	void UseCorrupting()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}

};
