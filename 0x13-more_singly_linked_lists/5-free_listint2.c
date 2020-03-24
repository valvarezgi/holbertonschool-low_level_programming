#include "lists.h"

/**
 * free_listint2 - function that free the lists
 * @head: first item of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux, *aux2;

	aux2 = *head;
	while (head != 0 && aux2 != 0)
	{
		aux = aux2;
		aux2 = aux2->next;
		free(aux);
	}
	*head = NULL;
}