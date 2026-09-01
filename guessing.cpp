/*
Elijah Chan 8/28/2026
Guessing Game
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  //https://www.geeksforgeeks.org/cpp/rand-and-srand-in-ccpp/
  srand(time(NULL));
  int num = rand() % 100;
  int input = 0;
  bool playing = true;
  char replay = 1;
  
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
      cout << "You win!" << endl;
      while (replay){
	cout << "Would you like to play again?(y/n): ";
	cin >> replay;
	if (replay == 'y'){
	  num = rand() % 100;
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
