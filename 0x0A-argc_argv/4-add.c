#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check - Checks string if there are digits
 *
 * @s: Array string
 *
 * Return: 0
 */

int check(char *s)

{
unsigned int c;

c = 0;
while (c < strlen(s))
{
if (!isdigit(s[c]))
{
return (0);
}
c++;
}
return (1);
}

/**
 * main - Add two digits
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int c;
int s;
int sum = 0;
c = 1;
while (c < argc)
{
if (check(argv[c]))
{
s = atoi(argv[c]);
sum += s;
}

else
{
printf("Error\n");
return (1);
}
c++;
}
printf("%d\n", sum);
return (0);
}
