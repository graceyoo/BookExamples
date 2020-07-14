
/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Listing 3.2 (Pg. 34)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Set up width and length
  unsigned short width = 26, length;
  length = 40;
  
  // Create an unsigned short initialized with the
  // result of multiplying width by length
  
  unsigned short area = width * length;
  
  std::cout << "Width: " << width << "\n";
  std::cout << "Length: " << length << "\n";
  std::cout << "Area: " << area << "\n";
  
  
  return 0;
}