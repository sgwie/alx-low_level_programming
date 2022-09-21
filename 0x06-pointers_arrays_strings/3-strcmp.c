#include "main.h"

/**
 *_strcmp - Compares two strings
 *
 *@s1: Character
 *@s2: Character
 *
 *Return: Compared string
 */

int _strcmp(char *s1, char *s2)

{
char *a = s1;
char *b = s2;

while (*a != '\0' && *b != '\0' && *a == *b)
{
a++;
b++;
}
return (*a - *b);
}
