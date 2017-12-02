/*
  Frame program
  Author: Kaan
  Purpose: Program to display greetings with names in a frame
  Usage: Run the program, enter the name, witness the magic.

 */

// Declare Packages ------------

#include <iostream>
#include <string>

// End of Declare Packages -----

int main(){
  // Enter your name
  std::cout << "Enter your name please: ";
  // Declare the local variable for
  // holding the name as string
  std::string user_first;
  std::string user_second;
  std::cin >> user_first >> user_second;
  const std::string user_name = user_first + " " + user_second;
  // Name with greeting as a const since we won't be changing it
  const std::string name_greeting = "Howdy dear " + user_name + " !";
  // spaces of the name with greeting
  const std::string spaces(name_greeting.size(), ' ');
  // top row
  const std::string top_row(spaces.size(), '*');
  // padding row
  const std::string pad_row = "* " + spaces + " *";
  std::cout << "**" + top_row + "**"
    << std::endl;
       std::cout
         << pad_row
         << std::endl;
            std::cout
              << "* " + name_greeting
              << " *"
              << std::endl;
                 std::cout
                   << pad_row
                   << std::endl;
                      std::cout
                        << "**" + top_row + "**"
                        << std::endl;

                           return(0);
}
