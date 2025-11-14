#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    while (true) {
        cout << "Enter your guess: ";
        if(!(cin >> guess)) { 
            cout << "Invalid input. Exiting.\n";
            return 0;
        }
        attempts++;

        if (guess > number) cout << "Too high. Try again.\n";
        else if (guess < number) cout << "Too low. Try again.\n";
        else {
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
            break;
        }
    }
    return 0;
