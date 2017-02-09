#include "PluginSDK.h"
#include "BuildMenu.h"



class Biscuit
{
public:
	IMenuOption* UseBiscuit;
	IMenuOption* BiscuitHealthPercent;
	IMenu* BuscuitMenu;
	int HealthPotionID = 2033;

	void  Menu()
	{
		BuscuitMenu = ItemMenu->ConsumablesMenu->AddMenu("Biscuits");
		UseBiscuit = BuscuitMenu->CheckBox("Use Biscuits", true);
		BiscuitHealthPercent = BuscuitMenu->AddInteger("Hero Health %", 0, 100, 50);
	}


};
