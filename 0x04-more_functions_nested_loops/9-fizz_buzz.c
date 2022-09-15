#include <stdio.h>

/**
 *fizz - Prints numbers 1 to 100.
 *For multiples of 3 print Fizz
 *For multiples of 5 print Buzz
 *For multiples of 3 and 5 print FizzBuzz
 *
 * Return: 0.
 */
int main(void)
{
int a;
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
