#include "iostream"
#include <string>

void functionPrintf(std::string firstString, std::string lastString)
{
  std::cout << firstString + lastString << std::endl;
}

int main()
{
  // Bài 1
  std::cout << "Hello world" << std::endl;
  
  // Bài 2
  std::string myString = "Hello world";
  std::cout << myString << std::endl;
  
  // Bài 3
  std::string firstString = "Hello ";
  std::string lastString = "world";
  std::cout << firstString + lastString << std::endl;
  
  // Bài 4
  functionPrintf("Hello ", "world");
  return 0;
}
