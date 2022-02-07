#include "Human.hpp"
void Human::coin_input()
{
	cout << "Input the number of coins between 0-3: " << endl;
	cin >> chooseNumber;
	if (chooseNumber > 3 || chooseNumber < 0)
	{
		cout << "Input the number of coins between 0-3: " << endl;
		cin >> chooseNumber;
	}
}
void Human::coin_guess()
{
	cout << "Guess the number of overall coins:" << endl;
	cin >> guessNumber;
}