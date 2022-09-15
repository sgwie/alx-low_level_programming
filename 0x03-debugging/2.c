#include <stdio.h>

int main(int a, int b, int c)
{
  int largest;
  a =10, b = 20, c = 30;

  if (a > b && a > c)
    {
      largest = a;
    }
  else if (b > a && b > c)
    {
      largest = b;
    }
  else
    {
      largest = c;
    }
  return (largest);
}
