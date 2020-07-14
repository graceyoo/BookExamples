
/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Listing 3.3 (Pg. 35)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Create a type definition
  typedef unsigned short USHORT;
  
  // Set up width and length
  USHORT width = 26;
  USHORT length = 40;
  
  // Create an unsigned short initialized with the
  // result of multiplying width by length
  USHORT area = width * length;
  
  std::cout << "Width: " << width << "\n";
  std::cout << "Length: " << length << "\n";
  std::cout << "Area: " << area << "\n";
  
  
  return 0;
}