#include "main.h"

/**
 * get_bit - returns the value of  bit at an index in a decimal number
 * @n: num to search
 * @index: index of the bit
 *
 * Return: size of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}


