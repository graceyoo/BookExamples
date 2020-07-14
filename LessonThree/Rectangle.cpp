
/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Activites #2 (Pg. 42)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  // Set up width, length, and height
  unsigned short width  = 26;
  unsigned short length = 40;
  unsigned short height = 5;
  
  // Create an unsigned short initialized with the
  // result of multiplying width by length by height

  unsigned short volume = width * length * height;
  
  std::cout << "Width: "  << width  << "\n";
  std::cout << "Length: " << length << "\n";
  std::cout << "Height: " << height << "\n";
  std::cout << "Volume: " << volume << "\n";
  return 0;
}
