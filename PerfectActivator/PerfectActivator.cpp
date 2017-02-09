#include "stdafx.h"
#include "PluginSDK.h"
#include "MercurialScimitar.h"
#include "HealthPotion.h"
#include "Biscuit.h"
#include "RefillablePot.h"
#include "CorruptingPot.h"
#include "CrystallineFlask.h"
#include "QuicksilverSash.h"
#include "DervishBlade.h"
#include "MikaelsCrucible.h"
#include "HuntersPot.h"


PluginSetup("PerfectActivator");

class IActivate
{
public:
	virtual void OnLoad() = 0;
	virtual bool IsReady() = 0;
	virtual bool DoesOwn() = 0;
	virtual void OnGameUpdate() = 0;
	virtual void OnRender() = 0;
	virtual void unLoad() = 0;
};



class Scimitar : public IActivate
{
public:
	virtual void OnLoad() override
	{
		MercurialScimitar().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(20203))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Scimitar found!");
	}
};
class Dervish : public IActivate
{
public:
	virtual void OnLoad() override
	{
		DervishBlade().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(20203))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Dervish Blade found!");
	}
};
class Quicksilver : public IActivate
{
public:
	virtual void OnLoad() override
	{
		QuicksilverSash().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(20203))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Quicksilver Sash found!");
	}
};
class Crucible : public IActivate
{
public:
	virtual void OnLoad() override
	{
		MikaelsCrucible().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(20203))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Quicksilver Sash found!");
	}
};

/*
 * Consumables
 */
class HealthPot : public IActivate
{
public:
	virtual void OnLoad() override
	{
		HealthPotion().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		if (GEntityList->Player()->HealthPercent() <= 50)
		{
			HealthPotion().UseHealthPotion();

		}
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2003))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
		IsReady();
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Health Potion Found!");
	}
};
class Biscuits : public IActivate
{
public:
	virtual void OnLoad() override
	{
		Biscuit().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2010))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Biscuits Found!");
	}
};
class Hunter : public IActivate
{
public:
	virtual void OnLoad() override
	{
		HuntersPot().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		if (GEntityList->Player()->HealthPercent() <= 50)
		{
			HuntersPot().UseHuntersPotion();

		}
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2032))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Hunters Potion Found!");
	}
};
class Refill : public IActivate
{
public:
	virtual void OnLoad() override
	{
		RefillablePot().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2031))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Refillable Potion Found!");
	}
};
class Corrupt : public IActivate
{
public:
	virtual void OnLoad() override
	{
		CorruptingPotion().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2033))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Corrupting Potion Found!");
	}
};
class Crystalline : public IActivate
{
public:
	virtual void OnLoad() override
	{
		CrystallineFlask().Menu();
	}
	virtual void OnRender() override
	{
	}
	virtual bool IsReady() override
	{
		return false;
	}

	virtual bool DoesOwn() override
	{
		if (GEntityList->Player()->HasItemId(2041))
		{
			DoesOwnMessage();
		}
		else return false;
	}
	virtual void OnGameUpdate() override
	{
	}

	virtual void unLoad() override
	{
	}

private:
	void DoesOwnMessage()
	{
		GGame->PrintChat("Crystalline Flask Found!");
	}
};



IActivate* IItem = nullptr;
PLUGIN_EVENT(void) OnRender()
{
	IItem->OnRender();
}

PLUGIN_EVENT(void) OnGameUpdate()
{
	IItem->OnGameUpdate();
}


std::vector<IActivate*> GAllItems;

void LoadAllItems()
{
	GAllItems.push_back(new Scimitar());
	GAllItems.push_back(new Dervish());
	GAllItems.push_back(new Quicksilver());
	GAllItems.push_back(new Crucible());

	/*
	 * Consumables
	 */
	GAllItems.push_back(new HealthPot());
	GAllItems.push_back(new Biscuits());
	GAllItems.push_back(new Refill());
	GAllItems.push_back(new Corrupt());
	GAllItems.push_back(new Crystalline());

	for (auto i : GAllItems)
	{
		i->OnLoad();
		if (i->DoesOwn() && i->IsReady())
			i->OnGameUpdate();
	}
}

// Called when plugin is first loaded
PLUGIN_API void OnLoad(IPluginSDK* PluginSDK)
{
	// Initializes global interfaces for core access
	PluginSDKSetup(PluginSDK);
	ItemMenu = new SItemMenu();
	LoadAllItems();

}

// Called when plugin is unloaded
PLUGIN_API void OnUnload()
{

	if (IItem != nullptr)
	{
		GEventManager->RemoveEventHandler(kEventOnRender, OnLoad);
		GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
		GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
		IItem->unLoad();
	}
}
