#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of the list
 * @head: the pointer to the head
 * @index: Index of the node, starting at 0.
 *
 * Return: this pointer to the nth node of the list,
 * or it returns NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *latest = head;
	unsigned int tally = 0;

	while (latest != NULL && tally < index)
	{
		latest = latest->next;
		tally++;
	}
	if (tally == index && latest != NULL)
		return (latest);
	else
		return (NULL);
}
