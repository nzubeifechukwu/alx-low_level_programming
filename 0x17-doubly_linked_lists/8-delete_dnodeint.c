#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index of doubly linked list
 * @head: points to the head of the list
 * @index: given index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp, *holder;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	holder = temp->next;
	holder->prev = temp->prev;
	holder->next = holder->next;
	free(temp);

	return (1);
}
