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
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *pointer;

  if (size == 0 || nmemb == 0)
    return (NULL);

  pointer = malloc(nmemb * size);

  if (pointer == 0)
    return (NULL);

  _memset(pointer, 0, nmemb * size);

  return (pointer);
}
