#include "main.h"
/**
 *print_last_digit - Returns last digit of number
 *
 *@a: Number
 *
 *Return: Last digit of number
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
return (-1 *b);
else
return (b);
}
