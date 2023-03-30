#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h) {
    size_t count = 0;
    const node_t *current = h->head; /* start at the head of the list */

    while (current != NULL) { /* traverse the list until the end */
        count++; /* increment the counter */
        current = current->next; /*move to the next node*/
    }

    return count; /*return the final count*/
}
