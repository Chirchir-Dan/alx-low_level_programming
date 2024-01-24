#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Flag to check if it's the first element */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first)
				printf(", "); /* Print comma and space after the first element */
			printf("'%s': '%s'", node->key, node->value);
			first = 0; /* Set flag to indicate subsequent elements */

			node = node->next;
		}
	}
	printf("}\n");
}
