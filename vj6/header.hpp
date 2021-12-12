#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<vector>
#include<string>
using namespace std;
class HMmodel
{ 
	public:
		string movie;
		vector<string> movies;
		string guessMovie;
		string current_hangman;
		vector<char> used_letters; 
		void rand_movie(string* movie, vector <string> movies,string  * guessMovie);
		int lives = 7;
		
};
class HMview
{
	public:
		void displayAns(HMmodel mode);
		void displayCurrentProgress(HMmodel mode);
		void displayUsedLetters(HMmodel mode);
		void displayHangman(HMmodel mode);
};
class HMcontroller
{
	public:
		void updateHMdrawing(HMmodel &mode);
		void userEntry(HMmodel& mode);
		void checkLetter(HMmodel& mode);
		void updateLives(HMmodel& mode,bool inGame);
		bool checkUsed(HMmodel& mode, char s);
		void checkOver(HMmodel& mode);
		void inputLetter(HMmodel& model);
		void updateMovieStrings(HMmodel& model);
		bool checkGameOver(HMmodel & model);

};
