#include "PluginSDK.h"
#include "BuildMenu.h"



class CrystallineFlask
{
public:
	IMenu* HealthPotionMenu;
	IMenuOption* UseHealthPot;
	IMenuOption* CrystallineFlaskHealAmount;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2041, 100);


	void  Menu()
	{   
		HealthPotionMenu = ItemMenu->ConsumablesMenu->AddMenu("Health Potion");
		UseHealthPot = HealthPotionMenu->CheckBox("Use Health Potion", true);
		CrystallineFlaskHealAmount = HealthPotionMenu->AddFloat("Hero Health %", 0, 100, 50);
	}

	void UseFlask()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}
};
