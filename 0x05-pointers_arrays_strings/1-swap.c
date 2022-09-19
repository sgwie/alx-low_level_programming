#include "main.h"

/**
 *swap_int - Swaps two integers
 *
 *@a: Integer
 *@b: Integer
 *
 *Return: 0
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
