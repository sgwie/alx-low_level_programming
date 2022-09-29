#include "main.h"

/**
 * _strlen_recursion - Checks length of string
 *
 * @s: Input string
 *
 * Return: Length
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}

/**
 * palindrome - Palindrome
 *
 * @s: Input string
 * @l: position
 *
 * Return: Integr value
 */

int palindrome(char *s, int l)
{
if (l < 1)
{
return (1);
}
if (*s == *(s + l))
{
return (palindrome(s + 1, l - 2));
}
return (0);
}

/**
 * is_palindrome - Checks palindrome
 *
 * @s: Input string
 *
 * Return: Recursion
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (palindrome(s, len - 1));
}
