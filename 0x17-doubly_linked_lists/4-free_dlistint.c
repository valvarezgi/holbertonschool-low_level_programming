#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head:head of the list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (!head)
		return;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
