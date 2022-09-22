#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: Input string
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
int c = 0, i;
int x[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(s + c) >= 97 && *(s + c) <= 122)
*(s + c) = *(s + c) - 32;
c++;

while (*(s + c) != '\0')
{
for (i = 0; i < 13; i++)
{
if (*(s + c) == x[i])
{
if ((*(s + (c + 1)) >= 97) && (*(s + (c + 1)) <= 122))
*(s + (c + 1)) = *(s + (c + 1)) - 32;
break;
}
}
c++;
}
return (s);
}
