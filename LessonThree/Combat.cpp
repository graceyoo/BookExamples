/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Listing 3.5 (Pg. 39)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Define character values
  auto strength = 80;    // Integer
  auto accuracy = 45.5;  // Double
  auto dexterity = 24.0; // Double
  
  // Define constants
  const auto MAXIMUM = 50; // Integer
  
  // Calculate character combat stats
  auto attack = strength * (accuracy  / MAXIMUM);
  auto damage = strength * (dexterity / MAXIMUM);

  std::cout << "\nAttack rating: " << attack << "\n";
  std::cout << "Damage rating:  " << damage << "\n";

  // If you need special command-line option
  // g++ -std=c++14 Combat.cpp -o Combat.exe
  return 0; 
}