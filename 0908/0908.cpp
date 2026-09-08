#include <iostream>

enum GameState
{
	Startup,
	Title,
	MainMenu,
	InGame,
	Result,
};

GameState game_progression = GameState::Startup;

GameState DoStartup()
{
	std::cout << "GameState::Startup" << std::endl;
	return GameState::Title;
}

GameState DoTitle()
{
	std::cout << "GameState::Title" << std::endl;
	return GameState::MainMenu;
}

GameState DoMainMenu()
{
	std::cout << "GameState::MainMenu" << std::endl;
	return GameState::InGame;
}

GameState DoInGame()
{
	std::cout << "GameState::InGame" << std::endl;
	return GameState::Result;
}

GameState DoResult()
{
	std::cout << "GameState::Result" << std::endl;
	return GameState::Startup;
}

GameState MainLoop()
{
	switch (game_progression)
	{
	default: return GameState::Startup;
	case GameState::Startup: return DoStartup();
	case GameState::Title: return DoTitle();
	case GameState::MainMenu: return DoMainMenu();
	case GameState::InGame: return DoInGame();
	case GameState::Result: return DoResult();
	}
}

int main()
{
	while (true)
	{
		auto nextState = MainLoop();

		if(game_progression != nextState)
		{
			game_progression = nextState;
		}
	}
	return 0;
}