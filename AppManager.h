#pragma once
enum class GAME_STATE {
	INITIALISATION,
	RUN,
	END
};

class AppManager
{
public:
	AppManager();
	void Run();
private:
	GAME_STATE state;
	WindowManager WinManager;
};

