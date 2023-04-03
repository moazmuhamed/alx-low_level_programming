#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int all1, all2, x;

	all1 = 0;
	all2 = 0;

	for (x = 0; x < size; x++)
	{
		all1 = all1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		all2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", all1, all2);
}
