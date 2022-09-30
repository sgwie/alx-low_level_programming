#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 *
 * @str: String
 *
 * Return: Void
 */

void _puts(char *str)
{
int c;
for (c = 0; ; c++)
{
if (str[c] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[c]);
}
}
