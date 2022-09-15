#include <stdio.h>

/**
 * main - Prints numbers 1 to 100
 *        Multiples of 3 prints Fizz
 *        Multiples of 5 prints Buzz
 *        Multiples of 3 and 5 prints FizzBuzz
 *
 *Return: Always 0.
 */
int main(void)
{
int a;
a = 1;
printf("%d", a);
for (a = 2; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf(" FizzBuzz");
}
else if (a % 3 == 0)
{
printf(" Fizz");
}
else if (a % 5 == 0)
{
printf(" Buzz");
}
else
{
printf(" %d", a);
}
}
printf("\n");
return (0);
}
