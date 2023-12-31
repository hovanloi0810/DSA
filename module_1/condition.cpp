#include "iostream"

bool checkEven(int a)
{
  if (a % 2 == 0)
    return true;
  else 
    return false;
}

int main()
{
  int number;
  std::cin >> number;
  std::cout << checkPrime(number) << std::endl;
  return 0;
}
