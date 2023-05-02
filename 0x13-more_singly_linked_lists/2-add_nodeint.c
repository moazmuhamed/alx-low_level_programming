#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a linked list
* @n: data to insert in that new node
* @head: pointer to the first node in the list
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = ne_nw;

	return (new_n);
}

