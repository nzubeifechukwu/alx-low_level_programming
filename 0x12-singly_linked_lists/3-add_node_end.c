#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to end of a list_t list
 * @head: reference to current head of list
 * @str: string data for the new node
 *
 * Return: address of new node, NULL if memory allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
