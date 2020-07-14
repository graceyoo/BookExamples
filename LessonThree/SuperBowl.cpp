/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Activities #1 (Pg. 42)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Define constants
  const int TOUCHDOWN       = 6;
  const int FIELD_GOAL      = 3;
  const int AFTER_TOUCHDOWN = 1;
  const int SAFETY          = 2;
  
  int sanFrancisco49ers = FIELD_GOAL + TOUCHDOWN + AFTER_TOUCHDOWN + TOUCHDOWN + AFTER_TOUCHDOWN + FIELD_GOAL;
  int kansasCityChiefs  = TOUCHDOWN + AFTER_TOUCHDOWN + FIELD_GOAL + TOUCHDOWN + AFTER_TOUCHDOWN + TOUCHDOWN + AFTER_TOUCHDOWN + TOUCHDOWN + AFTER_TOUCHDOWN;

  std::cout << "\nSan Francisco 49ers' SuperBowl 2020 Final Score: " << sanFrancisco49ers << "\n";
  std::cout << "Kansas City Chiefs' SuperBowl 2020 Final Score: "    << kansasCityChiefs  << "\n";

  // If you need special command-line option
  // g++ -std=c++14 Combat.cpp -o Combat.exe
  return 0; 
}