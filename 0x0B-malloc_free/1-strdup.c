#include "main.h"
#include <stdlib.h>

/**
 *_strdup- Rerurn pointer to newly allocated space in memory
 *
 *@str: String to be copied
 *
 *Return: NULL if str=NULL otherwise pointer to copied string
 **/

char *_strdup(char *str)
{
unsigned int length, i;
char *string;
if (str == NULL)
{
return (NULL);
}
length = 0;
while (str[length] != '\0')
{
length++;
}
string = malloc(sizeof(char) * (length + 1));
if (string == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
string[i] = str[i];
}
string[length] = '\0';
return (string);
}
