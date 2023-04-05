/**
 * reverse_listint - this function reverses a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *latest;

	previous = NULL;
	latest = NULL;

	while (*head != NULL)
	{
		latest = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = latest;
	}

	*head = previous;
	return (*head);
}
