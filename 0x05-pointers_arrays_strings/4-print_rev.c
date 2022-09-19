#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 *@s: String
 *
 *Return: Void
 */

void print_rev(char *s)
{
int c = 0;
while (s[c])
c++;
while (c--)
_putchar(s[c]);
_putchar('\n');
}
