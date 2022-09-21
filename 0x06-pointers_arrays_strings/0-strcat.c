#include "main.h"

/**
 **_strcat - Concatenates two strings
 *
 *@dest - Destination string
 *@src - Source string
 *
 *Return - Concatenated string
 */

char *_strcat(char *dest, char *src)
{
  int i, j;
  
  for(i = 0; dest[i] != '\0'; ++i);
  for(j=0; src[j] != '\0'; ++j, ++i)
    {
      dest[i] = src[j];
    }
  src[i] = '\0';

  return (dest);
}
