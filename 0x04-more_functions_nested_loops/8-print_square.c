#include "main.h"

/**
 * print_square - Prints square of n numbers
 *
 *@size: Number of # to be printed
 *
 * Return: Void
 */

void print_square(int size)
{
int a, b;
if (size > 0)
{
for (b = 0; b < size ; b++)
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
