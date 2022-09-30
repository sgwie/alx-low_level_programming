#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments passed to it
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
