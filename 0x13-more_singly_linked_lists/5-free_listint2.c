#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head: points to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *first;

	while (*head != NULL)
	{
		first = *head;
		*head = (*head)->next;
		free(first);
	}
	*head = NULL;
}
