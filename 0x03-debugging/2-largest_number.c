#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *
 *@a: first integer
 *
 *@b: second integer
 *
 *@c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
printf("%d\n is the largest number", a);
}
else if (b > a && b > c)
{
largest = b;
printf("%d\n is the largest number", b);
}
else
{
largest = c;
printf("%d\n is the largest number", c);
}
return (largest);
}
