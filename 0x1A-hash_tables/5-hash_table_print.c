#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int is_comma = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (is_comma == 1)
					printf(", ");

				node = ht->array[i];

				while (node != NULL)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;

					if (node != NULL)
						printf(", ");
				}
				is_comma = 1;
			}
		}
		printf("}\n");
	}
}
