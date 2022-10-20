#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a struct list_t list
 * @h: pointer to the first node of the list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		node++;
	}
	return (node);
}
