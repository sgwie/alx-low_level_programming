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
while (*(s + c) != '\0')
c++;
return (c);
}
/**
*str_concat- Concatenates two strings
*@s1: String
*@s2: String*
*Return: Concatenated string
*/

char *str_concat(char *s1, char *s2)
{
char *pointer;
unsigned int i, j, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = (_strlen(s1) + _strlen(s2) + 1);
pointer = (char *) malloc(size *sizeof(char));
if (pointer == 0;
{
return (NULL);
}
for (i = 0; *(s1 + i) != '\0'; i++)
*(pointer + i) = *(s1 + i);
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(pointer + i) = *(s2 + j);
i++;
}
return (pointer);
}
