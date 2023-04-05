#include "lists.h"

/**
 * free_listint_safe - this function frees a linked list.
 * @h: pointer to head of a list.
 *
 * Return: returns the size of the freed list.
 */

void free_listp2(listp_t **head)
{
	listp_t *current;
	listp_t *temporal;

	if (head != NULL)
	{
		current = *head;
		while ((temporal = current) != NULL)
		{
			current = current->next;
			free(temporal);
		}
		*head = NULL;
	}
}


size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listint_t *current;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
