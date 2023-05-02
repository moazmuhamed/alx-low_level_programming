#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
* or 0 if the list is empty
* Return: the data inside the elements that was deleted,
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (number);
}
