#include "main.h"

/**
 * more_numbers - Prints numbers between 0 to 14
 *                10 times
 *
 * Return: No value
 */

void more_numbers(void)
{
int a, c;
for (a = 0; a < 10; a++)
{
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
}
