#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a linked list
 * @head: head of linked list
 * Return: sum of all the elements of a linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *aux;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	aux = head;
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
