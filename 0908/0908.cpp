#include <iostream>
#include "windows.h"

enum GameProgression
{
	Startup,
	Title,
	MainMenu,
	InGame,
	Result,
};

int main()
{
	GameProgression game_progression = Startup;

	switch(game_progression)
	{
		case Startup:
			std::cout << "Startup" << std::endl;
			if (GetAsyncKeyState(VK_RETURN))
			{
				game_progression = Title;
				break;
			}
		case Title:
			std::cout << "Title" << std::endl;
			if (GetAsyncKeyState(VK_RETURN))
			{
				game_progression = MainMenu;
				break;
			}
		case MainMenu:
			std::cout << "MainMenu" << std::endl;
			if (GetAsyncKeyState(VK_RETURN))
			{
				game_progression = InGame;
				break;
			}
		case InGame:
			std::cout << "InGame" << std::endl;
			if (GetAsyncKeyState(VK_RETURN))
			{
				game_progression = Result;
				break;
			}
		case Result:
			std::cout << "Result" << std::endl;
			if (GetAsyncKeyState(VK_RETURN))
			{
				game_progression = Startup;
				break;
			}
	}
}