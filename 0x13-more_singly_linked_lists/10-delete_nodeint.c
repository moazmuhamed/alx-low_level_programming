#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @index: index of the node to delete
 * @head: pointer to the first element in the list
 *
 * Return: 1 (true), or -1 (wrong)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current = NULL;
	unsigned int g = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (g < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		g++;
	}


	current = node->next;
	node->next = current->next;
	free(current);

	return (1);
}

