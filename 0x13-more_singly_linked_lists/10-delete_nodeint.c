#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted (indices starting at 0)
 * Return: if function succeeds it retunrs 1, else, -1 if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *temporal, *clone = *head;

	if (clone == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(clone);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (clone->next == NULL)
			return (-1);

		clone = clone->next;
	}

	temporal = clone->next;
	clone->next = temporal->next;
	free(temporal);
	return (1);
}
