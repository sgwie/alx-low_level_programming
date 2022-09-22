#include "main.h"

/**
 * leet - Encodes a string to 1337
 *
 * @s: The string to be encoded
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
int a = 0, b;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (s[a])
{
for (b = 0; b <= 7; b++)
{
if (s[a] == leet[b] || s[a] - 32 == leet[b])
s[a] = b + '0';
}
a++;
}
return (s);
}
