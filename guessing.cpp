/*
Elijah Chan 8/28/2026
Guessing Game
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  srand(time(NULL));
  int num = rand() % 100;
  int input = 0;
  bool playing = true;
  
  //cout << num;
  while (playing) {
    cout << "Guess a number: ";
    cin >> input;
    if (input < num) {
      cout << "You guessed too low" << endl;
	}
    if (input > num) {
      cout << "You guessed too high" << endl;
	}
    if (input == num) {
      cout << "You win!";
      playing = false;
	}
  }
}
