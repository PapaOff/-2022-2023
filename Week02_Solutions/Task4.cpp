#include <iostream>

int main()
{
  int number;
  std::cin >> number;
  switch(number){
      case 1: std::cout << 'I' << std::endl; break;
      case 5: std::cout << 'V' << std::endl; break;
      case 10: std::cout << 'X' << std::endl; break;
      case 50: std::cout << 'L' << std::endl; break;
      case 100: std::cout << 'C' << std::endl; break;
      case 500: std::cout << 'D' << std::endl; break;
      case 1000: std::cout << 'M' << std::endl; break;
      default: std::cout << "Incorrect input" << std::endl;
      }
}