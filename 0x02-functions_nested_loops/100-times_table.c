#include "main.h"
/**
 *times_table - Print times table upto n
 *
 *Return: No return
 */
void print_times_table(int n)
{
  int a, b, x;
  for (a = 0 ; a <= n ; a++)
    {
      _putchar(48);
      for (b = 1; b <= n; b++)
	{
	  x = a * b;
	  _putchar(44);
	  _putchar(32);
	  if (x < n)
	    {
	      _putchar(32);
	      _putchar(x + 48);
	    }
	  else
	    {
	      _putchar((x / n) + 48);
	      _putchar((x % n) + 48);
	    }      }
      _putchar('\n');
    }
}
