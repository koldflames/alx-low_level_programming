#include "lists.h"

/**
 *dlistint_len - Return list length of a doubly-linked list
 *Description -  This function counts the number of nodes in a doubly-list
 *by traversing it from the head node to the end
 *@h: Pointer to the head of the list
 *
 *Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}

