#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Counts string length
 *
 *@s: String
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
unsigned int c = 0;
while (s[c] != '\0')
c++;
return (c);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: index
 *
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pointer;
unsigned int size1, size2, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size1 = _strlen(s1);
size2 = _strlen(s2);
if (n > size2)
n = size2;
pointer = malloc((size1 + n + 1) * sizeof(char));
if (pointer == NULL)
return (0);
for (i = 0; i < size1; i++)
{
pointer[i] = s1[i];
}
for (; i < (size1 + n); i++)
{
pointer[i] = s2[i - size1];
}
pointer[i] = '\0';
return (pointer);
}
