#include<stdio.h>
/**
 *main - Prints all letter alphabet characters
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a;

for (a = 0; a < 52; a++)
{
putchar(ch[a]);
}
putchar('\n');
return (0);
}
