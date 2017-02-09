#include "PluginSDK.h"
#include "BuildMenu.h"



class RefillablePot
{
public:
	//Make changes here
	IMenuOption* UseRefilllablePot;
	IMenuOption* RefillHealAmount;
	IMenu* RefillableMenu;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2003, 100);




	void  Menu()
	{   //and to healthpotionmenu
		RefillableMenu = ItemMenu->ConsumablesMenu->AddMenu("Refillable Potion");
		UseRefilllablePot = RefillableMenu->CheckBox("Use Health Potion", true);
		RefillHealAmount = RefillableMenu->AddFloat("Hero Health %", 0, 100, 50);
	}

	float GetHealthPercent()
	{
		return RefillHealAmount->GetFloat();
	}

	void UseRefillPotion()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}
};
