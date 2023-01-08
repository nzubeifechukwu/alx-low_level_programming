#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the key, NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *arr_item;

	index = key_index((const unsigned char *)key, ht->size);
	arr_item = ht->array[index];

	if (arr_item != NULL)
	{
		if (strcmp(arr_item->key, key) == 0)
			return (arr_item->value);
	}

	return (NULL);
}
