#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
