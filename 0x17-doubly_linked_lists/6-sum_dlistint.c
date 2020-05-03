#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of the data nodes
 * @head: head of the list
 * Return: sum of data nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
