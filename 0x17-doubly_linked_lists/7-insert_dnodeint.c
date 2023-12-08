#include "lists.h"
#include <stdlib.h>

/**
 * create_dnodeint - Creates a new dlistint_t node.
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer of the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new_node = create_dnodeint(n);
		if (!new_node)
			return (NULL);

		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);

	new_node = create_dnodeint(n);
	if (!new_node)
		return (NULL);

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;
	return (new_node);
}
