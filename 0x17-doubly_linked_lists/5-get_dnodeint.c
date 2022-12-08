#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node of a doubly linked list at a given index
 * @head: points to the head of the list
 * @index: given index
 *
 * Return: node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
