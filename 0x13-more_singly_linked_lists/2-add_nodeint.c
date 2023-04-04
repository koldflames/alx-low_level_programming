#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: a pointer to a pointer to the first element (head) of the list
 * @n: the value to be stored in the new node
 *
 * Return: a pointer to the new element of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/* Here we allocate memory for the new element */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Initialize the new node with the given value */
	new_node->n = n;
	/* Set the new node to point to the current head node */
	new_node->next = *head;
	/* Set the head pointer to point to the new node */
	*head = new_node;
	return (new_node);
}
