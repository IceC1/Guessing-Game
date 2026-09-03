/*
Elijah Chan 8/28/2026
Guessing Game
1. No global variables(global constants are alright).
2. No strings.
3. Use #include <iostream>.
 */
#include <iostream>


using namespace std;

int main()
{
  //https://www.geeksforgeeks.org/cpp/rand-and-srand-in-ccpp/
  srand(time(NULL));
  int num = rand() % 101;
  int input = 0;
  int guesses = 0;
  bool playing = true;
  char replay = 1;
  
  //Runs the loop for the high low game.
  while (playing) {
    cout << "Guess a number: ";
    cin >> input;
    guesses++;
    if (input < num) {
      cout << "You guessed too low" << endl;
	}
    if (input > num) {
      cout << "You guessed too high" << endl;
	}
    if (input == num) {
      cout << "You win!" << endl;
      while (replay){
	cout << "You made " << guesses << " guesses" << endl;
	cout << "Would you like to play again?(y/n): ";
	cin >> replay;
	if (replay == 'y'){
	  num = rand() % 101;
	  guesses = 0;
	  replay = 0;
	}
	else if (replay == 'n'){
	  playing = false;
	  replay = 0;
	}
	else {
	  cout << "Incorrect input" << endl;
	}
      }
      replay = 1;
    }
  }
}
