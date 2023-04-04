#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t list and makes the head NULL
 * @head: pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *latest, *next;

	if (head == NULL)
		return;

	latest = *head;

	while (latest != NULL)
	{
		next = latest->next;
		free(latest);
		latest = next;
	}
	*head = NULL;
}
