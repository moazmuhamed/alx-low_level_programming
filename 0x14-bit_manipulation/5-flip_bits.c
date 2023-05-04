#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int K, CT = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (K = 63; K >= 0; K--)
	{
		current = exclusive >> i;
		if (current & 1)
			CT++;
	}

	return (CT);
}
