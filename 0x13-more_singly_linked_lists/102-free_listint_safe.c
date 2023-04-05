#include "lists.h"

/**
 * free_listint_safe - this function frees a linked list.
 * @h: pointer to head of a list.
 *
 * Return: returns the size of the freed list.
 */

void free_listp2(listp_t **head);

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listp_t *add; *headptr, *new;
	size_t nnodes = 0;

	headptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = headptr;
		headptr = new;
		add = headptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&headptr);
				return (nnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&headptr);
	return (nnodes);
}


void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
