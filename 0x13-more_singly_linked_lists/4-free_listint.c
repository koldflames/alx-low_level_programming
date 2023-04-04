#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: this is the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temporal;

	while (head != NULL)
	{
		temporal = head;
		head = head->next;
		free(temporal);
	}
}
