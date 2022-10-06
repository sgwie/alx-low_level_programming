#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Counts string length
 *
 *@s: String
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
  unsigned int c = 0;
  while (s[c] != '\0')
    c++;
  return (c);
}
/**
 *str_concat- Concatenates two strings
 *@s1: String
 *@s2: String
 *Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *pointer;
  unsigned int i, j, size;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  if (n > _strlen(s2))
    n = _strlen(s2);
  size = _strlen(s1) + n;
  pointer=malloc(size + 1);
  if (pointer == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < size; i++)
    if (i < _strlen(s1))
      *(pointer + i) = *(s1 + i);
    else
      pointer[i] = s2[i - _strlen(s1)];
  pointer[i] = '\0';
  return (pointer);
}
