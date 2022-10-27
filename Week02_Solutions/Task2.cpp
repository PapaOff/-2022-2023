#include <iostream>

int main()
{
  char input;
  std::cin >> input;
  switch(input){
      case '1': std::cout << "One" << std::endl; break;
      case '2': std::cout << "Two" << std::endl; break;
      case '3': std::cout << "Three" << std::endl; break;
      case '4': std::cout << "Four" << std::endl; break;
      case '5': std::cout << "Five" << std::endl; break;
      case '6': std::cout << "Six" << std::endl; break;
      case '7': std::cout << "Seven" << std::endl; break;
      case '8': std::cout << "Eigth" << std::endl; break;
      case '9': std::cout << "Nine" << std::endl; break;
      default: std::cout << "Incorrect input" << std::endl;
      }
}