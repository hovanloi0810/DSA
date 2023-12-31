#include <cinttypes>
#include <cmath>
#include <iostream>

void multiplicationTable() 
{
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      std::cout << i << " x " << j << " = " << i*j << std::endl;
    }
     std::cout << std::endl;
  }
}

int factorial (int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}

int checkPrime (int n)
{
  if (n < 2) 
    return 0;
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0) 
    {
      count++;
    }
  }
  if (count != 0) 
    return 0;
  else
    return 1;
}

int sumEven (int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0) 
      sum += i;
  }
  return sum;
}

void drawDelta (int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      std::cout << " * ";
    }
    std::cout << std::endl;
  }
}


int main() 
{
  int n;
  std::cin >> n;
  multiplicationTable();
  std::cout << "Giai thua cua " << n << "! = " << factorial(n) << std::endl;
  std::cout << checkPrime(n) << std::endl;
  std::cout << sumEven(n) << std::endl;
  drawDelta(n);
  return 0;
}
