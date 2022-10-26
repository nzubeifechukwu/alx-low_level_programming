#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data of a listint_t linked list
 * @head: points to the first node of the list
 *
 * Return: sum of the data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
