#include "main.h"

/**
 *_memset - Fills memory with a constant byte
 *
 *@s: Pointer block of memory to fill
 *@b: Value to set
 *@n: Bytes of the memory
 *
 *Return: Pointer to string (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
