#include "lists.h"


/**
 * listint_len - returns the num of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);


