

/**
 **_strcat - Concatenates two strings
 *
 *@dest - Destination string
 *@src - Source string
 *
 *Return - Concatenated string
 */

/* C program to concatenate two strings without
 * using standard library function strcat()
 */
#include <stdio.h>
int main()
{
  int a, b;
  char str1[a], str2[b], i, j;
  printf("\nEnter first string: ");
  scanf("%s",str1);
  printf("\nEnter second string: ");
  scanf("%s",str2);
  /* This loop is to store the length of str1 in i
   * It just counts the number of characters in str1
   * You can also use strlen instead of this.
   */
  for(i=0; str1[i]!='\0'; ++i);

  /* This loop would concatenate the string str2 at
   * the end of str1
   */
  for(j=0; str2[j]!='\0'; ++j, ++i)
    {
      str1[i]=str2[j];
    }
  // \0 represents end of string
  str1[i]='\0';
  printf("\nOutput: %s",str1);

  return 0;
}
