#include "blackjack_functions.h"

bool IsAce(const std::string& card_name) {
  if (card_name == "A") {
    return true;
  }
  return false;
}

bool IsFaceCard(const std::string& card_name) {
  if ((card_name == "J") || (card_name == "Q") || (card_name == "K")) {
    return true;
  }
  return false;
}

bool IsNumberCard(const std::string& card_name) {
  if ((card_name == "2") || (card_name == "3") || (card_name == "4") ||
      (card_name == "5") || (card_name == "6") || (card_name == "7") ||
      (card_name == "8") || (card_name == "9") || (card_name == "10")) {
    return true;
  }
  return false;
}

bool IsCardName(const std::string& str) {
  if (IsAce(str) || IsFaceCard(str) || IsNumberCard(str)) {
    return true;
  }
  return false;
}

int CardPoints(const std::string& card_name) {
  if (IsAce(card_name)) {
    return 1;
  }
  if (IsFaceCard(card_name)) {
    return 10;
  }
  return std::stoi(card_name);
}

bool IsBust(int score) {
  if (score > 21) {
    return true;
  }
  return false;
}

int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  int score{0};

  score += CardPoints(card_1);
  score += CardPoints(card_2);

  if ((IsAce(card_1) || IsAce(card_2)) && !IsBust(score + 10)) {
    score += 10;
  }

  return score;
}
