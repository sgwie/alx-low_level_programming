#include <stdio.h>
/**
 * main - Prints all combinations of three numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
a = 48;
b = 48;
c = 48;
while (b < 58)
{
a = 48;
while (a < 58)
{
c = 48;
while (c < 58)
{
if (b != a && b != c && a != c && b < a && a < c)
{
putchar(b);
putchar(a);
putchar(c);
if (a == 56 && b == 55 && c == 57)
{
break;
}
putchar(',');
putchar(' ');
}
c++;
}
a++;
}
b++;
}
putchar('\n');
return (0);
}
