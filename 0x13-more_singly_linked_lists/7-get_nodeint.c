/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @index: index of the node to return
 * @head: first node in the linked list
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *node = head;

	while (node && f < index)
	{
		node = node->next;
		f++;
	}

	return (node ? node : NULL);
}
