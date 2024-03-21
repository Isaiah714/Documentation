#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> command_line{argv, argv + argc};

  // Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (command_line.size() != 4) {
    std::cout << "Error: you must supply three arguments.\n";

    return 1;
  }
  // Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{command_line[1]};
  std::string bread{command_line[2]};
  std::string condiment{command_line[3]};

  // Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order:\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";

  return 0;
}
