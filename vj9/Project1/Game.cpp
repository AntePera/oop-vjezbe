#include "Game.hpp"
int Game::check_game_over(int* m, int* n)
{
	if ((*m) == 1)
	{
		cout << "Player 1 won the game:" << endl;
		return 0;
	}
	else if ((*n) == 1)
	{
		cout << "Player 2 won the game:" << endl;
		return 0;
	}
	return 1;

}
void  Game::check_guess(int* m, int* n,int* cnt1,int* cnt2)
{
	if ((*m) == hand_sum)
	{
		(*cnt1)++;
	}
	else if ((*n) == hand_sum)
	{
		(*cnt2)++;
	}
}