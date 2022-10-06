#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: Pointer to the newly created array, if min > max
 * or malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
int *pointer, i;
if (min > max)
return (NULL);
pointer = malloc(sizeof(*pointer) * ((max - min) + 1));
if (pointer == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
pointer[i] = min;
return (pointer);
}
