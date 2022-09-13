#include <stdio.h>
/**
 *main - Prints first fibonacci terms uptp 4million
 *       then adds even numbers
 *
 *Return: 0
 */
int main(void)
{
long int t1 = 1, t2 = 2, nt = 0, ntc = 0;
while (nt <= 4000000)
{
nt = t1 + t2;
t1 = t2;
t2 = nt;
if ((t1 % 2 == 0))
{
ntc += t1;
}
}
printf("%ld\n", ntc);
return (0);
}
