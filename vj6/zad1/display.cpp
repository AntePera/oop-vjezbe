#include"header.hpp"

void HMview::displayHangman(HMmodel mode)
{
    cout << mode.current_hangman << endl;
}

void HMview::displayCurrentProgress(HMmodel mode)
{
    int n = mode.guessMovie.size();
    for (int i = 0; i < n; i++)
    {
        cout << mode.guessMovie.at(i);
    }
}

void HMview::displayAns(HMmodel mode)
{

    cout << "\nCorrect movie name: " << mode.movie << endl;
}

void HMview::displayUsedLetters(HMmodel mode) 
{
    cout << "\nUsed letters: ";
    for (int i = 0; i < mode.used_letters.size(); i++)
    {
        cout << mode.used_letters[i] << " ";
    }
    cout << endl;
}