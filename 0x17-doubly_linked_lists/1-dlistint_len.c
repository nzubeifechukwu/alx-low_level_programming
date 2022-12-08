#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - computes the number of elements in a linked dlistint_t list
 * @h: points to the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
