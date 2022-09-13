#include "main.h"
/**
 *_islower -Checks whether is lowercase
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
