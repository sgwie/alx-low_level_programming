#include "main.h"
/**
 *_isalpha - Checks if is alphabet
 *
 *@c: ASCII character
 *
 *Return: 1 if alphabet character, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
return (1);
else
return (0);
}
