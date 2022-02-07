#include "AI.hpp"
void AI::AI_input()
{
	chooseNumber = rand() % 4 ;
}
void AI :: AI_coin_guess()
{
	guessNumber = rand() % 6 + 1;
}