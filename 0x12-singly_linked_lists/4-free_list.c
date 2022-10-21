#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node in list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head;
		head = head->next;
		free(next->str);
		free(next);
	}
}
