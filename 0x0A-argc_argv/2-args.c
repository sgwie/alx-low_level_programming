#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 *
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
int i = 0;

while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
