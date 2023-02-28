#include<iostream>


int GenerateRandomNumber() {
   srand(time(NULL));
   return rand() % 100+1;
}


// Contains the game logic.
// If guess is bigger than randomNumber, print to console "Too high."
// If guess is smaller than randomNumber, print to console "Too low."
// If guess us equal to randomNumber, print to console "That's right"
void GameLogic(int randomNumber, int guess) {
   if (guess > randomNumber) { 
      std::cout << "Too high.\n" << std::endl; 
   } else if ( guess < randomNumber ) {
      std::cout << "Too litter.\n" << std::endl;
   } else { 
      std::cout << "That's right!\n" << std::endl;
      exit(0);
   }
}

// This program will run a simple number guessing number game.
// A random number will be generated. The player will then have
// to input a number and the program will tell the player whether
// the number is higher or lower than the random number.
// The game ends when the player correctly guesses the random number.
int main() {
   int randomNumber = GenerateRandomNumber();
   int guess;
   do {
      std::cout << "Guess a number between 1 and 100: ";
      std::cin >> guess;
      GameLogic(randomNumber, guess);
   } while (randomNumber != guess);
   return 0;
}