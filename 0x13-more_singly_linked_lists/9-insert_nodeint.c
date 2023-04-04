#include "lists.h"

/**
 * insert_nodeint_at_index - this function adds a new node to a linked list
 * at a given position
 * @head : the pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 * @n    : value for the new node to be added
 * Return: pointer to the new node or NULL if the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temporal = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temporal;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temporal == NULL || temporal->next == NULL)
			return (NULL);

		temporal = temporal->next;
	}

	new_node->next = temporal->next;
	temporal->next = new_node;
	return (new_node);
}
