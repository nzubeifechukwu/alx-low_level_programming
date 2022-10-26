#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: index to insert at
 * @n: data of new node
 *
 * Return: new node; NULL if malloc fails or idx exceeds largest index of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *holder = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	/* next = *head; */

	if (*head != NULL && idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (holder == NULL)
			return (NULL);
		holder = holder->next;
		i++;
	}

	new->next = holder->next;
	holder->next = new;

	return (new);
}
