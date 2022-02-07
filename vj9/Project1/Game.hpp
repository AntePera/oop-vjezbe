#include <iostream>

using namespace std;

class Game
{
	public:
		int hand_sum=0;
		void check_guess(int* m, int* n, int* cnt1, int* cnt2);
		int check_game_over(int* m, int* n);
};
