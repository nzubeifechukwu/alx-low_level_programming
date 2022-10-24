#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: points to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
