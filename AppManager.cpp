#include "AppManager.h"
#include "WindowManager.h"


AppManager::AppManager() : WinManager("Test")
{
	state = GAME_STATE::INITIALISATION;

}

void AppManager::Run()
{
	while (state != GAME_STATE::END)
	{
		switch (state)
		{
		case GAME_STATE::INITIALISATION:
			state = GAME_STATE::RUN;
			break;
		case GAME_STATE::RUN:
			if (WinManager.ShouldClose())
				state = GAME_STATE::END;
			break;
		default:
			break;
		}
	}
}