#include "main.h"
/**
 *times_table - Print times table upto 9
 *
 *Return: No return
 */
void times_table(void)
{
int a, b, x;
for (a = 0 ; a < 10 ; a++)
{
putchar(48);
for (b = 1; b < 10; b++)
{
x = a * b;
putchar(44);
putchar(32);
if (x < 10)
{
putchar(32);
putchar(x + 48);
}
else
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
}      }
putchar('\n');
}
}
