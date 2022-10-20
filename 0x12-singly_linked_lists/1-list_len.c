#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to first node in the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
