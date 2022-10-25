#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *first;

	while (head != NULL)
	{
		first = head;
		free(first);
		head = head->next;
	}
}
