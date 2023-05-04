#include "main.h"

/**
 * binary_to_uint - convert a binary num to unsigned int
 * @b: string containing the binary num
 *
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int K;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (K = 0; b[K]; K++)
	{
		if (b[K] < '0' || b[K] > '1')
			return (0);
		val = 2 * val + (b[K] - '0');
	}

	return (val);
}
