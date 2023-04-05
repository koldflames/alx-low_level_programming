#include "lists.h"

/**
 * free_listp2 - this function frees a linked list
 * @head: pointer to head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	free_listp2(&((*head)->next));
	free(*head);
	*head = NULL;
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *visited = NULL;
	listint_t *curr = *h;

	while (curr != NULL)
	{
		listp_t *node = malloc(sizeof(listp_t));

		if (node == NULL)
		{
			free_listp(&visited);
			exit(98);
		}
		node->p = (void *)curr;
		node->next = visited;
		visited = node;

		listp_t *p = visited->next;

		while (p != NULL)
		{
			if (p->p == visited->p)
			{
				*h = NULL
				free_listp(&visited);
				return (nnodes);
			}
			p = p->next;
		}

		listint_t *next = curr->next;

		free(curr);
		curr = next;
		nnodes++;
	}

	*h = NULL;
	free_listp(&visited);
	return (nnodes);
}
