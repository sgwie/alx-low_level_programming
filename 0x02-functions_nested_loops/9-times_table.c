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
_putchar(48);
for (b = 1; b < 10; b++)
{
x = a * b;
_putchar(44);
_putchar(32);
if (x < 10)
{
_putchar(32);
_putchar(x + 48);
}
else
{
_putchar((x / 10) + 48);
_putchar((x % 10) + 48);
}      }
_putchar('\n');
}
}
