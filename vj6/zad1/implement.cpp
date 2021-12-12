#include "header.hpp"

void HMmodel::rand_movie(string* movie, vector <string> movies, string *guessMovie)
{ 
    int i = 0;
    char c = '_';
    ifstream file("movie.txt");
    int total_lines = 0;
    while (getline(file, *movie))
    {
        total_lines++;
        movies.push_back(*movie);
    }
    int random_number = rand() % total_lines;
    *movie = movies[random_number];
    for (int i = 0; i < (*movie).length(); i++)
    {
        if (isspace((*movie)[i]))
        {
            (*guessMovie).push_back(' ');
        }
        else
        {
            (*guessMovie).push_back('_');
        }
    }
}
void HMcontroller::updateHMdrawing(HMmodel &mode) 
{

    int lives = mode.lives;
    string head = (lives - 7) >= 0 ? " " : "0";
    string upper_body = (lives - 6) >= 0 ? " " : "|";
    string left_hand = (lives - 5) >= 0 ? " " : "/";
    string right_hand = (lives - 4) >= 0 ? " " : "\\";
    string lower_body = (lives - 3) >= 0 ? " " : "|";
    string left_leg = (lives - 2) >= 0 ? " " : "/";
    string right_leg = (lives - 1) >= 0 ? " " : "\\";
    

    
    
    string s1 = "    ________       \n"
                "        |         \n"
                "        |         \n"
                "        "+ head + "\n"
                "       " + left_hand + upper_body + right_hand + "\n"
                "        " + lower_body + "\n"
                "       " + left_leg +" " +right_leg + "\n";

    mode.current_hangman = s1;
}
void HMcontroller::updateLives(HMmodel &mode, bool inGame) 
{
    if (inGame) mode.lives--;
}
void HMcontroller::updateMovieStrings(HMmodel &mode) 
{

    char letter = mode.used_letters.back();
    bool inGame = true;

    for (int i = 0; i < mode.movie.size(); i++) 
    {
        if (mode.movie[i] == letter) 
        {
            mode.guessMovie[i] = letter;
            inGame = false;
        }
    }

    updateLives(mode, inGame);
}

bool HMcontroller::checkUsed(HMmodel& mode, char s)
{
    for (int i = 0; i < mode.used_letters.size(); i++) 
    {
        if (mode.used_letters[i] == s)
        {
            return true;
        }
    }

    return false;
}

void HMcontroller::inputLetter(HMmodel &mode) 
{

    char s;

    do 
    {
        cout << "Enter one non-used letter: " << endl;
        cin >> s;

    } while ((!isalpha(s)) || (checkUsed(mode, s)));

    mode.used_letters.push_back(s);
}
bool HMcontroller::checkGameOver(HMmodel& model) {

    if (!model.lives)
    {
        cout << "Better luck next time" << endl;
        return false;
    }

    for (int i = 0; i < model.movie.size(); i++)
    {
        if (model.movie[i] != model.guessMovie[i])
        {
            return true;
        }
    }

    cout << "Congrats you win" << endl;
    return false;
}