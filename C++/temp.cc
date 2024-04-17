
#include "spelling_functions.h"

#include <fstream>

std::vector<std::string> ReadWords(const std::string& filename) {
  // declare an empty vector
  std::vector<std::string> analyzed_File;
  // open a std::ifstream
  std::ifstream userFile;
  userFile.open(filename);
  // write a loop that reads each word from the ifstream, and
  // uses push_back to add each word to the vector
  // return the vector
  for (int count = 0; count < filename.size(); count++) {
    std::string word_count{filename.at(count)};
    analyzed_File.push_back(word_count);
  }
  return analyzed_File; // replace this return statement
                                      // with one that actually works
}

bool InDictionary(const std::vector<std::string>& dictionary,
                  const std::string& word) {
  // write a linear search loop that determines whether or not
  // word is present in dictionary.
  // return true if word is present, or false otherwise
  for (std::string const & word_compare : dictionary) {
    if (word_compare == word) {
      return true;
    }
  }

  return false;  // replace this return statement with one that actually
                 // works
}

std::vector<std::string> MisspelledWords(
    const std::vector<std::string>& dictionary,
    const std::vector<std::string>& document) {
  // declare an empty vector
  std::vector<std::string> checked_words;
  // write a loop that checks each word string in document;
  //   calls InDictionary to determine whether the word is in dictionary;
  //   and adds the word to your vector if it not found
  for (std::string const & file : document) {
    if (InDictionary(dictionary,file) == false) {
      checked_words.push_back(file);
    }
  }
  // return your vector
  return checked_words;  // replace this return statement
                                      // with one that actually works
}
