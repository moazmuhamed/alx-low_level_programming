#include <stioh.h>

/**
 * _puts_recursion function like puts()
 * @m: input
 * return 0 success
 */
void _puts_recursion(char *m)
{
	if (*m)
{
	putchar(*m);
	_puts_recursion(m + 1);
}
else
putchar('\n');
}
