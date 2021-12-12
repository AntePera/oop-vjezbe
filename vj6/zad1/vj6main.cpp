#include"header.hpp"
int main()
{
	srand(time(NULL));
	HMmodel m1;
    HMview v1;
    HMcontroller c1;
	m1.rand_movie(&m1.movie, m1.movies,&m1.guessMovie);
    while (c1.checkGameOver(m1))
    {

        c1.updateHMdrawing(m1);
        v1.displayHangman(m1);
        v1.displayCurrentProgress(m1);
        v1.displayUsedLetters(m1);
        c1.inputLetter(m1);
        c1.updateMovieStrings(m1);
    }

    c1.updateHMdrawing(m1);
    v1.displayHangman(m1);
    v1.displayUsedLetters(m1);
    v1.displayCurrentProgress(m1);
    v1.displayAns(m1);
    return 0;
}