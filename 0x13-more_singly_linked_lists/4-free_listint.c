#include "lists.h"

/**
 * free_listint - function that free the lists
 * @head: first item of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != 0)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
