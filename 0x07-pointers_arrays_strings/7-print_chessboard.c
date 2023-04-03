#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int f;

	for (m = 0; m < 8; m++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[m][f]);
		_putchar('\n');
	}
}

