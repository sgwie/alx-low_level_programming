#include "main.h"
/**
 *print_sign - Checks if number is positve,zero or negetive
 *
 *@n: Number
 *
 *Return: 1 if >0, 0 if =0 , -1 if <0
 */
int _print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}
