#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_new_node - Creates a new hash node.
 * @key: The key for the new node.
 * @value: The value for the new node.
 *
 * Return: A pointer to the new node.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	/* Allocate memory for the new node */
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	/* Duplicate the key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Duplicate the value */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	/* Initialize next pointer to NULL */
	new_node->next = NULL;
	return (new_node);
}

/**
 * update_existing_node - Updates the value of an existing node.
 * @node: The node to update.
 * @value: The new value for the node.
 *
 * Return: 1 on success, 0 on failure.
 */
int update_existing_node(hash_node_t *node, const char *value)
{
	/* Free the existing value */
	free(node->value);
	/* Duplicate the new value */
	node->value = strdup(value);
	/* Return 1 if successful, 0 otherwise */
	return ((node->value != NULL) ? 1 : 0);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Calculate index using key_index function */
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node;
	hash_node_t *current;
	

	 /* Check for NULL hash table or key */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Check if the index already has a linked list */
	if (ht->array[index] != NULL)
	{
		/* Traverse the linked list at the index */
		current = ht->array[index];

		while (current != NULL)
		{
			/* If the key already exists, update the value */
			if (strcmp(current->key, key) == 0)
				return (update_existing_node(current, value));
			current = current->next;
		}
	}

	/* Create a new node */
	new_node = create_new_node(key, value);

	if (new_node == NULL)
		return (0);

	/* Insert the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Return 1 to indicate success */
	return (1);
}
