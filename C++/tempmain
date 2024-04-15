
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "spelling_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> command{argv, argv + argc};

  // TODO: validate that one argument was provided.
  // If not, print
  // error: you must give a document filename
  // and return a non-zero exit code.
  if (command.size() != 0) {
    std::cout << "error: you must give a document filename\n";

    return 1;
  }

  // TODO: store the first and only command line argument, which holds a
  // document filename, in a variable
  std::string file_Name{command.at(0)};

  // TODO: call ReadWords to read the contents of words.txt, and store the
  // return value in a variable for the dictionary
  std::vector<std::string> dictionary{ReadWords("words.txt")};

  // TODO: call ReadWords to read the contents of the document filename,
  // and store the return value in a variable for the document
  std::vector<std::string> contents{ReadWords(file_Name)};

  // TODO: call MisspelledWords to find the list of all misspelled words, and
  // store the return value in a variable for the output
  std::vector<std::string> caught{MisspelledWords(dictionary,contents)};

  // TODO: print
  // spelling errors:
  // and then use a loop to print out each of the misspelled words
  for (int i; i < caught.size(); ++i) {
    std::cout << "Spelling errors: " << caught.at(i) << "\n";
  }

  return 0;
}
