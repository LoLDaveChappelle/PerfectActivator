#include "PluginSDK.h"
#include "BuildMenu.h"
#include <string>


class HealthPotion
{
public:

	//Make changes here
	IMenuOption* UseHealthPot;
	IMenuOption* HealAmount;
	IMenu* HealthPotionMenu;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2003, 100);




	void  Menu()
	{   //and to healthpotionmenu
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Health Potion");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Health Potion", true);
		HealAmount = HealthPotionMenu->AddFloat("Hero Health %", 0, 100, 50);
	}

	float GetHealthPercent()
	{
		return HealAmount->GetFloat();
	}

	void UseHealthPotion()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}

};
