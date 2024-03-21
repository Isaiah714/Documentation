#include <iostream>
#include <string>
#include <vector>

#include "blackjack_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> command_line{argv, argv + argc};

  if (command_line.size() != 3) {
    std::cout << "error: you must supply two arguments\n";
    return 1;
  }

  std::string card_1{command_line.at(1)};
  std::string card_2{command_line.at(2)};

  if (!IsCardName(card_1) || !IsCardName(card_2)) {
    std::cout << "error: invalid card name\n";
    return 1;
  }

  int score{TwoCardHandScore(card_1, card_2)};
  std::cout << score << "\n";

  return 0;
}
