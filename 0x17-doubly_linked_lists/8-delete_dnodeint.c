#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer of the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;
	dlistint_t *next_node;

	if (!head || !*head)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (!temp || !temp->next)
	{
		return (-1);
	}
	next_node = temp->next->next;
	if (next_node)
	{
		next_node->prev = temp;
	}
	free(temp->next);
	temp->next = next_node;

	return (1);
}

