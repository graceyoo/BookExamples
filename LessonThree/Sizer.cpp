
/////////////////////////////////////////////////////////////
/// Author: Grace
/// Date: July 13, 2020
/// Notes: Listing 3.1 (Pg. 29)
/////////////////////////////////////////////////////////////

#include <iostream>

int main ()
{
  std::cout << "The size of an integer: \t\t";
  std::cout << sizeof(int) << " bytes\n";
  std::cout << "The size of a short integer: \t\t";
  std::cout << sizeof(short) << " bytes\n";
  std::cout << "The size of a long integer: \t\t";
  std::cout << sizeof(long) << " bytes\n";
  std::cout << "The size of a character: \t\t";
  std::cout << sizeof(char) << " bytes\n";
  std::cout << "The size of a boolean: \t\t";
  std::cout << sizeof(bool) << " bytes\n";
  std::cout << "The size of an float: \t\t";
  std::cout << sizeof(float) << " bytes\n";
  std::cout << "The size of an double float: \t\t";
  std::cout << sizeof(double) << " bytes\n";
  std::cout << "The size of an long long integer: \t\t";
  std::cout << sizeof(long long int) << " bytes\n";
  
  return 0;
}