#include <iostream>

using namespace std;

int power(int a, int b)
{
  if (b == 0)
  {
    return 1; // base case
  }
  return a * power(a, b - 1);
}

int main()
{
  int result = 1;
  int a = 2;
  int b = 10;
  // while (b--)
  // {
  //   result = result * a;
  // }
  result = power(a, b);
  cout << result << endl;
  return 0;
}