#include "iostream"
#include <string>

void functionPrintf(std::string fullString)
{
  std::cout << fullString << std::endl;
}

int main()
{
  // Bài 1
  std::string myString1;
  std::cin >> myString1;
  std::cout << myString1 << std::endl;
  
  // Bài 2
  std::string myString = "Hello world";
  std::cout << myString << std::endl;
  
  // Bài 3
  std::string firstString = "Hello ";
  std::string lastString = "world";
  std::string fullString = firstString + lastString;
  std::cout << fullString << std::endl;
  
  // Bài 4
  functionPrintf(fullString);
  return 0;
}
