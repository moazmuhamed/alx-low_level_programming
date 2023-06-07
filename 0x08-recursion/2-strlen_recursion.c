#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: pointer  The string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
int str_long = 0;
if (*s)
{
	str_long++;
	str_long += _strlen_recursion(s + 1);
}
return (str_long);
}
