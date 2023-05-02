/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * at the position
 * Return: pointer to the new node and NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f;
	listint_t *new_n;
	listint_t *temp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (f = 0; temp && f < idx; f++)
	{
		if (f == idx - 1)
		{
			new_n->next = temp->next;
			temp->next = new_n;
			return (new_n);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

