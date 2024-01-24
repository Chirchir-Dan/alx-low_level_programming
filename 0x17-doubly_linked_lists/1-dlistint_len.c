#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	/* Traverse the list and count each element */
	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}