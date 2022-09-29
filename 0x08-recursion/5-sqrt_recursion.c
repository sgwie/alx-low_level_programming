#include "main.h"

/**
 * _sqrt_recursion - Computes square root
 *
 * @n:Integer value
 *
 * Return: Computed value
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - Find square root
 *
 * @n: Integer input
 * @b: Integer
 *
 * Return: Value integer
 */

int square(int n, int b)
{
if (b * b == n)
return (b);
else if (b * b < n)
return  (square(n, b + 1));
else
return (-1);
}
