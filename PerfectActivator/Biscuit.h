#include "PluginSDK.h"
#include "BuildMenu.h"



class Biscuit
{
public:
	IMenu* BuscuitMenu;
	IMenuOption* UseBiscuit;
	IMenuOption* BiscuitHealthPercent;
	int HealthPotionID = 2033;
	IInventoryItem* pItem = GPluginSDK->CreateItemForId(2010, 100);

	void  Menu()
	{
		BuscuitMenu = ItemMenu->ConsumablesMenu->AddMenu("Biscuits");
		UseBiscuit = BuscuitMenu->CheckBox("Use Biscuits", true);
		BiscuitHealthPercent = BuscuitMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


	void UseBiscuits()
	{
		if (GEntityList->Player()->HasBuff("RegenerationPotion"))
		{
			return;
		}
		pItem->CastOnPlayer();
	}

};
