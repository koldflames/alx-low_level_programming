#include "lists.h"

/**
 * listint_len - this function counts the number of nodes in a linked list
 * @h: head pointer of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
