#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100:\n";

    do
    {
        cin >> guess;

        if (guess > number)
            cout << "Too High!\n";
        else if (guess < number)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! You guessed the correct number.\n";

    } while (guess != number);
}

int main()
{
    guessGame();
    return 0;
}