#include "main.h"

/**
 * print_triangle - Print triangle
 *
 * @size : Integer
 *
 * Return:void
 */

void print_triangle(int size)
{
int a = 1, b;
while (a <= size && size > 0)
{
b = 0;
while (b < size - a)
{
_putchar(32);
b++;
}
b = 0;
while (b < i)
{
_putchar(35);
b++;
}
_putchar('\n');
a++;
}
if (a == 1)
_putchar('\n');
}
