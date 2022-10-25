#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head node
 * @index: index of the head node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next_node;
	unsigned int node_index = 0;

	while (node_index <= index)
	{
		next_node = head;
		if (next_node == NULL)
			return (NULL);
		head = head->next;
		node_index++;
	}
	return (next_node);
}
