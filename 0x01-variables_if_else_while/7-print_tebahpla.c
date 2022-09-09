#include<stdio.h>
/**
 *main - Prints small letter reverse alphabet characters
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar (c);
}
strrev (c);
putchar ('\n');
return (0);
}
