#include "main.h"

/**
 * print_square - Prints square of n numbers
 *
 *@n: Number of # to be printed
 *
 * Return: Void
 */

void print_square(void)
{
int a, b, n;
if (n > 0)
{
for (b = 0; b < n ; b++)
{
for (a = 0; a < n; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
