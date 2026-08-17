#include <iostream>
#include <cstdint>
#include <type_traits>

enum Day
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

// scoped enums are preferred   game state?  
enum class Color : uint32_t
{
	Red, 
	Green,
	Blue
};

Color red = Color::Green;


enum class GameState
{
	MainMenu,
	Game,
	GameOver,
	Highscores,
	// final comma is not an error. 
};
void doMainMenu();

void doGame();


 

int main()
{
	GameState gameState = GameState::MainMenu;
	switch (gameState)
	{
	case GameState::MainMenu:
		doMainMenu();
		break;
	case GameState::Game:
		doGame();
		break;


	}

	return 0;
}