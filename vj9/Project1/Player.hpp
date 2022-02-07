#pragma once
#include<iostream>
using namespace std;
class Player
{
	public:
		int chooseNumber;
		int guessNumber;
		int Number_of_points = 0;
		void show_guess();
};
