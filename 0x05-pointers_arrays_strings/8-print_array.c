#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Input array.
 * @n: Input n elements
 *
 * Return: no return.
 */

void print_array(int *a, int n)
{
int c = 0;
for (; c < n; c++)
{
printf("%d", *(a + c));
if (c != (n - 1))
printf(", ");
}
printf("\n");
}
