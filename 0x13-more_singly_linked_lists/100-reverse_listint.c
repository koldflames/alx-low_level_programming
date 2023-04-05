/**
 * reverse_listint - this function reverses a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *latest = *head, *next = NULL;

	while (latest != NULL)
	{
		next = latest->next;
		latest->next = previous;
		previous = latest;
		latest = next;
	}

	*head = previous;

	return (*head);
}
