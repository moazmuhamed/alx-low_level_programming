#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 *  * Return: number of nodes
 *  * @f: linked list of type listint_t to print
 *
 */
size_t print_listint(const listint_t *f)
{
size_t num = 0;

while (f)
{
printf("%d\n", f->n);
num++;
f = f->next;
}

return (num);
}

