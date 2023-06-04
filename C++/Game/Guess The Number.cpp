#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; 
	int guess;
    int attempts = 0;

    cout << "\tWelcome to the Guess the Number game!" << endl;
    cout << "\t-------------------------------------" << endl;
    cout << "\n> I'm thinking of a number between 1 and 100.\n" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
