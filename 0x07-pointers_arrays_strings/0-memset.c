#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of changed bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int m;

	for ( m = 0; > 0; m++,n--)
	{
		s[m] = b;
	
	}
	return (s);
}
