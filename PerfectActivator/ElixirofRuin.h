#include "PluginSDK.h"
#include "BuildMenu.h"



class RefillablePot
{
public:
	IMenuOption* UseRuinExilir;
	IMenuOption* RuinHealthPercent;
	IMenu* RuinMenu;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2041, 100);

	void  Menu()
	{
		RuinMenu = ItemMenu->ConsumablesMenu->AddMenu("Refillable Pot");
		UseRuinExilir = RuinMenu->CheckBox("Use Refillable Pot", true);
		RuinHealthPercent = RuinMenu->AddInteger("Hero Health %", 0, 100, 50);
	}

	void UseRuin()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}
};
