/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Listing 3.4 (Pg. 37)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Set up enumeration
  enum Direction
  {
    North,     // 0
    Northeast, // 1
    East,      // 2
    Southeast, // 3
    South,     // 4
    Southwest, // 5
    West,      // 6
    Northwest  // 7
  };
  
  // Create a variable to hold it
  Direction heading;
  
  //Initialize the variable
  heading = Southeast; // 3

  std::cout << "Moving: " << heading << std::endl;
  return 0; 
}