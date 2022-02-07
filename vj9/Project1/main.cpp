#include "AI.hpp"
#include "Game.hpp"
#include "Human.hpp"
#include "Player.hpp"
#include<cstdlib>
using namespace std;

int main()
{
	Game game;
	Human Player1;
	AI CPU;
	while (game.check_game_over(&Player1.Number_of_points,&CPU.Number_of_points))
	{
		cout << "Current score:" << endl;
		cout << "Player1: " << Player1.Number_of_points << " CPU: " << CPU.Number_of_points<<endl;
		Player1.coin_input();
		CPU.AI_input();
		Player1.coin_guess();
		Player1.show_guess();
		CPU.AI_coin_guess();
		CPU.show_guess();
		game.hand_sum = Player1.chooseNumber + CPU.chooseNumber;
		cout << "correct answer: "<<Player1.chooseNumber + CPU.chooseNumber << endl;
		game.check_guess(&Player1.guessNumber, &CPU.guessNumber, &Player1.Number_of_points, &CPU.Number_of_points);
	}
}