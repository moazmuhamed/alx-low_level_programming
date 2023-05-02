#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * @head: pointer to the first node in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_N;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
