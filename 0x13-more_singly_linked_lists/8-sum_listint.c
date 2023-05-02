#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: 1 node in the linked list
 *
 * Return: resulting summution
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}



