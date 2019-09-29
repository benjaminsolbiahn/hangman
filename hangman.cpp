#include <iostream>
#include <string>
#include <cstring>

int main() {

      std::string guessing_word = "";
      std::string guessing_word_ = "";
      int length_of_word = 0;
      int guess_counter = 0, guess_max = 6;
      char guess;

    std::cout << "Select a word to find. \n";
    std::cin >> guessing_word;
    length_of_word = guessing_word.length();
    guessing_word_ = //trying to assign a number of _ equal to length of the word

    }

    char guessing_word_array[length_of_word + 1];
    strcpy(guessing_word_array, guessing_word.c_str());

    std::cout << "Guess a letter \n";

while (guess_counter < 6) {
  std::cin >> guess;
    if (guessing_word.find(guess) == true) {
      for (i = 0; i < length_of_word; i++)
        //find letter inside the string if it exists
    }
    else {
      guess_counter ++;
      if (guess_counter == 6) {
        std::cout << "Sorry, all out of guesses. You lose.";
      }
      std::cout << "Sorry, you only have " << guess_counter << " guesses left.";
    }
}

/*for (int i = 0; i < length_of_word; i++)
  std::cout << guessing_word_array[i] << "\n";
*/

/*
possible ideas:
have the computer pick a random word from a dictionary file
set it up for two players
animate an actual hangman (possible?)
display letters already used
enable guessing words
*/

  return 0;
}
