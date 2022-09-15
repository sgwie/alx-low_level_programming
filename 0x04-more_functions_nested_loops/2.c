#include <stdio.h>

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void main(void)
{
  int a, b, n;
  printf("Enter a number");
  scanf("%d", &n);
  if (n>0)
    {
  for (b = 0; b < n ; b++)
    {
      for (a = 0; a < n; a++)
	{
	  putchar(35);
	}
      putchar('\n');
    }
    }
  else
    putchar('\n');
}
