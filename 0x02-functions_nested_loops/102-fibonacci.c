#include <stdio.h>
/**
 *main - Prints first 50 fibonacci terms
 *
 *Return: 0
 */
int main(void)
{
int i;
long int t1 = 1, t2 = 2, nt;
printf("%ld, %ld", t1, t2);
for (i = 0; i <= 47; ++i)
{
nt = t1 + t2;
printf(", %ld", nt);
t1 = t2;
t2 = nt;
}
printf("\n");
return (0);
}
