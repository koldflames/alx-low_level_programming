#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	listint_t *latest = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	while (latest != NULL && i < index)
	{
		previous = latest;
		latest = latest->next;
		i++;
	}
	if (latest == NULL)
	{
		return (-1);
	}
	if (previous == NULL)
	{
		*head = latest->next;
	}
	else
	{
		previous->next = latest->next;
	}
	free(latest);
	return (1);
}
