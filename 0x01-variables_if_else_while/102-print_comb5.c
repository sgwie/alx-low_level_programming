#include<stdio.h>
/**
 *main - Prints all combinations of two two-digit numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d, x1, x2;
a = 48;
b = 48;
c = 48;
d = 48;
while (d < 58)
{
c = 48;
while (c < 58)
{
b = 48;
while (b < 58)
{
a = 48;
while (a < 58)
{
x1 = (d * 10) + c;
x2 = (b * 10) + a;
if (x1 < x2)
{
putchar(d);
putchar(c);
putchar(' ');
putchar(b);
putchar(a);
if (d == 57 && c == 56 && b == 57 && a == 57)
break;
putchar(',');
putchar(' ');
}
a++;
}
b++;
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
