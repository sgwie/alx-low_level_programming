#include <stdio.h>
/**
 *print_to_98 - Prints natural numbers from n to 98
 *
 *@n : Starting number
 *
 *Return : No value
 */
void print_to_98(int n)
{
for (; n <= 98; n++)
{
printf("%d, ", n);
}
printf("%d\n", n);
}
