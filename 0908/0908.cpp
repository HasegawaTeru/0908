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
			std::cout << "しばらくお待ちください" << std::endl;
			std::cout << "何らかのキーを押して次に進む" << std::endl;

			(void)_getch();
			game_progression = GameState::Title;
			
			break;

		case GameState::Title:
			std::cout << "有限状態機械" << std::endl;
			std::cout << "何らかのキーを押して次に進む" << std::endl;
			
			(void)_getch();
			game_progression = GameState::MainMenu;
			
			break;

		case GameState::MainMenu:
			std::cout << "メインメニュー" << std::endl;
			std::cout << "何らかのキーを押して戦う" << std::endl;
			
			(void)_getch();
			
			game_progression = GameState::InGame;
			
			break;

		case GameState::InGame:
			std::cout << "戦闘中" << std::endl;
			std::cout << "何らかのキーを押して攻撃" << std::endl;

			(void)_getch();
			game_progression = GameState::Result;
			
			break;

		case GameState::Result:
			std::cout << "Result" << std::endl;
			std::cout << "何らかのキーを押してタイトルに戻る" << std::endl;

			(void)_getch();
			game_progression = GameState::Startup;

			break;
		}
	}
	return 0;
}