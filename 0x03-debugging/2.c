#include <stdio.h>
int main(void)
{
  int a, b, c, largest;
  a = 10, b = 20, c = 30;
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
  printf("%d is the largest number \n", largest);
  return (0);
}
