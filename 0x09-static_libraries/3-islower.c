#include "main.h"
/**
 *_islower -Checks whether is lowercase
 *
 *@c: The character is in ASCII code
 *
 *Return: 1 if lowecase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
