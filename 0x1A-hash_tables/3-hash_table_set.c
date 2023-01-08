#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_array_item - creates a table array item
 * @key: item key
 * @value: value associated with key
 *
 * Return: created item on success, NULL on fail
 */
hash_node_t *create_array_item(const char *key, const char *value)
{
	hash_node_t *array_item;

	if (strlen(key) == 0)
		return (NULL);

	array_item = malloc(sizeof(hash_node_t));

	if (array_item == NULL)
		return (NULL);

	array_item->key = malloc(strlen(key) + 1);
	array_item->value = malloc(strlen(value) + 1);

	strcpy(array_item->key, key);
	strcpy(array_item->value, value);
	array_item->next = NULL;

	return (array_item);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array_item, *curr_arr_item;
	hash_node_t *head; /* To handle collision */

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	array_item = create_array_item(key, value);
	if (array_item == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr_arr_item = ht->array[index];
	if (curr_arr_item == NULL)
	{
		ht->array[index] = array_item;
	}
	else
	{
		if (strcmp(curr_arr_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		/* Handle collision */
		else
		{
			head = malloc(sizeof(hash_node_t));
			if (head == NULL)
				return (0);
			strcpy(head->key, key);
			if (head->key == NULL)
				return (0);
			strcpy(head->value, value);
			head->next = ht->array[index];
			ht->array[index] = head;
		}
	}
	return (1);
}
