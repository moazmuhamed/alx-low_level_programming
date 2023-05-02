#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node
 *
 * Return: pointer to first node at the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *ne = NULL;

	while (*head)
	{
		ne = (*head)->ne;
		(*head)->ne = pr;
		pr = *head;
		*head = ne;
	}

	*head = pr;

	return (*head);
}

