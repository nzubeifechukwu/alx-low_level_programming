#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all data of a dlistint_t linked list
 * @head: head of the list
 *
 * Return: sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
