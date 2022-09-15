#include <stdio.h>

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void main(void)
{
  int c;
      for (c = 0; c <= 14; c++)
	{
	  if (c > 9)
	    {
	      putchar((c / 10) + 48);
	    }
	  putchar((c % 10) + 48);
	  
	}
      putchar('\n');
}
