#include "main.h"

/**
 * is_prime_number - Check if n is a prime number
 *
 * @n: Integr input
 *
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
return (check(n, 2));
}

/**
 * check - Check all number < n if they can divide it
 *
 * @n: Integer input
 * @b: Integr input
 *
 * Return: Integr value
 */

int check(int n, int b)
{
if (b >= n && n > 1)
return (1);
else if (n % b == 0 || n <= 1)
return (0);
else
return (check(n, b + 1));
}
