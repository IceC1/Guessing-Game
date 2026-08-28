/*
Elijah Chan 8/28/2026
Guessing Game
 */
#include <iostream>

using namespace std;

int main()
{
  int num = srand(time(NULL));
  int input = 0;
  bool playing = true;
  
  cin >> "Enter a number: " >> input >> endl;
  cout << num
  while (playing) {
    if (input > num) {
      cout << "You guessed too low"
	}
    if (input < num) {
      cout << "You guessed too high"
	}
    if (input == num) {
      cout << "You win!"
      playing = false
	}
    
  
}
