#include <stdlib.h>
#include "main.h"

/**
 *create_array- Creates array
 *
 *@size:Size of array
 *@c:Character
 *
 *Return: NULL if size is 0 or pointer to array if NULL fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
