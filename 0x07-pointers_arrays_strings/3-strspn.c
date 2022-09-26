#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 *
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 *
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
int i, j;
int c = 0;
char *a, *b;

a = s;
b = accept;

i = 0;
while (a[i] != '\0')
{
j = 0;
while (b[j] != '\0')
{
if (b[j] == a[i])
{
c++;
break;
}
j++;
}
if (s[i] != accept[j])
{
break;
}
i++;
}
return (c);
}
