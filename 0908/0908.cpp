#include <iostream>
#include "conio.h"

class GameState
{
public:

	enum GameProgression
	{
		Startup,
		Title,
		MainMenu,
		InGame,
		Result,
	};
};

int main()
{
	GameState::GameProgression game_progression = GameState::Startup;

	while (true)
	{
		switch (game_progression)
		{
		case GameState::Startup:
			std::cout << "Startup" << std::endl;
			std::cout << "何らかのキーを押してください" << std::endl;

			(void)_getch();
			game_progression = GameState::Title;
			
			break;

		case GameState::Title:
			std::cout << "Title" << std::endl;
			std::cout << "何らかのキーを押してください" << std::endl;
			
			(void)_getch();
			game_progression = GameState::MainMenu;
			
			break;

		case GameState::MainMenu:
			std::cout << "MainMenu" << std::endl;
			std::cout << "何らかのキーを押してください" << std::endl;
			
			(void)_getch();
			
			game_progression = GameState::InGame;
			
			break;

		case GameState::InGame:
			std::cout << "InGame" << std::endl;
			std::cout << "何らかのキーを押してください" << std::endl;

			(void)_getch();
			game_progression = GameState::Result;
			
			break;

		case GameState::Result:
			std::cout << "Result" << std::endl;
			std::cout << "何らかのキーを押してください" << std::endl;

			(void)_getch();
			game_progression = GameState::Startup;

			break;
		}
	}
	return 0;
}