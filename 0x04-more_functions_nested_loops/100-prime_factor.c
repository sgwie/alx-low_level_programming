#include <stdio.h>

/**
 * main - Prints largest prime factor of number.
 *
 *Return: Always 0.
 */

int main(void)
{
long int number, factor;
number = 612852475143;
for (factor = 2; factor <= number; factor++)
{
if (number % factor == 0)
{
number = number / factor;
factor--;
}
}
printf("%ld\n", factor);
return (0);
}
