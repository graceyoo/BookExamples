/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 9, 2020
/// Notes: Listing 2.2 (Pg. 22)
/////////////////////////////////////////////////////////////

//Preprocessor Directives
#include <iostream>

int add(int x, int y)
{
  // Add the numbers x and y together and return the sum
  std::cout << "Running calculator ...\n";
  return(x+y);
}

int main()
{
  /* This program calls an add function to add two differents
     sets of numbers together and display the results, The
     add function doesn't do anything unless it is called by
     a line in the main() function.*/
  std::cout << "What is 867 + 5309?\n";
  std::cout << "The sum is \n" << add(867, 5309) << "\n\n";
  std::cout << "What is 777 + 9311?\n";
  std::cout << "The sum is \n" << add(777, 9311) << "\n";
  return 0;
}