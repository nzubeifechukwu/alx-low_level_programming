#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head: points to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *first, *sec;

	first = *head;

	if (head != NULL)
	{
		while (first != NULL)
		{
			sec = first;
			first = first->next;
			free(sec);
		}
		*head = NULL;
	}
}
