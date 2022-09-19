#include "main.h"

/**
 * rev_string - Prints a string in reverse
 *
 * @s: String
 *
 * Return: 0
 */

void rev_string(char *s)
{
int len, c, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
c = 0;
half = len / 2;

while (half--)
{
temp = s[len - c - 1];
s[len - c - 1] = s[c];
s[c] = temp;
c++;
}
}
