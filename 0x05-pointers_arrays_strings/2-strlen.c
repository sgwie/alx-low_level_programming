#include "main.h"

/**
 *_strlen - Counts string length
 *
 *@s: String
 *
 Return: Length of string
*/

int _strlen(char *s)
{
int c = 0;
while(*s[c] != '\0')
c++;
return c;
}
