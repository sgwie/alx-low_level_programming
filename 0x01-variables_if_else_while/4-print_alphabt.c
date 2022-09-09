#include<stdio.h>
/**
 *main - Prints all letter alphabet characters
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 24; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
